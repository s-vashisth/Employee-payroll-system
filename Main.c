#include <stdio.h>

#define MAX 50

// Structure to store employee details
struct Employee {
    int id;
    char name[30];
    float basicSalary;     // basicSalary salary
    float houseRentAllowance;       // House Rent Allowance
    float dearnessAllowance;        // Dearness Allowance
    float providentFund;        // Provident Fund
    float grossSalary;     // grossSalary
};

int main();

// Function prototypes
void addEmployee(struct Employee emp[], int *count);
void viewEmployees(struct Employee emp[], int count);

// Main Program
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

// Function to add a new employee
void addEmployee(struct Employee emp[], int *count) {
    if (*count >= MAX) {
        printf("Cannot add more employees.\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[*count].id);

    printf("Enter Employee Name: ");
    scanf("%s", emp[*count].name);

    printf("Enter basicSalary Salary: ");
    scanf("%f", &emp[*count].basicSalary);

    // Salary calculations
    emp[*count].houseRentAllowance = emp[*count].basicSalary * 0.20;     // 20% of basicSalary
    emp[*count].dearnessAllowance  = emp[*count].basicSalary * 0.15;     // 15% of basicSalary
    emp[*count].providentFund  = emp[*count].basicSalary * 0.12;     // 12% of basicSalary
    emp[*count].grossSalary = emp[*count].basicSalary + emp[*count].houseRentAllowance + emp[*count].dearnessAllowance - emp[*count].providentFund;

    (*count)++;

    printf("Employee added successfully!\n");
}

// Function to view payroll of all employees
void viewEmployees(struct Employee emp[], int count) {
    if (count == 0) {
        printf("No employees to display.\n");
        return;
    }

    printf("\n===== PAYROLL DETAILS =====\n");

    for (int i = 0; i < count; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID        : %d\n", emp[i].id);
        printf("Name      : %s\n", emp[i].name);
        printf("basicSalary     : %.2f\n", emp[i].basicSalary);
        printf("houseRentAllowance (20%%) : %.2f\n", emp[i].houseRentAllowance);
        printf("dearnessAllowance (15%%)  : %.2f\n", emp[i].dearnessAllowance);
        printf("providentFund (12%%)  : %.2f\n", emp[i].providentFund);
        printf("grossSalary = %.2f\n", emp[i].grossSalary);
    }
}
