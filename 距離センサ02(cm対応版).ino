int value = 0;

void setup() {
  // センサの値をグラフで表示する準備
  Serial.begin(600);
}

void loop() {
  // 変数valueにA0ピンの値を読み取って代入する
  value = analogRead(0);

  // map関数で出力電圧の値10～450を50cm～4cmに変換する
  // 使い方：map(変換対象, その最小値, その最大値, 最小値に対応させる値、最大値に対応させる値)
  value = map(value, 10, 450, 50, 4);

  Serial.println(value);
}
