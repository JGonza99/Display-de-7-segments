/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                                                               **
**  NOM: Josep González Martínez                         DATA: 18/02/2019        **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int Pols = 4;       // donar nom al pin 4 de l’Arduino
const int A = 5;          // donar nom al pin 5 de l’Arduino
const int B = 6;          // donar nom al pin 6 de l’Arduino
const int C = 7;          // donar nom al pin 7 de l’Arduino
const int D = 8;          // donar nom al pin 8 de l’Arduino
const int E = 9;          // donar nom al pin 9 de l’Arduino
const int F = 10;         // donar nom al pin 10 de l’Arduino
const int G = 11;         // donar nom al pin 11 de l’Arduino
const int Dot = 12;       // donar nom al pin 12 de l’Arduino
unsigned long a;

//********** Setup ****************************************************************
void setup()
{
  pinMode(Pols,INPUT);    // definir el pin 4 com una entrada
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(Dot, OUTPUT);   // definir el pin 12 com una sortida
  a = 500;
}

//********** Loop *****************************************************************
void loop()
{
      digitalWrite(A, HIGH);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, HIGH);     
      digitalWrite(D, HIGH);    //Num 0
      digitalWrite(E, HIGH);    
      digitalWrite(F, HIGH);   
      digitalWrite(G, LOW);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, LOW);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, HIGH);     
      digitalWrite(D, LOW);     //Num 1
      digitalWrite(E, LOW);    
      digitalWrite(F, LOW);   
      digitalWrite(G, LOW);
      digitalWrite(Dot, HIGH);    
    
      delay(a);
    
      digitalWrite(A, HIGH);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, LOW);      //Num 2
      digitalWrite(D, HIGH);    
      digitalWrite(E, HIGH);    
      digitalWrite(F, LOW);   
      digitalWrite(G, HIGH);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, HIGH);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, HIGH);      //Num 3
      digitalWrite(D, HIGH);    
      digitalWrite(E, LOW);    
      digitalWrite(F, LOW);   
      digitalWrite(G, HIGH);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, LOW);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, HIGH);      //Num 4
      digitalWrite(D, LOW);    
      digitalWrite(E, LOW);    
      digitalWrite(F, HIGH);   
      digitalWrite(G, HIGH);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, HIGH);    
      digitalWrite(B, LOW);    
      digitalWrite(C, HIGH);      //Num 5
      digitalWrite(D, HIGH);    
      digitalWrite(E, LOW);    
      digitalWrite(F, HIGH);   
      digitalWrite(G, HIGH);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, LOW);    
      digitalWrite(B, LOW);    
      digitalWrite(C, HIGH);      //Num 6
      digitalWrite(D, HIGH);    
      digitalWrite(E, HIGH);    
      digitalWrite(F, HIGH);   
      digitalWrite(G, HIGH);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, HIGH);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, HIGH);      //Num 7
      digitalWrite(D, LOW);    
      digitalWrite(E, LOW);    
      digitalWrite(F, LOW);   
      digitalWrite(G, LOW);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, HIGH);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, HIGH);      //Num 8
      digitalWrite(D, HIGH);    
      digitalWrite(E, HIGH);    
      digitalWrite(F, HIGH);   
      digitalWrite(G, HIGH);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
    
      digitalWrite(A, HIGH);    
      digitalWrite(B, HIGH);    
      digitalWrite(C, HIGH);      //Num 9
      digitalWrite(D, LOW);    
      digitalWrite(E, LOW);    
      digitalWrite(F, HIGH);   
      digitalWrite(G, HIGH);
      digitalWrite(Dot, HIGH);  
      
      delay(a);
  }
}
