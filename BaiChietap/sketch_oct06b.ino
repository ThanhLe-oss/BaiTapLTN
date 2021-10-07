int x=0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  // đọc giá trị từ biến trở, cất vào biến x
  x = analogRead(A0);
  // quy đổi sang độ sáng
  int brightness = map(x,0,1023,0,255);
  // sáng led theo brightness 
  analogWrite(9,brightness);
 }
