
int port = 2;
unsigned long dure;
float tower;

void setup()
{
  pinMode(port, INPUT);
  Serial.begin(9600);
}
void loop()
{
  dure = pulseIn(port, LOW);
  tower = (1000000*60)/dure;
  // Serial.println("tr/Min est :");
  Serial.println(tower);
  delay(500);
}
