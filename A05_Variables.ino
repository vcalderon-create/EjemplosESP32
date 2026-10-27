/**
 * Institut Camí de Mar - M14 Projecte 2 IoT
 * Activitat: A05 Programació ESP32. C. Variables
 * 
 * Propòsit: Demostrar l'ús, rang i declaració dels diferents tipus de variables en C.
 */

// 1. QUALIFICADOR 'const': S'usa per a valors que NO canviaran (com els pins de hardware)
const int LED_INTERN = 2; // Pin del LED integrat en l'ESP32

// 2. VARIABLE 'int' (Integer): Números enters (2 Bytes). Ús habitual: comptadors o pins
int contadorLoops = 0;

// 3. VARIABLE 'long' (Long Integer): Enters molt grans (4 Bytes). Ús habitual: temps amb millis()
long tempsAnterior = 0;

// 4. VARIABLE 'float': Números amb decimals (4 Bytes). Ús habitual: lectures de sensors
float temperaturaSensor = 24.5;

// 5. VARIABLE 'char' (Character): Un sol caràcter o símbol (1 Byte)
char lletraEstat = 'A';

// 6. VARIABLE 'bool' (Boolean): Només pot ser veritable (true) o fals (false) (1 Byte)
bool sistemaActiu = true;

void setup() {
  // Inicialitza la comunicació serie a 115200 baudios
  Serial.begin(115200);
  delay(1000);
  
  // Configurem el pin del LED com a sortida utilitzant la constant
  pinMode(LED_INTERN, OUTPUT);
  
  Serial.println("--- Iniciant Demostració de Variables ---");
}

void loop() {
  // Incrementem el comptador enter a cada volta del bucle
  contadorLoops++;
  
  // Guardem el temps actual en la variable 'long'
  tempsAnterior = millis();

  // Mostrem els valors i tipus de variables pel Monitor Sèrie
  Serial.print("1. [int] Contador de loops: ");
  Serial.println(contadorLoops);

  Serial.print("2. [long] Temps des de l'inici (millis): ");
  Serial.println(tempsAnterior);

  Serial.print("3. [float] Temperatura simulada: ");
  Serial.print(temperaturaSensor);
  Serial.println(" *C");

  Serial.print("4. [char] Identificador d'estat: ");
  Serial.println(lletraEstat);

  Serial.print("5. [bool] El sistema està actiu?: ");
  Serial.println(sistemaActiu ? "SÍ (true)" : "NO (false)");

  Serial.println("---------------------------------------");

  // Fem parpellejar el LED de forma dinàmica per interactuar amb el hardware
  digitalWrite(LED_INTERN, HIGH);
  delay(500);
  digitalWrite(LED_INTERN, LOW);
  
  // Espera de 2 segons (2000 mil·lisegons) abans de tornar a repetir el loop
  delay(1500); 
}
