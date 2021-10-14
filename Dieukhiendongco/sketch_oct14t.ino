// Kết nối động cơ A
int enA = 9;
int in1 = 8;
int in2 = 7;
// Kết nối động cơ B
int enB = 3;
int in3 = 5;
int in4 = 4;

void setup() {
  // Đặt tất cả các chân điều khiển động cơ thành đầu ra
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // Tắt động cơ để về trạng thái ban đầu
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  directionControl();
  delay(1000);
  speedControl();
  delay(1000);
}

//  Cho phép kiểm soát hướng quay của động cơ
void directionControl() {
  // Đặt động cơ ở tốc độ tối đa
  // Đối với PWM, giá trị tối đa có thể là 0 đến 255
  analogWrite(enA, 255);
  analogWrite(enB, 255);

  // Bật động cơ A & B
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(1000);
  
  // Bây giờ thay đổi hướng động cơ
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(1000);
  
  // Tắt động cơ
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

// Cho phép kiểm soát tốc độ của động cơ
void speedControl() {
  // Bật động cơ
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  // Tăng tốc từ 0 đến tốc độ tối đa
  for (int i = 0; i < 256; i++) {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
  
  // Giảm tốc từ tốc độ tối đa xuống 0
  for (int i = 255; i >= 0; --i) {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
  
  // Bây giờ tắt động cơ
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
