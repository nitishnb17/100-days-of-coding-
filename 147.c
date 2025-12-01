#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[3];  
  
    FILE *fp;

   
  
    printf("Enter details of 3 employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    fp = fopen("employees.dat", "wb");  
  
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(e, sizeof(struct Employee), 3, fp);
  
    fclose(fp);

    printf("\nData written to employees.dat successfully!\n");


    
  
    struct Employee readEmp[3]; 
  

    fp = fopen("employees.dat", "rb");  
  
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(readEmp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    
  
    printf("\n--- Employee Records From File ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", readEmp[i].name);
        printf("ID: %d\n", readEmp[i].id);
        printf("Salary: %.2f\n", readEmp[i].salary);
    }

    return 0;
}
