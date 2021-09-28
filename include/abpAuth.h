#ifndef ABPAUTH
#define ABPAUTH

#define GANHO_LORA_DBM          20 //dBm
#define RADIO_RESET_PORT        14
#define RADIO_MOSI_PORT         27
#define RADIO_MISO_PORT         19
#define RADIO_SCLK_PORT         5
#define RADIO_NSS_PORT          18
#define RADIO_DIO_0_PORT        26
#define RADIO_DIO_1_PORT        33
#define RADIO_DIO_2_PORT        32

static const PROGMEM u1_t NWKSKEY[16] = {0xf5,0x70,0xcd,0xeb,0xf4,0x7d,0x88,0x59,0xd5,0x98,0x77,0xc9,0x5a,0x88,0x75,0xef}; 
static const PROGMEM u1_t APPSKEY[16] = {0xcd,0xb7,0xb8,0x4f,0x8b,0x45,0xcb,0xfa,0xd4,0x00,0xca,0xe9,0x78,0x84,0x92,0x13};
static const u4_t DEVADDR = 0x9207a631;


#endif /* ABPAUTH */
