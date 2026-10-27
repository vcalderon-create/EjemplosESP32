/**
 * Institut Camí de Mar - M14 Projecte 2 IoT
 * Activitat: A06 Programació ESP32. Led (Constants en C)
 * 
 * Propòsit: Controlar un LED extern utilitzant una constant per al pin
 * i variables configurables per als temps d'encesa i apagada.
 */

// 1. Definim una constant per al pin on hem connectat el LED extern (GPIO 23)
// Utilitzar 'const' optimitza la memòria RAM i evita errors accidentals.
const int LED_PIN = 23;

// 2. Modificació sol·licitada: variables configurables per als temps (en mil·lisegons)
int tempsEncesa = 1500;  // El LED estarà encès 1.5 segons
int tempsApagat = 500;   // El LED estarà apagat 0.5 segons

void setup() {
  // Configurem el pin del LED com una SORTIDA (OUTPUT)
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Envia 3.3V al pin 23 (encén el LED)
  digitalWrite(LED_PIN, HIGH); 
  // Espera el temps configurat a la variable d'encesa
  delay(tempsEncesa); 

  // Envia 0V al pin 23 (apaga el LED)
  digitalWrite(LED_PIN, LOW); 
  // Espera el temps configurat a la variable d'apagada
  delay(tempsApagat); 
}
