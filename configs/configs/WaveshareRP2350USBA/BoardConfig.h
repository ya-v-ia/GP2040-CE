#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Waveshare RP2350-USB-A"

#define BOARD_INIT() { \
    gpio_init(0); \
    gpio_set_dir(0, GPIO_OUT); \
    gpio_put(0, 0); \
}


#define USB_HOST_DP_PIN 12

#define BOARD_LEDS_PIN          16
#define LED_BRIGHTNESS_MAXIMUM  50
#define LED_BRIGHTNESS_STEPS    5
#define LEDS_PER_PIXEL          1
#define LEDS_BASE_ANIMATION_INDEX 1

#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_UP
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_DOWN
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_LEFT
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_RIGHT
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_B1
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B2
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_R2
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_L2
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_B3
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_B4
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_R1
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_L1
#define GPIO_PIN_28 GpioAction::BUTTON_PRESS_S1
#define GPIO_PIN_29 GpioAction::BUTTON_PRESS_S2

#endif
