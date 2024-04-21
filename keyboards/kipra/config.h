// #define SPLIT_HAND_PIN GP4
// #define USB_VBUS_PIN GP14
// #define SERIAL_USART_FULL_DUPLEX
// #define SERIAL_USART_TX_PIN GP4
// #define SERIAL_USART_RX_PIN GP5
// #define SERIAL_USART_PIN_SWAP

// Double-tap reset works by default on my RP2040 board.
// these settings are not necessary
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// #define I2C_DRIVER I2CD0
// nope: GP4, GP5
// nope: GP5, GP4
// nope: GP28, GP29
// nope: GP29, GP28
// #define I2C1_SDA_PIN GP4
// #define I2C1_SCL_PIN GP5

// First I choose the PIO "subsystem" in halconf.h,
// then we use USART half duplex with a pinout
// that matches what our board supports and
// how we actually ran traces in kicad
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP2
#define SERIAL_USART_RX_PIN GP3
#define SERIAL_USART_PIN_SWAP
