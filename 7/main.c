

#include <stdio.h>

enum DeviceState { OFF, ON, SLEEP, ERROR };

int main() {
    enum DeviceState current = ON;

    switch (current) {
        case OFF:   printf("Device is OFF\n"); break;
        case ON:    printf("Device is ON\n"); break;
        case SLEEP: printf("Device in SLEEP mode\n"); break;
        case ERROR: printf("Device ERROR\n"); break;
    }

    return 0;
}
