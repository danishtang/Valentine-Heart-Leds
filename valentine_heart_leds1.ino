// C++ code
//
void setup()
{
  for ( int pin = 2; pin <= 13; pin++)
  {
    pinMode(pin, OUTPUT );
  }
  for ( int pin = A0; pin <= A5; pin++)
  {
    pinMode(pin, OUTPUT); 
  }
}


void loop() 
{
  

  for (int pin = 8; pin <= 13; pin++) {
    digitalWrite(pin, HIGH);
    delay(150);
    digitalWrite(pin, LOW);
  }


  for (int pin = A0; pin <= A5; pin++) {
    digitalWrite(pin, HIGH);
    delay(150);
    digitalWrite(pin, LOW);
  }
  
  
  for (int pin = 2; pin <= 7; pin++) {
    digitalWrite(pin, HIGH);
    delay(150);
    digitalWrite(pin, LOW);
  }
  
  
  //light on from the middle led to bottom leds
  digitalWrite(8, HIGH);
  delay(100); 
  for (int pin = 7; pin <=9; pin+=2)
  {
    digitalWrite(pin, HIGH);
  } 
  delay(100); 
  for (int pin = 6; pin <=10; pin+=4)
  {
    digitalWrite(pin, HIGH);
  } 
  delay(100); 
  for (int pin = 5; pin <=11; pin+=6)
  {
    digitalWrite(pin, HIGH);
  } 
  delay(100); 
  for (int pin = 4; pin <=12; pin+=8)
  {
    digitalWrite(pin, HIGH);
  } 
  delay(100);  
  for (int pin = 3; pin <=13; pin+=10)
  {
    digitalWrite(pin, HIGH);
  } 
  delay(100); 
  digitalWrite(A0, HIGH);
  digitalWrite(2,HIGH); 
  delay(100); 
  for (int pin = A1; pin <=A5; pin+=4)
  {
    digitalWrite(pin, HIGH);
  } 
  delay(100);  
  for (int pin = A2; pin <=A4; pin+=2)
  {
    digitalWrite(pin, HIGH);
  } 
  delay(100);  
  digitalWrite(A3, HIGH); 
  
  
  delay(500); 
  //flash 5 
  for ( int x = 1; x <= 5; x++)
  {
    for ( int pin = 8; pin<= A5; pin++)
    {
      digitalWrite(pin, HIGH);

    }
    for (int pin = 2; pin <= 7; pin++) 
    {
      digitalWrite(pin, HIGH); 
    }
    delay(100);  
    for ( int pin = 8; pin<= A5; pin++)
    {
      digitalWrite(pin,LOW); 
    }
    for (int pin = 2; pin <= 7; pin++) 
    {
      digitalWrite(pin,LOW);
    } 
    delay(100); 
  } //light on
  for ( int pin = 8; pin<= 14; pin++)
    {
      digitalWrite(pin, HIGH);

    }
     for ( int pin = A0; pin<= A5; pin++)
    {
      digitalWrite(pin, HIGH);

    }

    for (int pin = 2; pin <= 7; pin++) 
    {
      digitalWrite(pin, HIGH); 
    }
  
  //tắt đèn 
  digitalWrite(A3, LOW); 
   for (int pin = A2; pin <=A4; pin+=2)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100);  
  for (int pin = A1; pin <=A5; pin+=4)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  digitalWrite(A0, LOW);
  digitalWrite(2, LOW); 
  delay(100); 
  for (int pin = 3; pin <=13; pin+=10)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 4; pin <=12; pin+=8)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 5; pin <=11; pin+=6)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 6; pin <=10; pin+=4)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 7; pin <=9; pin+=2)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  digitalWrite(8,LOW);
  //leds on
  for( int x=0; x<=5; x++)
  {
  digitalWrite(8,HIGH); 
  digitalWrite(10,HIGH); 
  digitalWrite(12,HIGH); 
  digitalWrite(A0,HIGH); 
  digitalWrite(A2,HIGH); 
  digitalWrite(A4,HIGH); 
  digitalWrite(2,HIGH); 
  digitalWrite(4,HIGH); 
  digitalWrite(6,HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(13, LOW); 
  digitalWrite(A1, LOW); 
  digitalWrite(A3, LOW); 
  digitalWrite(A5, LOW); 
  digitalWrite(3, LOW); 
  digitalWrite(5, LOW); 
  digitalWrite(7, LOW); 
  delay(150);
  digitalWrite(11,HIGH); 
  digitalWrite(13,HIGH); 
  digitalWrite(A1,HIGH); 
  digitalWrite(A3,HIGH); 
  digitalWrite(A5,HIGH); 
  digitalWrite(3,HIGH); 
  digitalWrite(5,HIGH); 
  digitalWrite(7,HIGH); 
  digitalWrite(9,HIGH); 
  digitalWrite(8, LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(A0, LOW); 
  digitalWrite(A2, LOW); 
  digitalWrite(A4, LOW); 
  digitalWrite(2, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(6, LOW);
  delay(100);
  }
  digitalWrite(9, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(13, LOW); 
  digitalWrite(A1, LOW); 
  digitalWrite(A3, LOW); 
  digitalWrite(A5, LOW); 
  digitalWrite(3, LOW); 
  digitalWrite(5, LOW); 
  digitalWrite(7, LOW); 
  delay(100);
  //nửa trái tim 
  for ( int x= 0; x<=5; x++)
  {
    
    for(int pin =8; pin<= 13; pin++)
    {
      digitalWrite(pin,HIGH);
    }
    for(int pin = A0; pin<=A3; pin++)
    {
      digitalWrite(pin,HIGH); 
    }
    for(int pin =2; pin<= 8; pin++)
    {
      digitalWrite(pin,LOW);
    }
    for(int pin = A3; pin<=A5; pin++)
    {
      digitalWrite(pin,LOW); 
    }
    delay(200); 
    for(int pin =8; pin<= 13; pin++)
    {
      digitalWrite(pin,LOW);
    }
    for(int pin = A0; pin<=A3; pin++)
    {
      digitalWrite(pin,LOW); 
    }
    for(int pin =2; pin<= 8; pin++)
    {
      digitalWrite(pin,HIGH);
    }
    for(int pin = A3; pin<=A5; pin++)
    {
      digitalWrite(pin,HIGH); 
    }
    delay(200); 
  }
  //ALL OFF 
  for(int pin =2; pin<=14; pin++)
  {
    digitalWrite(pin,LOW);
  }
  for(int pin=A0; pin <= A5;pin++)
  {
    digitalWrite(pin,LOW); 
  }
  //Three leds on at the same time 
  digitalWrite(8,HIGH); 
  digitalWrite(9,HIGH); 
  digitalWrite(10,HIGH); 
  delay(200); 
  
  digitalWrite(8,LOW); 
  digitalWrite(9,LOW); 
  digitalWrite(10,LOW); 
  
  digitalWrite(11,HIGH); 
  digitalWrite(12,HIGH); 
  digitalWrite(13,HIGH); 
  delay(200); 
  
  digitalWrite(11,LOW); 
  digitalWrite(12,LOW); 
  digitalWrite(13,LOW); 
  
  digitalWrite(A0, HIGH); 
  digitalWrite(A1, HIGH); 
  digitalWrite(A2, HIGH); 
  delay(200); 

  digitalWrite(A0, LOW); 
  digitalWrite(A1, LOW); 
  digitalWrite(A2, LOW); 
  
  digitalWrite(A3, HIGH); 
  digitalWrite(A4, HIGH); 
  digitalWrite(A5, HIGH); 
  delay(200); 

  digitalWrite(A3, LOW); 
  digitalWrite(A4, LOW); 
  digitalWrite(A5, LOW); 
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  delay(200); 

  digitalWrite(2, LOW); 
  digitalWrite(3, LOW); 
  digitalWrite(4, LOW); 
  
  digitalWrite(5, HIGH); //5,6,7,8 HIGH
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  delay(200); 
  digitalWrite(9,HIGH); 
  digitalWrite(10,HIGH); 
  delay(200); 
  
  digitalWrite(9,LOW); 
  digitalWrite(10,LOW); 
  
  digitalWrite(11,HIGH); 
  digitalWrite(12,HIGH); 
  digitalWrite(13,HIGH); 
  delay(200); 
  
  digitalWrite(11,LOW); 
  digitalWrite(12,LOW); 
  digitalWrite(13,LOW); 
  
  digitalWrite(A0, HIGH); 
  digitalWrite(A1, HIGH); 
  digitalWrite(A2, HIGH); 
  delay(200); 

  digitalWrite(A0, LOW); 
  digitalWrite(A1, LOW); 
  digitalWrite(A2, LOW); 
  
  digitalWrite(A3, HIGH); 
  digitalWrite(A4, HIGH); 
  digitalWrite(A5, HIGH); 
  delay(200); 

  digitalWrite(A3, LOW); 
  digitalWrite(A4, LOW); 
  digitalWrite(A5, LOW); 
  
  digitalWrite(2, HIGH); //2,3,4HIGH
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  delay(200);
  digitalWrite(8,HIGH); 
  digitalWrite(9,HIGH); 
  digitalWrite(10,HIGH); 
  delay(200); 
  
  digitalWrite(9,LOW); 
  digitalWrite(10,LOW); 
  
  digitalWrite(11,HIGH); 
  digitalWrite(12,HIGH); 
  digitalWrite(13,HIGH); 
  delay(200); 
  
  digitalWrite(11,LOW); 
  digitalWrite(12,LOW); 
  digitalWrite(13,LOW); 
  
  digitalWrite(A0, HIGH); 
  digitalWrite(A1, HIGH); 
  digitalWrite(A2, HIGH); 
  delay(200); 

  digitalWrite(A0, LOW); 
  digitalWrite(A1, LOW); 
  digitalWrite(A2, LOW); 
  
  digitalWrite(A3, HIGH); //a3,4,5HIGh
  digitalWrite(A4, HIGH); 
  digitalWrite(A5, HIGH); 
  delay(200); 
  
  digitalWrite(9,HIGH); 
  digitalWrite(10,HIGH); 
  delay(200); 
  
  digitalWrite(9,LOW); 
  digitalWrite(10,LOW); 
  
  digitalWrite(11,HIGH); 
  digitalWrite(12,HIGH); 
  digitalWrite(13,HIGH); 
  delay(200); 
  
  digitalWrite(11,LOW); 
  digitalWrite(12,LOW); 
  digitalWrite(13,LOW); 
  
  digitalWrite(A0, HIGH); // A0,1,2 HIGh
  digitalWrite(A1, HIGH); 
  digitalWrite(A2, HIGH); 
  delay(200); 
  
  digitalWrite(9,HIGH); 
  digitalWrite(10,HIGH); 
  delay(200); 
  
  digitalWrite(9,LOW); 
  digitalWrite(10,LOW); 
  
  digitalWrite(11,HIGH); 
  digitalWrite(12,HIGH); 
  digitalWrite(13,HIGH); 
  delay(200); 
  
  digitalWrite(9,HIGH); 
  digitalWrite(10,HIGH); 
  delay(200); 
  
  
  //ALL OFF 
  for(int pin =2; pin<=14; pin++)
  {
    digitalWrite(pin,LOW);
  }
  for(int pin=A0; pin <= A5;pin++)
  {
    digitalWrite(pin,LOW); 
  }
  //ALL ON 
  for(int pin =2; pin<=14; pin++)
  {
    digitalWrite(pin,HIGH);
  }
  for(int pin=A0; pin <= A5;pin++)
  {
    digitalWrite(pin,HIGH); 
  }

  delay(100); 
  //turn off the lights

  digitalWrite(A3, LOW); 
   for (int pin = A2; pin <=A4; pin+=2)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100);  
  for (int pin = A1; pin <=A5; pin+=4)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  digitalWrite(A0, LOW);
  digitalWrite(2, LOW); 
  delay(100); 
  for (int pin = 3; pin <=13; pin+=10)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 4; pin <=12; pin+=8)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 5; pin <=11; pin+=6)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 6; pin <=10; pin+=4)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  for (int pin = 7; pin <=9; pin+=2)
  {
    digitalWrite(pin, LOW);
  } 
  delay(100); 
  digitalWrite(8,LOW);

}
  
  
  
 
  
  