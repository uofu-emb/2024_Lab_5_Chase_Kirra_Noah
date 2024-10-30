#include <stdio.h>
#include <pico/stdlib.h>
#include <TestDefines.h>

int main(void)
{
    int toggle = 0;
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);

    while (true) {
        toggle = !toggle;
        volatile int baseValue = 9898;
        volatile int temp = 0;
        for(int i = 0; i < 1000; i++)
        {
            temp = baseValue++/7;
        }
        temp++;
        gpio_put(OUT_PIN, toggle);
        sleep_ms(DELAY_MS);
    }
}
