#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

int main() {
    TrafficLight light;

    
    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", (int *)&light);

    switch (light) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid Traffic Light\n");
    }

    return 0;
}
