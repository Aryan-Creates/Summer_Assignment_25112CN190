//WAP to create salary management system.

#include <iostream>
using namespace std;

struct Employee{
    int empId;
    string name;
    float basicSalary;
};

int main(){
    Employee employees[100];
    int count = 0;
    int choice;

    while(true){
        cout << "\n===== SALARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Salary Details\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
            {
                cout << "\nEnter Employee ID: ";
                cin >> employees[count].empId;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, employees[count].name);

                cout << "Enter Basic Salary: ";
                cin >> employees[count].basicSalary;

                count++;

                cout << "Employee Added Successfully!\n";
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    cout << "\nNo Employee Records Found!\n";
                }
                else
                {
                    cout << "\n      SALARY DETAILS      \n";

                    for(int i = 0; i < count; i++)
                    {
                        float hra = employees[i].basicSalary * 0.20;
                        float da = employees[i].basicSalary * 0.10;
                        float grossSalary =
                            employees[i].basicSalary + hra + da;

                        cout << "\nEmployee ID : "<< employees[i].empId;

                        cout << "\nName        : "<< employees[i].name;

                        cout << "\nBasic Salary: "<< employees[i].basicSalary;

                        cout << "\nHRA         : "<< hra;

                        cout << "\nDA          : "<< da;

                        cout << "\nGross Salary: "<< grossSalary;

                        cout << "\n--------------------------\n";
                    }
                }
                break;
            }

            case 3:
            {
                int searchId;
                bool found = false;

                cout << "\nEnter Employee ID to Search: ";
                cin >> searchId;

                for(int i = 0; i < count; i++)
                {
                    if(employees[i].empId == searchId)
                    {
                        float hra = employees[i].basicSalary * 0.20;
                        float da = employees[i].basicSalary * 0.10;
                        float grossSalary =
                            employees[i].basicSalary + hra + da;

                        cout << "\nEmployee Found!\n";

                        cout << "Employee ID : "<< employees[i].empId << endl;

                        cout << "Name        : "<< employees[i].name << endl;

                        cout << "Basic Salary: "<< employees[i].basicSalary << endl;

                        cout << "Gross Salary: "<< grossSalary << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "\nEmployee Not Found!\n";
                }
                break;
            }

            case 4:
            {
                cout << "\nExiting Program...\n";
                return 0;
            }

            default:
            {
                cout << "\nInvalid Choice!\n";
            }
        }
    }
    return 0;
}