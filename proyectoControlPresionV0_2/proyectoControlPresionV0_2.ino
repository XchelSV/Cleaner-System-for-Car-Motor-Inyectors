//----------------- Librerias -----------------------
#include <Keypad.h>
#include <Servo.h>
#include <LiquidCrystal.h>

Servo miServo;
const int pinServo = 12;
int angulo;



//----------------- Configuracion del Teclado-----------------------
const byte rows = 3; //tres filas
const byte cols = 4; //cuatro columnas
char keys[rows][cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
};
byte rowPins[rows] = {14, 15, 16}; //connect to the row pinouts of the keypad
byte colPins[cols] = {17, 18, 19, 2}; //connect to the column pinouts of the keypad
Keypad teclado = Keypad( makeKeymap(keys), rowPins, colPins, rows, cols );
char tecla;

int proceso = 0;
char opcion[3];
int temp;


LiquidCrystal lcd(3,4,6,5,7,8);

void setup(){
   

  //Serial.begin(9600);
  miServo.attach(pinServo);
  
 lcd.begin(16,2); 
 lcd.print("Control Presion");
 delay(2000);
 lcd.clear(); 
 
}

void loop(){
  

  // ------------------------- Inicio de Menu --------------------------------------
 

 
 switch(proceso){
 
   // -------------------------- Inicio Proceso 0 ---------------------------
   
   case 0:
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Seleccione la Marca");
    lcd.setCursor(0,1);
    lcd.print(" 1.VW 2.Nissan 3.Ford 4.Toyota 5.Chev 6.Chrysler");
   break;
 
    // -------------------------- Fin Proceso 0 ---------------------------
    
       // -------------------------- Inicio Proceso 1 ---------------------------
   
   case 1: 
      switch(opcion[0]){
        
        case '1': 
        
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '5'");
         break;
        
        case '2':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '6'  3. '8'");
          break;  
            
         case '3':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '6'"); 
          
          break;
         
         case '4':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '8'");
            
          break;
          
          
         case '5':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '6'  3. '8'");
            
          break;
          
          case '6':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '6'");
            
           break;
          
                 
    }
    
   break;
   
      // -------------------------- Fin Proceso 1 ---------------------------
      
         // -------------------------- Inicio Proceso 2 ---------------------------
   
    case 2:
    
     switch(opcion[0]){
        
        case '1': 
        
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Polo 2.Vento 3.Gol 4.Saveiro 5.Golf TSI 6.Golf GTI 7.Passat CC 8.Jetta Cls");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Bora 2.Jetta Bicen 3.Bettle");
              break;   
            
            }
          break;
        
        case '2':
           
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Tsuru 2.March 3.Tiida 4.NP300 5.Note 6.Versa 7.Sentra 8.X-Trail 9.Rogue ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Frontier 2.X-Terra 3.Pick-up 4.Tiida 5.Murano 6.Sentra");
              break;
           
           
             case '3':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Titan 2.Pathfinder");
              break;      
            
            }
          break;
            
         case '3':
           
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Focus 2.Mondeo 3.Fiesta 4.KA 5.Ikon 6.Fusion 7.Eco Sport ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Escape 2.Explorer 3.Expedition ");
              break;
            
            }
          break;
         
         case '4':
           
           switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Avanza 2.Yaris 3.Corolla 4.Rush 5.Rav-4 6.Hice ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.4 Runner 2.Tundra 3.Sequoia ");
              break;
            
            }
           break;
            
          
         case '5':
           
           switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Astra 2.Cavalier 3.Malibu ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Pick Up 2.Silverado 3.Venture ");
              break;
           
           
             case '3':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Silverado 2.SUburban");
              break;      
            
            }
           break;
           
          
          case '6':
          
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Grand Cherokee 2.Liberty 3.Wrangler 4.Voyager 5.Crusier ");
              break;   
            
            }
          break;            
            
    
    }
    
       // -------------------------- Fin Proceso 2 ---------------------------
    
   break;
   
 }
 

 
 // ------------------------- Fin de Menu --------------------------------------

 
  // ------------------------- Inicio Asignacion de Valor y Restricciones a opcion[]  --------------------------------------
 
 
 // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 30; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    
    tecla = teclado.getKey();
       if (tecla != NO_KEY){
          
         switch(tecla){
         
            case '1':
              
               switch (proceso){
                 
                 case 0:
                 opcion[0] = tecla;
                 if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 1:
                 opcion[1] = tecla;                 
                 if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 2:
                 opcion[2] = tecla;                 
                 if(proceso < 3)
                  proceso++;
                 
                 break;
               
               }
            
              
            break;
            
            case '2':
            
              switch (proceso){
                 
                 case 0:
                 opcion[0] = tecla;
                 
                 if(proceso < 3)
                  proceso++;
              
                 
                 break;
                 
                 case 1:
                 if( (opcion[0]!='6')  )
                 opcion[1] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 2:
                 opcion[2] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
               
               }
            
            
              
              
              
            break;
            
            case '3':
            
            switch (proceso){
                 
                 case 0:
                 opcion[0] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 1:
                 if( (opcion[0]!='1') || (opcion[0]!='3') || (opcion[0]!='4') || (opcion[0]!='6')  )
                 opcion[1] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 2:
                 if( ((opcion[0]!='2') && (opcion[1]!='3')) || ((opcion[0]!='5') && (opcion[1]!='3'))  )
                 opcion[2] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
               
               }
            
              
            break;
            
            case '4':
            
            switch (proceso){
                 
                 case 0:
                 opcion[0] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 2:
                 if( ((opcion[0]!='2') && (opcion[1]!='3')) || ((opcion[0]!='5') && (opcion[1]!='3')) || ((opcion[0]!='1') && (opcion[1]!='2')) || ((opcion[0]!='3') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='2')) || ((opcion[0]!='5') && (opcion[1]!='1')) || ((opcion[0]!='5') && (opcion[1]!='2'))  )
                 opcion[2] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
               }
            
              
            break;
            
            case '5':
            
            switch (proceso){
                 
                 case 0:
                 opcion[0] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 
                 case 2:
                 if( ((opcion[0]!='2') && (opcion[1]!='3')) || ((opcion[0]!='5') && (opcion[1]!='3')) || ((opcion[0]!='1') && (opcion[1]!='2')) || ((opcion[0]!='3') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='2')) || ((opcion[0]!='5') && (opcion[1]!='1')) || ((opcion[0]!='5') && (opcion[1]!='2'))  )
                 opcion[2] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
               
               }
            
              
            break;
            
            
            case '6':
            
            switch (proceso){
                 
                 case 0:
                 opcion[0] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 2:
                 if( ((opcion[0]!='2') && (opcion[1]!='3')) || ((opcion[0]!='5') && (opcion[1]!='3')) || ((opcion[0]!='1') && (opcion[1]!='2')) || ((opcion[0]!='3') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='2')) || ((opcion[0]!='5') && (opcion[1]!='1')) || ((opcion[0]!='5') && (opcion[1]!='2')) || ((opcion[0]!='6') && (opcion[1]!='1')) )
                 opcion[2] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
               
               }
            
              
            break;
            
            case '7':
            
            switch (proceso){
                 
                 case 0:
                 opcion[0] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
                 case 2:
                 if( ((opcion[0]!='2') && (opcion[1]!='3')) || ((opcion[0]!='5') && (opcion[1]!='3')) || ((opcion[0]!='1') && (opcion[1]!='2')) || ((opcion[0]!='3') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='2')) || ((opcion[0]!='5') && (opcion[1]!='1')) || ((opcion[0]!='5') && (opcion[1]!='2')) || ((opcion[0]!='6') && (opcion[1]!='1')) || ((opcion[0]!='2') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='1')) )
                 opcion[2] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
               
               }
            
              
            break;
            
            
            case '8':
            
            switch (proceso){
                 
                 
                 case 2:
                 if( ((opcion[0]!='2') && (opcion[1]!='3')) || ((opcion[0]!='5') && (opcion[1]!='3')) || ((opcion[0]!='1') && (opcion[1]!='2')) || ((opcion[0]!='3') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='2')) || ((opcion[0]!='5') && (opcion[1]!='1')) || ((opcion[0]!='5') && (opcion[1]!='2')) || ((opcion[0]!='6') && (opcion[1]!='1')) || ((opcion[0]!='2') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='1'))  || ((opcion[0]!='3') && (opcion[1]!='1')))
                 opcion[2] = tecla;
                 
                  if(proceso < 3)
                  proceso++;
                 
                 break;
                 
               
               }
            
              
            break;
            
            
            case '9':
            
            switch (proceso){
                 
                 
                 case 2:
                 if( ((opcion[0]!='2') && (opcion[1]!='3')) || ((opcion[0]!='5') && (opcion[1]!='3')) || ((opcion[0]!='1') && (opcion[1]!='2')) || ((opcion[0]!='3') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='2')) || ((opcion[0]!='5') && (opcion[1]!='1')) || ((opcion[0]!='5') && (opcion[1]!='2')) || ((opcion[0]!='6') && (opcion[1]!='1')) || ((opcion[0]!='2') && (opcion[1]!='2')) || ((opcion[0]!='4') && (opcion[1]!='1'))  || ((opcion[0]!='3') && (opcion[1]!='1'))  || ((opcion[0]!='1') && (opcion[1]!='1')))
                 opcion[2] = tecla;
                  if(proceso < 3)
                  proceso++;
                 break;
                 
               
               }
            
              
            break;
            
            
            
            case 'B':
              
              if (proceso == 1)
                opcion[0] = ' ';
                
                
              if (proceso == 2)
                opcion[1] = ' ';
                
              
              if (proceso > 0){
                proceso--;
              }
            break;
           
         }
         
         
         
         
         
 // ------------------------- Inicio de Menu --------------------------------------
 

 
 switch(proceso){
 
   // -------------------------- Inicio Proceso 0 ---------------------------
   
   case 0:
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Seleccione la Marca");
    lcd.setCursor(0,1);
    lcd.print(" 1.VW 2.Nissan 3.Ford 4.Toyota 5.Chev 6.Chrysler");
   break;
 
    // -------------------------- Fin Proceso 0 ---------------------------
    
       // -------------------------- Inicio Proceso 1 ---------------------------
   
   case 1: 
      switch(opcion[0]){
        
        case '1': 
        
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '5'");
         break;
        
        case '2':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '6'  3. '8'");
          break;  
            
         case '3':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '6'"); 
          
          break;
         
         case '4':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '8'");
            
          break;
          
          
         case '5':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '4'  2. '6'  3. '8'");
            
          break;
          
          case '6':
           
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print(" Seleccione el No de Cilindros");
            lcd.setCursor(0,1);
            lcd.print(" 1. '6'");
            
           break;
          
                 
    }
    
   break;
   
      // -------------------------- Fin Proceso 1 ---------------------------
      
         // -------------------------- Inicio Proceso 2 ---------------------------
   
    case 2:
    
     switch(opcion[0]){
        
        case '1': 
        
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Polo 2.Vento 3.Gol 4.Saveiro 5.Golf TSI 6.Golf GTI 7.Passat CC 8.Jetta Cls");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Bora 2.Jetta Bicen 3.Bettle");
              break;   
            
            }
          break;
        
        case '2':
           
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Tsuru 2.March 3.Tiida 4.NP300 5.Note 6.Versa 7.Sentra 8.X-Trail 9.Rogue ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Frontier 2.X-Terra 3.Pick-up 4.Tiida 5.Murano 6.Sentra");
              break;
           
           
             case '3':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Titan 2.Pathfinder");
              break;      
            
            }
          break;
            
         case '3':
           
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Focus 2.Mondeo 3.Fiesta 4.KA 5.Ikon 6.Fusion 7.Eco Sport ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Escape 2.Explorer 3.Expedition ");
              break;
            
            }
          break;
         
         case '4':
           
           switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Avanza 2.Yaris 3.Corolla 4.Rush 5.Rav-4 6.Hice ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.4 Runner 2.Tundra 3.Sequoia ");
              break;
            
            }
           break;
            
          
         case '5':
           
           switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Astra 2.Cavalier 3.Malibu ");
              break;
              
              
              case '2':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Pick Up 2.Silverado 3.Venture ");
              break;
           
           
             case '3':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Silverado 2.SUburban");
              break;      
            
            }
           break;
           
          
          case '6':
          
            switch (opcion[1]){
              
              case '1':
                            
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print(" Seleccione el Modelo");
                lcd.setCursor(0,1);
                lcd.print(" 1.Grand Cherokee 2.Liberty 3.Wrangler 4.Voyager 5.Crusier ");
              break;   
            
            }
          break;            
            
    
    }
    
       // -------------------------- Fin Proceso 2 ---------------------------
    
   break;
   
 }
 

 
 // ------------------------- Fin de Menu --------------------------------------
         
         
         
         
         
     }
     
       // ------------------------- Fin Asignacion de Valor y Restricciones a opcion[]  --------------------------------------
 

// ---------------------------- Movimiento del Servo ---------------------------------------------------
     
    switch (opcion[0]){
      
      case '1':{
      
        switch (opcion[1]){
        
            case '1':
              
              switch (opcion[2]){
                
                case '1':                          // Opcion 1.1.1
                  miServo.write(120);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                  
                  
                break;
                
                case '2':                          // Opcion 1.1.2
                  miServo.write(40);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 1.1.3
                  miServo.write(120);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '4':                          // Opcion 1.1.4
                  miServo.write(50);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '5':                          // Opcion 1.1.5
                  miServo.write(50);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '6':                          // Opcion 1.1.6
                  miServo.write(50);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '7':                          // Opcion 1.1.7
                  miServo.write(50);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '8':                          // Opcion 1.1.8
                  miServo.write(50);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            break;
        
            
            case '2':
              
                switch (opcion[2]){
                
                case '1':                          // Opcion 1.2.1
                  miServo.write(50);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 1.2.2
                  miServo.write(60);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 1.2.3
                  miServo.write(70);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
             }
            break;
        }
        break;
      }
  
            
            

      
      case '2':{
      
           switch (opcion[1]){
        
            case '1':
              
              switch (opcion[2]){
                
                case '1':                          // Opcion 2.1.1
                  miServo.write(160);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 2.1.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 2.1.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '4':                          // Opcion 2.1.4
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '5':                          // Opcion 2.1.5
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '6':                          // Opcion 2.1.6
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '7':                          // Opcion 2.1.7
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '8':                          // Opcion 2.1.8
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '9':                          // Opcion 2.1.9
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            break;
        
            case '2':
              
                switch (opcion[2]){
                
                case '1':                          // Opcion 2.2.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 2.2.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 2.2.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '4':                          // Opcion 2.2.4
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '5':                          // Opcion 2.2.5
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '6':                          // Opcion 2.2.6
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            break;
        
            
            case '3':
            
                switch (opcion[2]){
                
                case '1':                          // Opcion 2.3.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 2.3.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
              
              }
            break;
        }
        break;
      }
      
      case '3':{
      
         switch (opcion[1]){
        
            case '1':
              
              switch (opcion[2]){
                
                case '1':                          // Opcion 3.1.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 3.1.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 3.1.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '4':                          // Opcion 3.1.4
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '5':                          // Opcion 3.1.5
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '6':                          // Opcion 3.1.6
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '7':                          // Opcion 3.1.7
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              }
            break;

            
            case '2':
              
                switch (opcion[2]){
                
                case '1':                          // Opcion 3.2.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 3.2.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 3.2.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            break;
        }
        break;
      }
      
      case '4':{
      
      
           switch (opcion[1]){
        
            case '1':
              
              switch (opcion[2]){
                
                case '1':                          // Opcion 4.1.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 4.1.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 4.1.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '4':                          // Opcion 4.1.4
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '5':                          // Opcion 4.1.5
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '6':                          // Opcion 4.1.6
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            
            
            break;
            
            case '2':
              
                switch (opcion[2]){
                
                case '1':                          // Opcion 4.2.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 4.2.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 4.2.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            
            break;
           }
           break;
            // ------------------------------------------------------------------------  
      }
      

      break;
      
      case '5':{
      
      
           switch (opcion[1]){
        
            case '1':
              
              switch (opcion[2]){
                
                case '1':                          // Opcion 5.1.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 5.1.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 5.1.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            
            
            break;
            
            case '2':
              
                switch (opcion[2]){
                
                case '1':                          // Opcion 5.2.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 5.2.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 5.2.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            
            break;
            
            case '3':
            
                switch (opcion[2]){
                
                case '1':                          // Opcion 5.3.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 5.3.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
              
              }
            
            
            break;
            
            
      }
      break;
      }
      
      
      
      
      case '6':{
      
      
           switch (opcion[1]){
        
            case '1':
              
              switch (opcion[2]){
                
                case '1':                          // Opcion 6.1.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 6.1.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 6.1.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '4':                          // Opcion 6.1.4
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                
                case '5':                          // Opcion 6.1.5
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            
            
            break;
            
            case '2':
              
                switch (opcion[2]){
                
                case '1':                          // Opcion 5.2.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 5.2.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '3':                          // Opcion 5.2.3
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
              
              }
            
            break;
            
            case '3':
            
                switch (opcion[2]){
                
                case '1':                          // Opcion 5.3.1
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
                case '2':                          // Opcion 5.3.2
                  miServo.write(20);
                  opcion[0] = ' ';
                  opcion[1] = ' ';
                  opcion[2] = ' ';
                  proceso = 0;
                  positionCounter = 30;
                break;
                
              
              }
            
            
            break;
            
            
        
        
      }
      break;
      }
      
      


       
     }
     
             
                
     
    // wait a bit, a more bit :p
    delay(400);
  }

  

  
}

