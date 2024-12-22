#include <iostream>
using namespace std;
class Employee
{
    public:
    float basicPay,grossSalary,netSalary;

    // Allowances
    float DA_PERCENTAGE = 45.0;
    float HRA_PERCENTAGE = 14.0;
    float CCA_PERCENTAGE = 10.0;

    // Deductions
    float PF_PERCENTAGE = 12.0;
    float LIC_PERCENTAGE = 15.0;

    // Constructor to initialize basic pay
    Employee(float basic)//function with argument
     {
        basicPay = basic;
        grossSalary = 0.0;
        netSalary = 0.0;
     }

    // Function to calculate gross salary
    void calculateGrossSalary()
    {
        float DA = (DA_PERCENTAGE / 100) * basicPay;
        float HRA = (HRA_PERCENTAGE / 100) * basicPay;
        float CCA = (CCA_PERCENTAGE / 100) * basicPay;
        
        grossSalary = basicPay + DA + HRA + CCA;
    }

    // Function to calculate net salary
    void calculateNetSalary()
    {
        float PF = (PF_PERCENTAGE / 100) * basicPay;
        float LIC = (LIC_PERCENTAGE / 100) * basicPay;

        netSalary = grossSalary - PF - LIC;
    }

    // Function to display the results
    void displaySalary()
    {
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    float basicPay;

    // enter the value from user for basic pay
    cout << "Enter the basic pay of the employee: ";
    cin >> basicPay;

    // Create an Employee object
    Employee emp(basicPay);

    // Calculate gross and net salary
    emp.calculateGrossSalary();
    emp.calculateNetSalary();

    // Display the salary details
    emp.displaySalary();

    return 0;
}
