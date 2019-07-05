
String str = "";
void trans(int n)
{
  switch(n)
    {
      case 97:str="*-  ";b;//a
      case 98:str="-***";b;//b
      case 99:str="-*-*";b;//c
      case 100:str="-** ";b;//d
      case 101:str="*   ";b;//e
      case 102:str="**-*";b;//f
      case 103:str="--* ";b;//g
      case 104:str="****";b;//h
      case 105:str="**  ";b;//i
      case 106:str="*---";b;//j
      case 107:str="-*- ";b;//k
      case 108:str="*-**";b;//l
      case 109:str="--  ";b;//m
      case 110:str="-*  ";b;//n
      case 111:str="--- ";b;//o
      case 112:str="*--*";b;//p
      case 113:str="--*-";b;//q
      case 114:str="*-* ";b;//r
      case 115:str="*** ";b;//s
      case 116:str="-   ";b;//t
      case 117:str="**- ";b;//u
      case 118:str="***-";b;//v
      case 119:str="*-- ";b;//w
      case 120:str="-**-";b;//x
      case 121:str="-*--";b;//y
      case 122:str="--**";b;//z
      case 32:str="*-*-";b;//空格
      case 10:str="----";b;//回车
      default:break;
    }
}
void dot()
  {
    digitalWrite(pin, HIGH);
    delay(250);
    digitalWrite(pin, LOW);
    delay(250);
  }
void dash()
  {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    delay(250);
  }
int pin=13;
void setup() 
  {
    pinMode(pin, OUTPUT);
    Serial.begin(9600);
  }

void loop() 
  {
    int gr;
    while(Serial.available()>0)
      {
        gr = Serial.read();
        trans(gr);
        int i=0;
        for(i=0;i<4;i++)
          {
            if(str[i]=='*')
            dot();
            if(str[i]=='-')
            dash();
            delay(50);
          }
      delay(300);
      str="";
      }
  }
