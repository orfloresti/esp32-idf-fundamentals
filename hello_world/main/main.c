#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void app_main(void)
{
    while (true) {
        printf("Hello world!\n");
        sleep(1);
    }
}
