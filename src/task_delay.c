#include <stdio.h>
#include <pico/stdlib.h>
#include <FreeRTOS.h>
#include <task.h>
#include <TestDefines.h>

void main_task(__unused void *params)
{
    int toggle = 0;
    while (1) {
        toggle = !toggle;
        volatile int baseValue = 9898;
        volatile int temp;
        for(int i = 0; i < 1000; i++)
        {
            temp = baseValue++/7;
        }
        temp++;
        gpio_put(OUT_PIN, toggle);
        
        vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
    }
}

int main(void)
{
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    const char *rtos_name = "FreeRTOS";
    TaskHandle_t task;
    xTaskCreate(main_task, "MainThread",
                configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1UL, &task);
    vTaskStartScheduler();
    return 0;
}
