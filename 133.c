#include <stdio.h>

typedef enum {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} Month;

int main() {
    for (Month m = JANUARY; m <= DECEMBER; m++) {
        int days;

        switch (m) {
            case JANUARY:   days = 31; break;
            case FEBRUARY:  days = 28; break; 
            case MARCH:     days = 31; break;
            case APRIL:     days = 30; break;
            case MAY:       days = 31; break;
            case JUNE:      days = 30; break;
            case JULY:      days = 31; break;
            case AUGUST:    days = 31; break;
            case SEPTEMBER: days = 30; break;
            case OCTOBER:   days = 31; break;
            case NOVEMBER:  days = 30; break;
            case DECEMBER:  days = 31; break;
        }

        printf("Month %d has %d days\n", m, days);
    }

    return 0;
}
