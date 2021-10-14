int latchPin = 4; // khai báo các chân kết nối thanh ghi dịch

int clockPin = 5;

int dataPin = 3;

int pins [8] = {6, 7, 8, 9, 10, 11, 12, 13}; // các chân cathode chung

byte A[8] = {   B00000000, // mã để hiển thị ký tự tương ứng lên led ma trận

                B00011000,

                B00100100,

                B01000010,

                B01111110,

                B01000010,

                B01000010,

                B00000000

            };
byte B[8] = {     B00000000,

                  B11111100,

                  B10000010,

                  B10000010,

                  B11111100,

                  B10000010,

                  B10000010,

                  B11111110

            };
byte blank[8] = { B00000000,

                  B00000000,

                  B00000000,

                  B00000000,

                  B00000000,

                  B00000000,

                  B00000000,

                  B00000000

                };

byte R[8] = {  B00000000,

               B01111000,

               B01000100,

               B01000100,

               B01111000,

               B01010000,

               B01001000,

               B01000100

            };
void setup() {

     Serial.begin(9600); // dữ liệu code đã lập trình từ máy tính nạp vào Arduino với tốc độ 9600 baud rate

     pinMode(latchPin, OUTPUT); // cấu hình các chân là ngõ ra

     pinMode(clockPin, OUTPUT);

     pinMode(dataPin, OUTPUT);

    for (int i = 0; i < 8; i++) { // vòng lặp để cấu hình các chân cathode chung

    pinMode(pins[i], OUTPUT);

    digitalWrite(pins[i], HIGH);
  }
}

 void loop() {
  for (int k = 0; k < 1000; k++) { // hiển thị mỗi ký tự A là ký tự đã lập trình ở trên trong 1 giây
   display_char(A);
  }
  for (int k = 0; k < 1000; k++) {
  display_char(B);
  }

  for (int k = 0; k < 1000; k++) {
    display_char(R);
    }
}
void display_char(byte ch[8]) { 

  for (int j = 0; j < 8; j++) {

    digitalWrite(latchPin, LOW);

    digitalWrite(pins[j], LOW);
    
    shiftOut(dataPin, clockPin, LSBFIRST, ch[j]);

    digitalWrite(latchPin, HIGH);

    //delay(1);

    digitalWrite(latchPin, LOW);

    shiftOut(dataPin, clockPin, LSBFIRST, B00000000); //tắt hết led trước khi hiển thị ký tự tiếp theo

    digitalWrite(latchPin, HIGH);

    digitalWrite(pins[j], HIGH);

  }

}
