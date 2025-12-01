#include <stdio.h>

typedef enum {
    MALE = 1,
    FEMALE,
    OTHER
} Gender;

struct Person {
    char name[50];
    Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender (1 = MALE, 2 = FEMALE, 3 = OTHER): ");
    scanf("%d", (int*)&p.gender);

    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Gender: Invalid\n");
    }

    return 0;
}
