#include<Servo.h>

//definición de objetos
Servo frh; //objeto servo que define la cadera derecha frontal, extremidad 4 del sistema de referencia
Servo frl; //objeto servo que define pata derecha frontal, extremidad 4 del sistema de referencia
Servo flh; //objeto servo que define cadera izquierda frontal, extremidad 3 del sistema de referencia
Servo fll; //objeto servo que define pata izquierda frontal, extremidad 3 del sistema de referencia
Servo rrh; //objeto servo que define cadera derecha trasera, extremidad 1 del sistema de referencia 
Servo rrl; //objeto servo que define pata derecha trasera, extremidad 1 del sistema de referencia
Servo rlh; //objeto servo que define cadera izquierda trasera, extremidad 2 del sistema de referencia
Servo rll; //objeto servo que define pata izquierda trasera, extremidad 2 del sistema de referencia

//definición de puertos digitales de los servos
int pin_frh = 4; //pin digital para la cadera derecha frontal
int pin_frl = 3; //pin digital para la pata derecha frontal
int pin_flh = 5; //pin digital para la cadera izquierda frontal
int pin_fll = 6; //pin digital para la pata izquierda frontal
int pin_rrh = 10; //pin digital para la cadera derecha tracera 
int pin_rrl = 9; //pin digital para la pata derecha tracera
int pin_rlh = 7; //pin digital para la cadera izquierda tracera
int pin_rll = 8; //pin digital para la pata izquierda tracera

//definición de variable para posciciones iniciales de los servos
int home_frh = 45; //poscición inicial de la cadera derecha frontal
int home_frl = 180-60; //poscición inicial de la pata derecha frontal
int home_flh = 125; //poscición inicial de la cadera izquierda frontal
int home_fll = 30+50; //poscición inicial de la pata izquierda frontal
int home_rrh = 120; //poscición inicial de la cadera derecha tracera 
int home_rrl = 30+60; //poscición inicial de la pata derecha tracera
int home_rlh = 45; //poscición inicial de la cadera izquierda tracera
int home_rll = 70-60; //poscición inicial de la pata izquierda tracera
//max 180
//min 0

void setup() {
  //seteo de puertos para los servos
  frh.attach(pin_frh); //definición de pin digital pin_frh para servo frh
  frl.attach(pin_frl); //definición de pin digital pin_frl para servo frl
  flh.attach(pin_flh); //definición de pin digital pin_flh para servo flh
  fll.attach(pin_fll); //definición de pin digital pin_fll para servo fll
  rrh.attach(pin_rrh); //definición de pin digital pin_rrh para servo rrh
  rrl.attach(pin_rrl); //definición de pin digital pin_rrl para servo rrl
  rlh.attach(pin_rlh); //definición de pin digital pin_rlh para servo rlh
  rll.attach(pin_rll); //definición de pin digital pin_rrh para servo rrh

  //seteo de poscición inicial para cada servo
  frh.write(home_frh); //poscición incial home_frh para el servo frh
  frl.write(home_frl); //poscición incial home_frl para el servo frl
  flh.write(home_flh); //poscición incial home_flh para el servo flh
  fll.write(home_fll); //poscición incial home_fll para el servo fll
  rrh.write(home_rrh); //poscición incial home_rrh para el servo rrh
  rrl.write(home_rrl); //poscición incial home_rrl para el servo rrl
  rlh.write(home_rlh); //poscición incial home_rlh para el servo rlh
  rll.write(home_rll); //poscición incial home_rll para el servo rll
      
  }

void loop() {
  // put your main code here, to run repeatedly:
//  Acostar();
//  delay(2000);
//  levantar();
//  delay(2000);
//  sentar();
//  delay(2000);
//  levantar();
//  delay(2000);
//  inclinar_derecha();
//  delay(2000);
//  levantar();
//  delay(2000);
//  inclinar_izquierda();
//  delay(2000);
//  levantar();
//  delay(2000);
//  inclinar();
//  delay(2000);
//  levantar();
//  delay(2000);
//  saludar();
//  delay(2000);

  levantar();
  delay(2000);
//  avanzar_1();
//  delay(2000);
//  retroceders();
//  delay(2000);
//  girar_der();
//  delay(100);
  girar_izq();
  delay(100);
   //espera de 0.1 segundos
}

//Funcion para acostar el robot
void Acostar() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posición inicial
  frl.write(home_frl); //levanta la pata derecha frontal a la posición inicial
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posición inicial
  fll.write(home_fll); //levanta la pata izquierda frontal a la posición inicial
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posición inicial
  rrl.write(home_rrl); //levanta la pata derecha trasera a la posición inicial
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posición inicial
  rll.write(home_rll); //levanta la pata izquierda trasera a la posición inicial
  }

  //funcion para levantar el robot
void levantar() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posición inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posición inicial
  fll.write(home_fll-60); //baja la pata izquierda frontal
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posición inicial
  rrl.write(home_rrl-45); //baja la pata derecha trasera
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posición inicial
  rll.write(home_rll+80); //baja la pata izquierda trasera
  }

  //Funcion para sentar el robot
void sentar() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posición inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posición inicial
  fll.write(home_fll-60); //baja la pata izquierda frontal
  rrh.write(home_rrh); //mueve la cadera derecha trasera hacia el centro
  rrl.write(home_rrl); //levanta la pata derecha trasera a la posición inicial
  rlh.write(home_rlh); //mueve la cadera izquierda trasera hacia el centro
  rll.write(home_rll); //levanta la pata izquierda trasera a la posición inicial
  }

    // Función para inclinar hacia la derecha el robot
void inclinar_derecha() {
  frh.write(home_frh-30); //mueve la cadera derecha frontal hacia el contado derecho
  frl.write(home_frl); //levanta la pata derecha frontal a la posición inicial
  flh.write(home_flh); //mueve la cadera izquierda frontal a la posición inicial
  fll.write(home_fll-60); //baja la pata izquierda frontal 
  rrh.write(home_rrh+40); //mueve la cadera derecha trasera hacia el costado derecho
  rrl.write(home_rrl); //levanta la pata derecha trasera a la posición inicial
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posición inicial
  rll.write(home_rll+80); //baja la pata izquierda trasera
  }

  // Función para inclinar hacia la izquierda el robot
void inclinar_izquierda() {
  frh.write(home_frh); //mueve la cadera derecha frontal a la posición inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  flh.write(home_flh+40); //mueve la cadera izquierda frontal hacia el costado izquierdo
  fll.write(home_fll); //levanta la pata izquierda frontal a la poscicion inicial
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posición inicial
  rrl.write(home_rrl-60); //baja la pata derecha trasera
  rlh.write(home_rlh-30); //mueve la cadera izquierda trasera hacia el costado izquierdo 
  rll.write(home_rll); //levanta la pata izquierda trasera a la posición inicial
  }

  //Funcion para inclinar hacia delante el robot
void inclinar() {
  frh.write(home_frh+30); //mueve la cadera derecha frontal hacia el centro
  frl.write(home_frl); //levanta la pata derecha frontal a la posición inicial
  flh.write(home_flh-20); //mueve la cadera izquierda frontal hacia el centro
  fll.write(home_fll); //levanta la pata izquierda frontal a la posición inicial
  rrh.write(home_rrh); //mueve la cadera derecha trasera a la posición inicial
  rrl.write(home_rrl-60); //baja la pata derecha trasera
  rlh.write(home_rlh); //mueve la cadera izquierda trasera a la posición inicial
  rll.write(home_rll+80); //baja la pata izquierda trasera
  }

  //Funcion para que salude el robot
void saludar() {
  levantar(); //posiciona el cuadrúpedo de forma parada en sus cuatro extremidades.
  frl.write(home_frl-75); //levanta la pata derecha frontal
  delay (300); //espera 0.5 segundos antes de mover la pata
  for(int i=0; i<5; i++)//ciclo for que permite realizar 5 movimientos de la pata para saludar
  {  frh.write(home_frh-30); //mueve la cadera derecha frontal hacia el costado derecho del cuadrúpedo
     delay(500); //espera 0.5 segundos.
     frh.write(home_frh+20); //mueve la cadera derecha frontal hacia el centro del cuadrúpedo
     delay(500); //espera 0.5 segundos.
     }
  frh.write(home_frh); //mueve la cadera derecha frontal a la posición inicial
  frl.write(home_frl+60); //baja la pata derecha frontal
  delay (300); //espera 0.5 segundos antes de finalizar el movimiento
  }

  //Funcion para que ande el robot
void avanzar(){
   for(int i=0; i<5; i++) {
     frl.write(home_frl); //levanta la pata derecha frontal
     delay(100); //espera de 0.1 segundos
     frh.write(home_frh+20); //mueve la cadera derecha frontal hacia adelante
     delay(100); //espera de 0.1 segundos
     frl.write(home_frl+60); //baja la pata derecha frontal
     delay(100); //espera de 0.1 segundos

     rll.write(home_rll); //levanta la pata izquierda trasera 
     delay(100); //espera de 0.1 segundos
     rlh.write(home_rlh-75); //mueve la cadera izquierda trasera hacia adelante
     delay(100); //espera de 0.1 segundos
     rll.write(home_rll+70); //baja la pata izquierda trasera 
     delay(500); //espera de 0.1 segundos
     
     frh.write(home_frh-20); //mueve la cadera derecha frontal hacia atras
     rlh.write(home_rlh+35); //mueve la cadera izquierda trasera hacia atras
     flh.write(home_flh+25); //mueve la cadera izquierda frontal hacia atrás
     rrh.write(home_rrh-25); //mueve la cadera derecha trasera hacia atrás
     delay(100); //espera de 0.1 segundos

     fll.write(home_fll); //levanta la pata izquierda frontal 
     delay(100); //espera de 0.1 segundos
     flh.write(home_flh-20); //mueve la cadera izquierda frontal hacia adelante
     delay(100); //espera de 0.1 segundos
     fll.write(home_fll-50); //baja la pata izquierda frontal
     delay(100); //espera de 0.1 segundos
     
     rrl.write(home_rrl); //levanta la pata derecha trasera
     delay(100); //espera de 0.1 segundos
     rrh.write(home_rrh+40); //mueve la cadera derecha trasera hacia adelante
     delay(100); //espera de 0.1 segundos 
     rrl.write(home_rrl-60); //baja la pata derecha trasera
     delay(100); //espera de 0.1 segundos
     
     frh.write(home_frh); //mueve la cadera derecha frontal hacia atras
     rlh.write(home_rlh); //mueve la cadera izquierda trasera hacia atras
     flh.write(home_flh); //mueve la cadera izquierda frontal hacia atrás
     rrh.write(home_rrh); //mueve la cadera derecha trasera hacia atrás
     delay(2000); //espera de 0.1 segundos
     }
   levantar(); //posiciona el cuadrúpedo de forma parada en sus cuatro extremidades.
   delay(2000);
 }


 void avanzar_1(){
   for(int i=0; i<5; i++) {
      rll.write(home_rll);
      delay(100);
      rlh.write(home_rlh-45);
      delay(100);
      rll.write(home_rll+80);
      delay(100);

      fll.write(home_fll);
      delay(100);
      flh.write(home_flh-30);
      delay(100);
      fll.write(home_fll-50);
      delay(100);

      rrl.write(home_rrl);
      delay(100);
      rrh.write(home_rrh+35);
      delay(100);
      rrl.write(home_rrl-60);
      delay(100);

      frl.write(home_frl);
      delay(100);
      frh.write(home_frh+25);
      delay(100);
      frl.write(home_frl+60);
      delay(100);

      frh.write(home_frh); 
      rlh.write(home_rlh); 
      flh.write(home_flh); 
      rrh.write(home_rrh);
      delay(100);
      }
      levantar(); //posiciona el cuadrúpedo de forma parada en sus cuatro extremidades.
      delay(250);
 }

void retroceders(){
   for(int i=0; i<5; i++) {

      frl.write(home_frl);
      delay(100);
      frh.write(home_frh-35);
      delay(100);
      frl.write(home_frl+60);
      delay(100);

      rrl.write(home_rrl);
      delay(100);
      rrh.write(home_rrh-30);
      delay(100);
      rrl.write(home_rrl-60);
      delay(100);
      
      fll.write(home_fll);
      delay(100);
      flh.write(home_flh+30);
      delay(100);
      fll.write(home_fll-50);
      delay(100);

      rll.write(home_rll);
      delay(100);
      rlh.write(home_rlh+40);
      delay(100);
      rll.write(home_rll+80);
      delay(100);

     
      frh.write(home_frh); 
      rlh.write(home_rlh); 
      flh.write(home_flh); 
      rrh.write(home_rrh);
      delay(100);
      }
      levantar(); //posiciona el cuadrúpedo de forma parada en sus cuatro extremidades.
      delay(250);
 }

  void girar_der(){
   for(int i=0; i<26; i++) {
      rll.write(home_rll);
      delay(100);
      rlh.write(home_rlh+40);
      delay(100);
      rll.write(home_rll+80);
      delay(100);

      fll.write(home_fll);
      delay(100);
      flh.write(home_flh+30);
      delay(100);
      fll.write(home_fll-50);
      delay(100);

      rrl.write(home_rrl);
      delay(100);
      rrh.write(home_rrh+35);
      delay(100);
      rrl.write(home_rrl-60);
      delay(100);

      frl.write(home_frl);
      delay(100);
      frh.write(home_frh+25);
      delay(100);
      frl.write(home_frl+60);
      delay(100);

      frh.write(home_frh); 
      rlh.write(home_rlh); 
      flh.write(home_flh); 
      rrh.write(home_rrh);
      delay(500);
      }
 }

  void girar_izq(){
   for(int i=0; i<28; i++) {
      rll.write(home_rll);    //mueve rll a la posicion original
      delay(100);             //espera 100ms
      rlh.write(home_rlh-45); //ava rll
      delay(100);             //espera 100ms
      rll.write(home_rll+80); //levanta rll
      delay(100);             //espera 100ms

      fll.write(home_fll);    //mueve fll a la posicion original
      delay(100);             //espera 100ms
      flh.write(home_flh-30); //
      delay(100);             //espera 100ms
      fll.write(home_fll-50);
      delay(100);             //espera 100ms

      rrl.write(home_rrl);
      delay(100);             //espera 100ms
      rrh.write(home_rrh-30);
      delay(100);             //espera 100ms
      rrl.write(home_rrl-60);
      delay(100);             //espera 100ms
          
      frl.write(home_frl);
      delay(100);             //espera 100ms
      frh.write(home_frh-35);
      delay(100);             //espera 100ms
      frl.write(home_frl+60);
      delay(100);             //espera 100ms

      frh.write(home_frh);    //mueve frh a la posicion original
      rlh.write(home_rlh);    //mueve rlh a la posicion original
      flh.write(home_flh);    //mueve flh a la posicion original
      rrh.write(home_rrh);    //mueve rrh a la posicion original
      delay(100);             //espera 100ms
      }
 }
