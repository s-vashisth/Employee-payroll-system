#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define MAX 50

struct Employee {
    int id;
    char name[30];
    float basicSalary;
    float houseRentAllowance;
    float dearnessAllowance;
    float providentFund;
    float grossSalary;
};


void addEmployee(struct Employee emp[], int *count);
void viewEmployees(struct Employee emp[], int count);

#endif
