`chap6/anfis.ipynb`にて`anfis`と言うライブラリを用いてるのですが, python2で記述されている古いライブラリですのでpython3で動くように手を加えています. 
具体的には以下のことを変更しています. 

- implicit relative importをexplict relative importに変更
- `anfis/anfis.py`を`anfis/xxx.py`にrenameし, それに伴って`anfis/__init__.py`内のimport文も変更
- `print xxx`を`print(xxx)`に変更
- `<>`を`!=`に変更

`chap7`にて`fuzzycmeans`というライブラリにも手を加えています. 

- implicit relative importをexplict relative importに変更
- `print xxx`を`print(xxx)`に変更
- `xrange`を`range`に変更

chapter7のFuzzy ARTのプログラム(p.235)は教科書内で言及されている`FuzzyART.py`が見当たらず断念しています. 