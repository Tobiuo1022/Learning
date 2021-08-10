def fizz_buzz(num)
    hoge = []
    hoge.push('Fizz') if num%3 == 0
    hoge.push('Buzz') if num%5 == 0
    out = hoge.join(' ')
    out = num.to_s if out == ''
    return out
end
