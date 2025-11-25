# 📘 Employee Payroll System (C Program)

A simple and modular **Employee Payroll System** written in C, using:

- Header files  
- Multiple source files  
- Structures  
- Function modularity  
- Salary calculations  

This project demonstrates how to structure a C program across different files using `/src` and `/Include`.

---

## 📁 Project Structure

```
Employee-payroll-system/
│
├── Include/
│     └── employee.h
│
├── src/
│     ├── Main.c
│     └── employee.c
│
└── README.md
```

---

## 🚀 Features

✔ Add new employees  
✔ Automatically calculate:
- House Rent Allowance (20%)
- Dearness Allowance (15%)
- Provident Fund (12%)
- Gross Salary

✔ Display salary details of all employees  
✔ Modular & clean file structure  
✔ Easy to compile with GCC  

---

## 🛠️ How to Compile

### Using GCC  
Open the terminal in the project **root folder** and run:

```
gcc src/Main.c src/employee.c -I Include -o payroll
```

To run the program:

```
./payroll
```

---

## 💻 Program Workflow

1. User selects a menu option:  
   - Add Employee  
   - View Payroll  
   - Exit  

2. When adding an employee:  
   - ID, Name, and Basic Salary are entered  
   - Allowances & deductions are computed automatically  

3. Payroll displays salary details of all employees.

---

## 📄 File Descriptions

### `employee.h`
Contains the employee structure and function declarations.

### `employee.c`
Contains functions for:
- Adding employee  
- Calculating salary  
- Displaying payroll  

### `Main.c`
Contains the main menu and program loop.

---

## 📦 Uploading to GitHub

```
git init
git add .
git commit -m "Initial commit - Employee Payroll System"
git branch -M main
git remote add origin https://github.com/yourusername/Employee-payroll-system.git
git push -u origin main
```

---

## 🤝 Contributing

Suggestions and improvements are welcome.

---

## 📜 License

This project is open-source under the MIT License.
