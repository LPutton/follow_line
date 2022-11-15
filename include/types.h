#include <Arduino.h>
#include <Wire.h>

#define MAIN1 PA2
#define MAIN2 PA1
#define MBIN1 PA7
#define MBIN2 PB0

#define MAXVELA 50 //m1 49 teste
#define MAXVELB 50 //m2 39 teste

#define INVERTER 0  //se quiser inverter os sensor colocar 1 se não 0
// Linha branca INVERTER = 0, linha preta INVERTER = 1

#define BORDA_RC 1
#define BORDA_RC_TIMEOUT 350
#define divisor 7 // divisor da faixa que determina o threshold

#define LED_L1 PB12
#define LED_L2 PA11
#define LED_L3 PC13
#define BOT1 PB3
#define BOT2 PB4

#define dist_L 0.150 // distância entre rodas
#define analogBat PA12   // Pino do leitor de bateria

#define MPU_ADDR 0x68
