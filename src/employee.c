#include <stdio.h>
#include "../Include/employee.h"


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

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[*count].basicSalary);

    // Salary calculations
    emp[*count].houseRentAllowance = emp[*count].basicSalary * 0.20;
    emp[*count].dearnessAllowance  = emp[*count].basicSalary * 0.15;
    emp[*count].providentFund      = emp[*count].basicSalary * 0.12;

    emp[*count].grossSalary = emp[*count].basicSalary +
                              emp[*count].houseRentAllowance +
                              emp[*count].dearnessAllowance -
                              emp[*count].providentFund;

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
        printf("Basic Salary             : %.2f\n", emp[i].basicSalary);
        printf("House Rent Allowance (20%%): %.2f\n", emp[i].houseRentAllowance);
        printf("Dearness Allowance (15%%) : %.2f\n", emp[i].dearnessAllowance);
        printf("Provident Fund (12%%)     : %.2f\n", emp[i].providentFund);
        printf("Gross Salary             : %.2f\n", emp[i].grossSalary);
    }
}
