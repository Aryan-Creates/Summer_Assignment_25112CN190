//WAP to create a mini employment management system.

#include <iostream>
#include <string>
using namespace std;

struct Employee{
    int id;
    string name;
    float salary;
};

Employee employees[100];
int count = 0;

void addEmployee();
void displayEmployees();
void searchEmployee();
void updateSalary();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n   MINI EMPLOYEE MANAGEMENT SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Salary";
        cout << "\n5. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateSalary();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}

void addEmployee(){
    int n;

    cout << "\nHow many employees do you want to add? ";
    cin >> n;

    if(count + n > 100)
    {
        cout << "\nEmployee Database is Full!\n";
        return;
    }

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID : ";
        cin >> employees[count].id;
        cin.ignore();

        cout << "Enter Employee Name : ";
        getline(cin, employees[count].name);

        cout << "Enter Salary : ";
        cin >> employees[count].salary;
        cin.ignore();

        count++;
    }

    cout << "\nEmployee(s) Added Successfully.\n";
}

void displayEmployees(){
    if(count == 0)
    {
        cout << "\nNo Employee Records Found.\n";
        return;
    }

    cout << "\n========================================================";
    cout << "\nID\tName\t\t\tSalary";
    cout << "\n========================================================";

    for(int i = 0; i < count; i++)
    {
        cout << "\n"<< employees[i].id << "\t"<< employees[i].name << "\t\t"<< employees[i].salary;
    }

    cout << endl;
}

void searchEmployee(){
    int id;
    bool found = false;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(employees[i].id == id)
        {
            cout << "\nEmployee Found";
            cout << "\nEmployee ID : " << employees[i].id;
            cout << "\nName        : " << employees[i].name;
            cout << "\nSalary      : " << employees[i].salary << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nEmployee Not Found.\n";
    }
}

void updateSalary(){
    int id;
    bool found = false;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(employees[i].id == id)
        {
            cout << "Current Salary : " << employees[i].salary << endl;
            cout << "Enter New Salary : ";
            cin >> employees[i].salary;

            cout << "\nSalary Updated Successfully.\n";

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nEmployee Not Found.\n";
    }
}