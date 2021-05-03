#include <EEPROM.h> // libreria EEPROM
float temperatura = 27.50; // asigna valor a variable de punto flotante
char cadena[] = "Hola esta es una prueba"; // crea cadena de caracteres con un texto
float temp2 = 50.50;
void setup() {
 Serial.begin(9600); // inicializa monitor serie a 9600 bps

 EEPROM.put(0x00, temperatura); // almacena en direccion cero el punto flotante
 EEPROM.put(0x0A, cadena); // almacena en direccion diez la cadena
 Serial.println("Valor de punto flotante en direccion 0:"); // imprime texto
 Serial.println( EEPROM.get(0, temp2) ); // obtiene valor de punto flotante
 // en direccion cero y muestra
 Serial.println(" "); // espacio en blanco
 Serial.println("Valor de la cadena en direccion 10:"); // imprime texto
 Serial.println( EEPROM.get(10, cadena) ); // obtiene cadena de caracteres en
} // direccion diez y muestra
void loop() { // funcion loop() declarada pero sin contenido
 // nada por aqui
}
