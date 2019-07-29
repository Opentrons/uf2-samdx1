#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Opentrons Labworks- Microchip Sublicense"
#define PRODUCT_NAME "Opentrons Thermocycler M0"
#define VOLUME_LABEL "TCBOOT"
#define INDEX_URL "https://github.com/Opentrons"
#define BOARD_ID "SAMD21G18A-Thermocycler_v0"

// Microchip sublicense
#define USB_VID 0x04D8
#define USB_PID 0xED12

#define LED_PIN PIN_PB11
#define FAN_SINK_ENABLE_PIN PIN_PA14
#define PELTIERS_EN_PIN PIN_PA21
#endif
