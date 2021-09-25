int x = 0;

void setup()
{ 
  pinMode(2 , INPUT);
  pinMode(13, OUTPUT);  
}

void loop()
{ // Đọc cổng 2, cất vào biến x
  x = digitalRead(2);
  // Kiểm tra xem nút có đang nhấn hay không
  if(x == HIGH){
    // Bật led
  digitalWrite(13, HIGH);
}else{
    // Tắt led
  digitalWrite(13, LOW);
  }
  delay(100); // Wait for 1000 millisecond(s)
}
