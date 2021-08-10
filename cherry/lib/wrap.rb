require './lib/verify'

class PrimaryColor
    attr_reader :value

    public def initialize(value)
        @value=(value)
    end

    public def inspect()
        @value
    end

    # override
    public def to_s(*args)
        @value.to_s(*args)
    end

    private def value=(value)
        @value = value if _check_value(value)
    end

    private def _check_value(value)
        _check_type(value, Integer) &&
        _check_range(value, (0..255))
    end

    def method_missing(name, *args)
        # コイツが実質継承の役割を担っている.
        super unless @value.methods.include?(name)
        @value.send(name, *args)
    end
end

class Color
    attr_reader :r, :g, :b

    public def initialize(r, g, b)
        @r=(r)
        @g=(g)
        @b=(b)
    end

    private def r=(r)
        @r = r if _check_primary_color(r)
    end

    private def g=(g)
        @g = g if _check_primary_color(g)
    end

    private def b=(b)
        @b = b if _check_primary_color(b)
    end

    public def inspect()
        [@r, @g, @b]
    end

    public def to_Color16()
        hex = [@r, @g, @b].inject('#') do |hex, primary_color|
            hex + primary_color.to_s(16).rjust(2, '0')
        end
        Color16.new(hex)
    end

    private def _check_primary_color(primary_color)
        _check_type(primary_color, PrimaryColor)
    end
end

class Color16
    attr_reader :code, :r, :g, :b

    public def initialize(code)
        @code=(code)
        set_rgb(code)
    end

    private def code=(code)
        @code = code if _check_code(code)
    end

    private def set_rgb(code)
        primary_color_list = code.scan(/\h\h/).map(&:hex)
        @r = PrimaryColor.new(primary_color_list[0])
        @g = PrimaryColor.new(primary_color_list[1])
        @b = PrimaryColor.new(primary_color_list[2])
    end

    public def inspect()
        @code
    end

    public def to_Color()
        Color.new(@r, @g, @b)
    end

    private def _check_code(code)
        # primary_color_list = code.scan(/\h\h/).map(&:hex)
        _check_type(code, String) &&
        code[0] == '#'
    end
end


r = PrimaryColor.new(100)
g = PrimaryColor.new(150)
b = PrimaryColor.new(255)

mycolor = Color.new(r, g, b)

hex = mycolor.to_Color16
p hex

decimal = hex.to_Color
p decimal
