class Tempo
    include Comparable

    attr_reader :bpm

    def initialize(bpm)
        @bpm = bpm
    end

    def <=>(other)
        if other.is_a?(Tempo)
            @bpm <=> other.bpm
        else
            nil
        end
    end

    # override
    def inspect()
        "#{@bpm}bpm"
    end
end
