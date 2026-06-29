//WAP to create a library management system.

#include <iostream>
#include <string>
using namespace std;

struct Book{
    int id;
    string name;
    string author;
    bool available;
};

Book library[100];
int count = 0;

void addBook();
void displayBooks();
void issueBook();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n        MINI LIBRARY SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                issueBook();
                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}

void addBook(){
    int n;

    cout << "\nHow many books do you want to add? ";
    cin >> n;

    if(count + n > 100)
    {
        cout << "\nLibrary is Full!\n";
        return;
    }

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID : ";
        cin >> library[count].id;
        cin.ignore();

        cout << "Enter Book Name : ";
        getline(cin, library[count].name);

        cout << "Enter Author Name : ";
        getline(cin, library[count].author);

        library[count].available = true;

        count++;
    }

    cout << "\nBook(s) Added Successfully.\n";
}

void displayBooks(){
    if(count == 0)
    {
        cout << "\nNo Books Available.\n";
        return;
    }

    cout << "\n====================================================================";
    cout << "\nID\tBook Name\t\tAuthor\t\tStatus";
    cout << "\n====================================================================";

    for(int i = 0; i < count; i++)
    {
        cout << "\n"<< library[i].id << "\t"<< library[i].name << "\t\t"<< library[i].author << "\t\t"<< (library[i].available ? "Available" : "Issued");
    }

    cout << endl;
}

void issueBook(){
    int id;
    bool found = false;

    cout << "\nEnter Book ID : ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            found = true;

            if(library[i].available)
            {
                library[i].available = false;
                cout << "\nBook Issued Successfully.\n";
            }
            else
            {
                cout << "\nBook is Already Issued.\n";
            }

            break;
        }
    }

    if(!found)
    {
        cout << "\nBook Not Found.\n";
    }
}