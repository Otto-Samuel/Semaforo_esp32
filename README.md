# <div align="center">🚦Semáforo com Arduino e Display OLED🚦</div

<div align="center"><img src="https://us.123rf.com/450wm/radowitz/radowitz2006/radowitz200600134/148509292-sem%C3%A1foro-pedonal-na-jun%C3%A7%C3%A3o-da-rua-na-cidade.jpg?ver=6" alt="Descrição do GIF" width="50%" height="300" ></div>

> Este projeto implementa um sistema de controle de semáforo utilizando um Arduino,
    LEDs para simular os semáforos e um display OLED para exibir o tempo de cada fase
    do semáforo.


## 🧑‍💻 Autor

Este projeto foi criado por [otto samuel](https://github.com/ottosamuel01).

## 🛠️ Componentes Necessários

- Arduino Uno (ou similar)
- Display OLED SSD1306 128x64 pixels
- LEDs vermelho, amarelo e verde
- Resistores adequados para limitar a corrente dos LEDs
- Fios de conexão

## 📚Bibliotecas Utilizadas

- [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library)
- [Adafruit SSD1306](https://github.com/adafruit/Adafruit_SSD1306)

Certifique-se de instalar essas bibliotecas em seu ambiente de desenvolvimento Arduino antes de compilar o código.

## 🪛 Montagem do Circuito

Conecte os componentes conforme o esquema abaixo:

LED Vermelho - Pino 12
LED Amarelo - Pino 14
LED Verde - Pino 27

Display OLED:
SDA - A4 (ou pino analógico 4)
SCL - A5 (ou pino analógico 5)


## 💻 Funcionamento do Código

O código controla o semáforo através de um loop que alterna entre as fases vermelho, amarelo e verde, exibindo o tempo de cada fase no display OLED.

## ⏱️ Configuração de Temporização

Os tempos de cada fase do semáforo podem ser ajustados alterando as variáveis `tempo_vermelho`, `tempo_amarelo` e `tempo_verde` no início do código.

## 🤝 Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir um problema ou enviar um pull request com melhorias ou correções.



## ⚖️ Licença

Este projeto é licenciado sob a [MIT License](LICENSE).
