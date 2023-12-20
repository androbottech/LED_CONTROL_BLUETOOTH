#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);// TX,RX

#define LR 4 //LED ROJO
#define LY 5 //LED AMARILLO
#define LB 6 //LED AZUL
#define LG 7 //LED VERDE
#define LN 8 //LED BLANCO
#define LW 9 //LED NARANJA
void setup() 
{
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(LR,OUTPUT);
  pinMode(LY,OUTPUT);
  pinMode(LB,OUTPUT);
  pinMode(LG,OUTPUT);
  pinMode(LN,OUTPUT);
  pinMode(LW,OUTPUT);
}

void loop() 
{
  /*if (bluetooth.available())
    Serial.write(bluetooth.read());
  if (Serial.available())
    bluetooth.write(Serial.read());*/
    
  int dato=bluetooth.read();
  if(dato=='1') //PREGUNTAR SI ES BOTON ROJO
    {
      if(digitalRead(LR)==1)
        {digitalWrite(LR,0);}
      else
        {digitalWrite(LR,1);}
      delay(100);
    }
   if(dato=='2') PREGUNTAR SI ES BOTON AMARILLO
    {
      if(digitalRead(LY)==1)
        {digitalWrite(LY,0);}
      else
        {digitalWrite(LY,1);}
      delay(100);
    }
    if(dato=='3') PREGUNTAR SI ES BOTON AZUL
    {
      if(digitalRead(LB)==1)
        {digitalWrite(LB,0);}
      else
        {digitalWrite(LB,1);}
      delay(100);
    }
    if(dato=='4') PREGUNTAR SI ES BOTON VERDE
    {
      if(digitalRead(LG)==1)
        {digitalWrite(LG,0);}
      else
        {digitalWrite(LG,1);}
      delay(100);
    }
    if(dato=='5') PREGUNTAR SI ES BOTON MORADO
    {
      if(digitalRead(LN)==1)
        {digitalWrite(LN,0);}
      else
        {digitalWrite(LN,1);}
      delay(100);
    }
    if(dato=='6') PREGUNTAR SI ES BOTON NARANJA
    {
      if(digitalRead(LW)==1)
        {digitalWrite(LW,0);}
      else
        {digitalWrite(LW,1);}
      delay(100);
    }
}
