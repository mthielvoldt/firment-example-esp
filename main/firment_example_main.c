/*
 * Firment Example on ESP32
 * 
 */

#include <stdio.h>
// #include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    printf("Hello world!\n");

    for (unsigned i = 0; ; i++) {
        printf("Seconds alive: %d\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
