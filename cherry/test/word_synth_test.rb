require 'minitest/autorun'
require './lib/effects'
require './lib/word_synth'

class WordSynthTest < Minitest::Test
    def setup()
        @test_str = 'Ruby is fun!'
        @synth = WordSynth.new()
    end

    def test_play_without_effects()
        assert_equal 'Ruby is fun!', @synth.play(@test_str)
    end

    def test_play_with_reverse()
        @synth.add_effects(Effects.reverse)
        assert_equal 'ybuR si !nuf', @synth.play(@test_str)
    end

    def test_play_with_many_effects()
        @synth.add_effects(Effects.echo(2))
        @synth.add_effects(Effects.loud(3))
        @synth.add_effects(Effects.reverse)
        assert_equal '!!!YYBBUURR !!!SSII !!!!!NNUUFF', @synth.play(@test_str)
    end
end
