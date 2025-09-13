#include <stdio.h>
int main() {
    float length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
