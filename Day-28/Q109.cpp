//WAP to create library management system.

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
void searchBook();
void issueBook();
void returnBook();
void deleteBook();

int main()
{
    int choice;

    do
    {
        cout << "\n      LIBRARY MANAGEMENT SYSTEM     \n";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Delete Book";
        cout << "\n7. Exit";
        cout << "\n----------------------------------------";
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
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                deleteBook();
                break;

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }
    } while(choice != 7);
    return 0;
}

void addBook(){
    int n;

    cout << "\nHow many books do you want to add? ";
    cin >> n;

    if(count + n > 100)
    {
        cout << "\nNot enough space to add books.\n";
        return;
    }

    cin.ignore();

    for(int i = 0; i < n; i++){
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

    cout << "\nBooks Added Successfully.\n";
}

void displayBooks(){
    if(count == 0)
    {
        cout << "\nNo Books Available.\n";
        return;
    }

    cout << "\n=====================================================================\n";
    cout << "ID\tBook Name\t\tAuthor\t\t\tStatus\n";
    cout << "=====================================================================\n";

    for(int i = 0; i < count; i++){
        cout << library[i].id << "\t"<< library[i].name << "\t\t"<< library[i].author << "\t\t"<< (library[i].available ? "Available" : "Issued")<< endl;
    }
}

void searchBook(){
    int id;
    bool found = false;

    cout << "\nEnter Book ID : ";
    cin >> id;

    for(int i = 0; i < count; i++){
        if(library[i].id == id)
        {
            cout << "\nBook Found\n";
            cout << "Book ID : " << library[i].id << endl;
            cout << "Book Name : " << library[i].name << endl;
            cout << "Author : " << library[i].author << endl;
            cout << "Status : "<< (library[i].available ? "Available" : "Issued")<< endl;

            found = true;
            break;
        }
    }
    if(!found)
        cout << "\nBook Not Found.\n";
}

void issueBook(){
    int id;
    bool found = false;

    cout << "\nEnter Book ID : ";
    cin >> id;

    for(int i = 0; i < count; i++){
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
                cout << "\nBook Already Issued.\n";
            }
            break;
        }
    }

    if(!found)
        cout << "\nBook Not Found.\n";
}

void returnBook(){
    int id;
    bool found = false;

    cout << "\nEnter Book ID : ";
    cin >> id;

    for(int i = 0; i < count; i++){
        if(library[i].id == id)
        {
            found = true;

            if(!library[i].available)
            {
                library[i].available = true;
                cout << "\nBook Returned Successfully.\n";
            }
            else
            {
                cout << "\nThis Book is Already Available.\n";
            }
            break;
        }
    }

    if(!found)
        cout << "\nBook Not Found.\n";
}

void deleteBook(){
    int id;
    bool found = false;

    cout << "\nEnter Book ID : ";
    cin >> id;

    for(int i = 0; i < count; i++){
        if(library[i].id == id)
        {
            found = true;

            for(int j = i; j < count - 1; j++)
            {
                library[j] = library[j + 1];
            }

            count--;

            cout << "\nBook Deleted Successfully.\n";
            break;
        }
    }
    if(!found)
        cout << "\nBook Not Found.\n";
}