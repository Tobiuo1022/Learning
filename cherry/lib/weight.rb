class User
    attr_reader :name, :weight
    protected :weight

    def initialize(name, weight)
        @name = name
        @weight = weight
    end

    def greet()
        "#{@name}です!!"
    end

    def heaveir?(other_user)
        other_user.weight < @weight
    end
end

# public: デフォルトなので必要なし.
# protected: 同クラスなら使える.
# private: 同インスタンスなら使える. 厳密にはレシーバー禁止.

# attr_accesser: デフォルトなので必要なし. 明示したい時にでも.
# attr_reader: 読み込みのみ.
# attr_writer: 書き込みのみ. 必要か?

# なるべくprivateやprotectedを使うようにする.
# 変数はattr_readerほぼ一択.
# attr_accesser, attr_writerはTDA原則に反するのでなるべく使いたくない.
