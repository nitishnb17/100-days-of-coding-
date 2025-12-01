#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;  
  

    
  
    printf("Enter name: ");
    scanf("%s", ptr->name);     


    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no); 
  

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);   
  

  
  
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
