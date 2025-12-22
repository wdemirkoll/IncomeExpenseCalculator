#include <iostream>

// User's monthly salary
double Monthly_Salary = 0;
int Add_Salary;

// User's expenses
double Daily_Expenses = 0;
double Monthly_Expenses = 0;
double Annual_Expenses = 0;

// User's income
double Daily_Income = 0;
double Monthly_Income = 0;
double Annual_Income = 0;

// Function to calculate daily, monthly, and annual income/expenses
void Calculation() {
    // Calculate daily and annual expenses
    Daily_Expenses = Monthly_Expenses / 30;
    Annual_Expenses = Monthly_Expenses * 12;

    // Calculate daily, monthly, and annual income
    Daily_Income = Monthly_Salary / 30;
    Monthly_Income = Monthly_Salary;
    Annual_Income = Monthly_Salary * 12;
}

int main() {
    int Menu;

    while (true) {
        // Display menu options
        std::cout << "[1] - Enter your monthly salary" << std::endl;
        std::cout << "[2] - Add expense" << std::endl;
        std::cout << "[3] - Calculate expenses and income" << std::endl;
        std::cin >> Menu;

        switch (Menu) {
            case 1:
                // Add salary input from user
                std::cout << "Enter: $";
                std::cin >> Add_Salary;
                Monthly_Salary += Add_Salary;

                std::cout << "$" << Monthly_Salary << " Your salary has been added\n\n";
                break;

            case 2:
                // Add monthly expense input from user
                std::cout << "Enter your monthly expense: $";
                std::cin >> Monthly_Expenses;

                std::cout << "$" << Monthly_Expenses << " Your expense has been added\n\n";
                break;

            case 3:
                // Perform calculations and display results
                Calculation();

                std::cout << "Monthly Salary: $" << Monthly_Salary << std::endl;
                std::cout << "Daily Income: $" << Daily_Income << std::endl;
                std::cout << "Monthly Income: $" << Monthly_Income << std::endl;
                std::cout << "Annual Income: $" << Annual_Income << std::endl << std::endl;

                std::cout << "Daily Expense: $" << Daily_Expenses << std::endl;
                std::cout << "Monthly Expense: $" << Monthly_Expenses << std::endl;
                std::cout << "Annual Expense: $" << Annual_Expenses << std::endl << std::endl;
                break;

             default:
                std::cout << "Invalid option. Please choose 1, 2, or 3.\n\n";
                break;
        }
    }

    return 0;
}
