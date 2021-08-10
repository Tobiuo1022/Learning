module Effects
    def self.reverse()
        ->(words) {
            words
                .split(' ')
                .map(&:reverse)
                .join(' ')
        }
    end

    def self.echo(rate)
        ->(words) {
            words
                .chars
                .map { |c| c == ' ' ? c : c * rate }
                .join()
        }
    end

    def self.loud(level)
        ->(words) {
            words
                .split(' ')
                .map { |word| word.upcase + ( '!' * level ) }
                .join(' ')
        }
    end
end
