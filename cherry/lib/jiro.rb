topping_list = ["ニンニク", "アブラ", "ヤサイ", "カラメ"]
amount_list = ["半分", "少なめ", "普通", "マシ", "マシマシ"]

topping_list.each do |topping|
    amount = amount_list.sample
    # 量が普通ならわざわざ出力しない. 
    puts topping + amount unless amount == "普通"
end
