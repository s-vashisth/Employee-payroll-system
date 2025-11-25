#include <stdio.h>
#include "../Include/employee.h"


int main() {
    struct Employee emp[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== EMPLOYEE PAYROLL SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. View Payroll\n");
        printf("3. Exit\n");
        printf("Enter choice: ");   
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(emp, &count);
                break;

            case 2:
                viewEmployees(emp, count);
                break;

            case 3:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
