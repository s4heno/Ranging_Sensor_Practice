int value = 0;

void setup() {
  // センサの値をグラフで表示する準備
  Serial.begin(600);
}

void loop() {
  // 変数valueにA0ピンの値を読み取って代入する
  value = analogRead(0);

  // 読み取った値をグラフや数値として表示させる
  Serial.println(value);
}
