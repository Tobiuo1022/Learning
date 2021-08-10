class WordSynth
    def initialize()
        @effects = []
    end

    def add_effects(effect)
        @effects.push(effect)
    end

    def play(original_words)
        @effects.inject(original_words) { |words, effect|
            effect.call(words)
        }
    end
end
