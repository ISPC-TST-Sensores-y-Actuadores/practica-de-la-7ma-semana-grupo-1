#include <Arduino.h>
int contador=0;
int inicio=0;

void setup() {
  Serial.begin(9600);
 Serial.println("SENSORES Y ACTUADRES 'ISPC'");
  // put your setup code here, to run once:

}

void loop() {
if (inicio==0){
  Serial.println("ESTE CODIGO SIRVE PARA VERIFICAR LA PERDIDA DE DATOS.");
  inicio=1;
  delay(2000);
}
else {
  Serial.print("Paquete: ");
  Serial.println(contador);
  contador++;
  delay(100);
}
}