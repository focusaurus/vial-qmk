// Double-tap reset works by default on my RP2040 board.
// these settings are not necessary
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// First I choose the PIO "subsystem" in halconf.h,
// then we use USART full duplex with a pinout
// that matches what our board supports and
// how we actually ran traces in ergogen/kicad
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP2
#define SERIAL_USART_RX_PIN GP3

// This is necessary because our reversible board routes
// tracks from left hand pin to matching right hand pin.
// In more typical non-reversible setups, TX and RX would
// get criss crossed in the wiring.
// This setting takes care of it in firmware.
#define SERIAL_USART_PIN_SWAP

// this should speed up bootup
#define USB_VBUS_PIN GP19
