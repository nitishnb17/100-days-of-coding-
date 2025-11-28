#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char *monthName[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    // Taking input
    printf("Enter date in dd/mm/yyyy format: ");
    gets(date);

    // Extract day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    int monthIndex = atoi(month);
    if(monthIndex < 1 || monthIndex > 12){
        printf("Invalid month");
        return 0;
    }

    printf("%s-%s-%s", day, monthName[monthIndex - 1], year);
    return 0;
}
