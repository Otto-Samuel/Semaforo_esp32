#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET    -1
#define SCREEN_ADDRESS 0x3C

#define RED_LED_PIN 12
#define YELLOW_LED_PIN 14
#define GREEN_LED_PIN 27

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int tempo_vermelho = 10;
int tempo_amarelo = 3;
int tempo_verde = 7;

void setup() {
  Serial.begin(9600);

  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("Erro ao iniciar o display SSD1306"));
    for(;;);
  }

  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {
  // LED Vermelho
  digitalWrite(RED_LED_PIN, HIGH);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
  mostrarTempo("Vermelho:", tempo_vermelho);
  delay(tempo_vermelho * 600);

  // LED Amarelo
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, HIGH);
  digitalWrite(GREEN_LED_PIN, LOW);
  mostrarTempo("Amarelo:", tempo_amarelo);
  delay(tempo_amarelo * 1000);

  // LED Verde
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, HIGH);
  mostrarTempo("Verde:", tempo_verde);
  delay(tempo_verde * 1000);
}

void mostrarTempo(String cor, int tempo) {
  display.clearDisplay();
  
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(cor);
  display.print(tempo);
  display.println("s");
  
  display.display();
  
  while(tempo > 0) {
    tempo--;
    delay(1000);
    display.clearDisplay();
    display.setCursor(0, 0);
    display.print(cor);
    display.print(tempo);
    display.println("s");
    display.display();
  }
}
