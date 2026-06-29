//WAP to create Student Record System using Arrays and Strings.

#include <iostream>
#include <string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    float marks;
};

Student students[100];
int count = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateMarks();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n      STUDENT RECORD SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
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

void addStudent(){
    int n;

    cout << "\nHow many students do you want to add? ";
    cin >> n;

    if(count + n > 100)
    {
        cout << "\nStudent Record is Full!\n";
        return;
    }

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Enter Roll Number : ";
        cin >> students[count].rollNo;
        cin.ignore();

        cout << "Enter Name : ";
        getline(cin, students[count].name);

        cout << "Enter Marks : ";
        cin >> students[count].marks;
        cin.ignore();

        count++;
    }

    cout << "\nStudent(s) Added Successfully.\n";
}

void displayStudents(){
    if(count == 0)
    {
        cout << "\nNo Student Records Found.\n";
        return;
    }

    cout << "\n==============================================================";
    cout << "\nRoll No\tName\t\t\tMarks";
    cout << "\n==============================================================";

    for(int i = 0; i < count; i++)
    {
        cout << "\n"<< students[i].rollNo << "\t"<< students[i].name << "\t\t"<< students[i].marks;
    }

    cout << endl;
}

void searchStudent(){
    int rollNo;
    bool found = false;

    cout << "\nEnter Roll Number : ";
    cin >> rollNo;

    for(int i = 0; i < count; i++)
    {
        if(students[i].rollNo == rollNo)
        {
            cout << "\nStudent Found";
            cout << "\nRoll Number : " << students[i].rollNo;
            cout << "\nName        : " << students[i].name;
            cout << "\nMarks       : " << students[i].marks << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nStudent Not Found.\n";
    }
}

void updateMarks(){
    int rollNo;
    bool found = false;

    cout << "\nEnter Roll Number : ";
    cin >> rollNo;

    for(int i = 0; i < count; i++)
    {
        if(students[i].rollNo == rollNo)
        {
            cout << "Current Marks : " << students[i].marks << endl;
            cout << "Enter New Marks : ";
            cin >> students[i].marks;

            cout << "\nMarks Updated Successfully.\n";

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nStudent Not Found.\n";
    }
}