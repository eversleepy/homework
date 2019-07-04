#define pin pinMode
#define out OUTPUT
#define dw digitalWrite
#define A1 2
#define A2 3
#define A3 4
#define A4 5
#define LT 10
#define LE 8
#define BI 9
void setup()
{
  pin(A1,out);
  pin(A2,out);
  pin(A3,out);
  pin(A4,out);
  pin(LT,out);
  pin(LE,out);
  pin(BI,out);
  Serial.begin(9600);
  dw(LE,LOW);
  dw(LT,HIGH);
  dw(BI,HIGH);
}

int git;
void loop()
{
  delay(50);
  dw(LE,HIGH);
if(Serial.available()>0)
{
  git=Serial.read();
  Serial.write(git);
}
  git=git-'0';
  show(git);
  delay(50);
  dw(LE,LOW);
}
char show(char g)
{
  if(g&1)
  dw(A1,HIGH);
  else
  dw(A1,LOW);
  if(g&1<<1)
  dw(A2,HIGH);
  else
  dw(A2,LOW);
  if(g&1<<2)
  dw(A3,HIGH);
  else
  dw(A3,LOW);
  if(g&1<<3)
  dw(A4,HIGH);
  else
  dw(A4,LOW);
  return 0;
}
