int _led_IN1 = A1;
int _led_IN2 = A2;
int _led_IN3 = A3;
int _led_IN4 = A4;
int _led_ENAIZQ = 10;
int _led_ENBDER = 9;

void motorDobleTorcion(String direccion, double velocidadIzq, double velocidadDer, String orientacion) {

    if ( direccion == "adelante" ) {
        adelante();
        analogWrite(_led_ENAIZQ, velocidadIzq);
        analogWrite(_led_ENBDER, velocidadDer);
    } else if ( direccion == "atras" ) {
        atras();
        analogWrite(_led_ENAIZQ, velocidadIzq);
        analogWrite(_led_ENBDER, velocidadDer);
    }

}
void atras() {
    digitalWrite(A1, 0);
    digitalWrite(A2, 1);
    digitalWrite(A3, 0);
    digitalWrite(A4, 1);
}
void adelante() {
  digitalWrite(_led_IN1, 1);
  digitalWrite(_led_IN2, 0);
  digitalWrite(_led_IN3, 1);
  digitalWrite(_led_IN4, 0);
}
void setup() {
    pinMode(_led_IN1, OUTPUT);
    pinMode(_led_IN2, OUTPUT);
    pinMode(_led_IN3, OUTPUT);
    pinMode(_led_IN4, OUTPUT);
    pinMode(_led_ENAIZQ, OUTPUT);
    pinMode(_led_ENBDER, OUTPUT);

}

void loop() {
  

}
