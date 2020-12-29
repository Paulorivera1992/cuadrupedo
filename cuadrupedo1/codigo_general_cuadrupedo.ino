#include<Servo.h>

//definiciÃ³n de objetos
Servo frh; //objeto servo que define la cadera derecha frontal, extremidad 4 del sistema de referencia
Servo frl; //objeto servo que define pata derecha frontal, extremidad 4 del sistema de referencia
Servo flh; //objeto servo que define cadera izquierda frontal, extremidad 3 del sistema de referencia
Servo fll; //objeto servo que define pata izquierda frontal, extremidad 3 del sistema de referencia
Servo rrh; //objeto servo que define cadera derecha trasera, extremidad 1 del sistema de referencia 
Servo rrl; //objeto servo que define pata derecha trasera, extremidad 1 del sistema de referencia
Servo rlh; //objeto servo que define cadera izquierda trasera, extremidad 2 del sistema de referencia
Servo rll; //objeto servo que define pata izquierda trasera, extremidad 2 del sistema de referencia

//definiciÃ³n de puertos digitales de los servos
int pin_frh = 4; //pin digital para la cadera derecha frontal
int pin_frl = 5; //pin digital para la pata derecha frontal
int pin_flh = 6; //pin digital para la cadera izquierda frontal
int pin_fll = 7; //pin digital para la pata izquierda frontal
int pin_rrh = 8; //pin digital para la cadera derecha tracera 
int pin_rrl = 9; //pin digital para la pata derecha tracera
int pin_rlh = 10; //pin digital para la cadera izquierda tracera
int pin_rll = 11; //pin digital para la pata izquierda tracera

//definiciÃ³n de variable para posciciones iniciales de los servos
int home_frh = 90+20; //posciciÃ³n inicial de la cadera derecha frontal
int home_frl = 90; //posciciÃ³n inicial de la pata derecha frontal
int home_flh = 90-20; //posciciÃ³n inicial de la cadera izquierda frontal
int home_fll = 90; //posciciÃ³n inicial de la pata izquierda frontal
int home_rrh = 90-20; //posciciÃ³n inicial de la cadera derecha tracera 
int home_rrl = 90; //posciciÃ³n inicial de la pata derecha tracera
int home_rlh = 90+20; //posciciÃ³n inicial de la cadera izquierda tracera
int home_rll = 90; //posciciÃ³n inicial de la pata izquierda tracera

//Definicion de anchos de pulso minimo y maximo para servo sg90 en nanosegundos segun datasheet
int pulse_min = 1000; 
int pulse_max = 2000;

void setup() {
    //seteo de puertos para los servos
  frh.attach(pin_frh,pulse_min,pulse_max); //definición de pin digital pin_frh para servo frh
  frl.attach(pin_frl,pulse_min,pulse_max); //definición de pin digital pin_frl para servo frl
  flh.attach(pin_flh,pulse_min,pulse_max); //definición de pin digital pin_flh para servo flh
  fll.attach(pin_fll,pulse_min,pulse_max); //definición de pin digital pin_fll para servo fll
  rrh.attach(pin_rrh,pulse_min,pulse_max); //definición de pin digital pin_rrh para servo rrh
  rrl.attach(pin_rrl,pulse_min,pulse_max); //definición de pin digital pin_rrl para servo rrl
  rlh.attach(pin_rlh,pulse_min,pulse_max); //definición de pin digital pin_rlh para servo rlh
  rll.attach(pin_rll,pulse_min,pulse_max); //definición de pin digital pin_rrh para servo rrh

  //seteo de posciciÃ³n inicial para cada servo
  frh.write(home_frh); //posciciÃ³n incial home_frh para el servo frh
  frl.write(home_frl); //posciciÃ³n incial home_frl para el servo frl
  flh.write(home_flh); //posciciÃ³n incial home_flh para el servo flh
  fll.write(home_fll); //posciciÃ³n incial home_fll para el servo fll
  rrh.write(home_rrh); //posciciÃ³n incial home_rrh para el servo rrh
  rrl.write(home_rrl); //posciciÃ³n incial home_rrl para el servo rrl
  rlh.write(home_rlh); //posciciÃ³n incial home_rlh para el servo rlh
  rll.write(home_rll); //posciciÃ³n incial home_rll para el servo rll
      
  }

void loop() {
  // put your main code here, to run repeatedly:
  Acostar();
  delay(2000);
  Levantar();
  delay(2000);
  Sentar();
  delay(2000);
  Inclinar_derecha();
  delay(2000);
  Inclinar_izquierda();
  delay(2000);
  Inclinar();
  delay(2000);
  Saludar();
  delay(2000);
  Avanzar();
  delay(2000);
  Retroceder();
  delay(2000);
  Girar_derecha();
  delay(2000);
  Girar_izquierda();
  delay(2000);
  }

//Funcion para acostar el robot
void Acostar() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posiciÃ³n inicial
  frl.write(home_frl); //levanta la pata derecha frontal a la posiciÃ³n inicial
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posiciÃ³n inicial
  fll.write(home_fll); //levanta la pata izquierda frontal a la posiciÃ³n inicial
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posiciÃ³n inicial
  rrl.write(home_rrl); //levanta la pata derecha trasera a la posiciÃ³n inicial
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posiciÃ³n inicial
  rll.write(home_rll); //levanta la pata izquierda trasera a la posiciÃ³n inicial
  }

//funcion para levantar el robot
void Levantar() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posiciÃ³n inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posiciÃ³n inicial
  fll.write(home_fll-60); //baja la pata izquierda frontal
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posiciÃ³n inicial
  rrl.write(home_rrl-60); //baja la pata derecha trasera
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posiciÃ³n inicial
  rll.write(home_rll+60); //baja la pata izquierda trasera
  }

  
//Funcion para sentar el robot
void Sentar() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posiciÃ³n inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posiciÃ³n inicial
  fll.write(home_fll-60); //baja la pata izquierda frontal
  rrh.write(home_rrh-30); //mueve la cadera derecha trasera hacia el centro
  rrl.write(home_rrl); //levanta la pata derecha trasera a la posiciÃ³n inicial
  rlh.write(home_rlh+30); //mueve la cadera izquierda trasera hacia el centro
  rll.write(home_rll); //levanta la pata izquierda trasera a la posiciÃ³n inicial
  }

//FunciÃ³n para inclinar hacia la derecha el robot
void Inclinar_derecha() {
  frh.write(home_frh-30); //mueve la cadera derecha frontal hacia el contado derecho
  frl.write(home_frl); //levanta la pata derecha frontal a la posiciÃ³n inicial
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posiciÃ³n inicial
  fll.write(home_fll-60); //baja la pata izquierda frontal 
  rrh.write(home_rrh+30); //mueve la cadera derecha trasera hacia el costado derecho
  rrl.write(home_rrl); //levanta la pata derecha trasera a la posiciÃ³n inicial
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posiciÃ³n inicial
  rll.write(home_rll+60); //baja la pata izquierda trasera
  }

//FunciÃ³n para inclinar hacia la izquierda el robot
void Inclinar_izquierda() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posiciÃ³n inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  flh.write(home_flh+30); //mueve la cadera izquierda frontal hacia el costado izquierdo
  fll.write(home_fll); //levanta la pata izquierda frontal a la poscicion inicial
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posiciÃ³n inicial
  rrl.write(home_rrl-60); //baja la pata derecha trasera
  rlh.write(home_rlh-30); //mueve la cadera izquierda trasera hacia el costado izquierdo 
  rll.write(home_rll); //levanta la pata izquierda trasera a la posiciÃ³n inicial
  }

//Funcion para inclinar hacia delante el robot
void Inclinar() {
  frh.write(home_frh+30); //mueve la cadera derecha frontal hacia el centro
  frl.write(home_frl); //levanta la pata derecha frontal a la posiciÃ³n inicial
  flh.write(home_flh-30); //mueve la cadera izquierda frontal hacia el centro
  fll.write(home_fll); //levanta la pata izquierda frontal a la posiciÃ³n inicial
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posiciÃ³n inicial
  rrl.write(home_rrl-60); //baja la pata derecha trasera
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posiciÃ³n inicial
  rll.write(home_rll+60); //baja la pata izquierda trasera
  }

//Funcion para que salude el robot
void Saludar() {
  Levantar(); //posiciona el cuadrÃºpedo de forma parada en sus cuatro extremidades.
  frl.write(home_frl-75); //levanta la pata derecha frontal
  delay (300); //espera 0.5 segundos antes de mover la pata
  for(int i=0; i<5; i++)//ciclo for que permite realizar 5 movimientos de la pata para saludar
  {  frh.write(home_frh-30); //mueve la cadera derecha frontal hacia el costado derecho del cuadrÃºpedo
     delay(500); //espera 0.5 segundos.
     frh.write(home_frh+20); //mueve la cadera derecha frontal hacia el centro del cuadrÃºpedo
     delay(500); //espera 0.5 segundos.
     }
  frh.write(home_frh); //mueve la cadera derecha frontal a la posiciÃ³n inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  delay (300); //espera 0.5 segundos antes de finalizar el movimiento
  }

//Funcion para que avance el cuadrÃºpedo
void Avanzar(){
   for(int i=0; i<5; i++) {
      rll.write(home_rll+40);
      delay(200);
      rlh.write(home_rlh-45);
      delay(200);
      rll.write(home_rll+55);
      delay(200);

      fll.write(home_fll-40);
      delay(200);
      flh.write(home_flh-45);
      delay(200);
      fll.write(home_fll-60);
      delay(200);

      rrl.write(home_rrl-40);
      delay(200);
      rrh.write(home_rrh+45);
      delay(200);
      rrl.write(home_rrl-55);
      delay(200);

      frl.write(home_frl+40);
      delay(200);
      frh.write(home_frh+45);
      delay(200);
      frl.write(home_frl+60);
      delay(200);

      frh.write(home_frh-25); 
      rlh.write(home_rlh+25); 
      flh.write(home_flh+25); 
      rrh.write(home_rrh-25);
      delay(200);
      }
      Levantar(); //posiciona el cuadrÃºpedo de forma parada en sus cuatro extremidades.
      delay(2500);
 }

//Funcion para que retroceda el cuadrÃºpedo
void Retroceder(){
   for(int i=0; i<5; i++) {
      frl.write(home_frl+50);
      delay(200);
      frh.write(home_frh-45);
      delay(200);
      frl.write(home_frl+60);
      delay(200);

      rrl.write(home_rrl-50);
      delay(200);
      rrh.write(home_rrh-45);
      delay(200);
      rrl.write(home_rrl-60);
      delay(200);
      
      fll.write(home_fll-50);
      delay(200);
      flh.write(home_flh+45);
      delay(200);
      fll.write(home_fll-60);
      delay(200);

      rll.write(home_rll+50);
      delay(200);
      rlh.write(home_rlh+45);
      delay(200);
      rll.write(home_rll+60);
      delay(200);

      frh.write(home_frh+25); 
      rlh.write(home_rlh-25); 
      flh.write(home_flh-25); 
      rrh.write(home_rrh+25);
      delay(200);
      }
      Levantar(); //posiciona el cuadrÃºpedo de forma parada en sus cuatro extremidades.
      delay(250);
 }

//Funcion para que gire a la derecha el cuadrÃºpedo
void Girar_derecha(){
   for(int i=0; i<6; i++) {
      rll.write(home_rll+50);
      delay(200);
      rlh.write(home_rlh+45);
      delay(200);
      rll.write(home_rll+60);
      delay(200);

      fll.write(home_fll-50);
      delay(200);
      flh.write(home_flh+45);
      delay(200);
      fll.write(home_fll-60);
      delay(200);

      rrl.write(home_rrl-50);
      delay(200);
      rrh.write(home_rrh+45);
      delay(200);
      rrl.write(home_rrl-60);
      delay(200);

      frl.write(home_frl+50);
      delay(200);
      frh.write(home_frh+45);
      delay(200);
      frl.write(home_frl+60);
      delay(200);

      frh.write(home_frh-25); 
      rlh.write(home_rlh-25); 
      flh.write(home_flh-25); 
      rrh.write(home_rrh-25);
      delay(200);
      }
 }

//Funcion para que gire a la izquierda el cuadrÃºpedo
void Girar_izquierda(){
   for(int i=0; i<6; i++) {
      rll.write(home_rll+50);    //mueve rll a la posicion original
      delay(200);             //espera 100ms
      rlh.write(home_rlh-45); //ava rll
      delay(200);             //espera 100ms
      rll.write(home_rll+60); //levanta rll
      delay(200);             //espera 100ms

      fll.write(home_fll-50);    //mueve fll a la posicion original
      delay(200);             //espera 100ms
      flh.write(home_flh-45); //
      delay(200);             //espera 100ms
      fll.write(home_fll-60);
      delay(200);             //espera 100ms

      rrl.write(home_rrl-50);
      delay(200);             //espera 100ms
      rrh.write(home_rrh-45);
      delay(200);             //espera 100ms
      rrl.write(home_rrl-60);
      delay(200);             //espera 100ms
          
      frl.write(home_frl+50);
      delay(200);             //espera 100ms
      frh.write(home_frh-45);
      delay(200);             //espera 100ms
      frl.write(home_frl+60);
      delay(200);             //espera 100ms

      frh.write(home_frh+25);    //mueve frh a la posicion original
      rlh.write(home_rlh+25);    //mueve rlh a la posicion original
      flh.write(home_flh+25);    //mueve flh a la posicion original
      rrh.write(home_rrh+25);    //mueve rrh a la posicion original
      delay(200);             //espera 100ms
      }
 }
