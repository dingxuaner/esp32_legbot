#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "Arduino.h"


void app_main() {
    /**
     * @brief 配置 GPIO_NUM_2 引脚为输出模式并设置其电平为高电平。
     * 
     * 此函数首先选择 GPIO_NUM_2 引脚，然后将其配置为输出模式，最后将该引脚的电平设置为高电平（1）。
     */
    esp_rom_gpio_pad_select_gpio(GPIO_NUM_2);
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
    while (1) {
        
        gpio_set_level(GPIO_NUM_2, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_2, 0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);

    }
}