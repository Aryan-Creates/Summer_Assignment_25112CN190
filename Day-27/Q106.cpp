//WAP to create employee management system.

#include <iostream>
using namespace std;

struct Employee{
    int empId;
    string name;
    float salary;
};

int main(){
    Employee employees[100];
    int count = 0;
    int choice;

    while(true){
        cout << "\n      EMPLOYEE MANAGEMENT SYSTEM      \n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nEnter Employee ID: ";
                cin >> employees[count].empId;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, employees[count].name);

                cout << "Enter Salary: ";
                cin >> employees[count].salary;

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
                    cout << "\n      EMPLOYEE RECORDS      \n";

                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nEmployee ID : "<< employees[i].empId;

                        cout << "\nName        : "<< employees[i].name;

                        cout << "\nSalary      : "<< employees[i].salary;

                        cout << "\n------------------------\n";
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
                        cout << "\nEmployee Found!\n";

                        cout << "Employee ID : "<< employees[i].empId << endl;

                        cout << "Name        : "<< employees[i].name << endl;

                        cout << "Salary      : "<< employees[i].salary << endl;

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