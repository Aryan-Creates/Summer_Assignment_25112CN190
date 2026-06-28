//WAP to create menu-driven inventory management system.

#include <iostream>
#include <string>
using namespace std;

struct Item{
    int id;
    string name;
    int quantity;
    float price;
};

Item inventory[100];
int count = 0;

void addItem();
void displayItems();
void searchItem();
void updateQuantity();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n    INVENTORY MANAGEMENT SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Search Item";
        cout << "\n4. Update Quantity";
        cout << "\n5. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addItem();
                break;

            case 2:
                displayItems();
                break;

            case 3:
                searchItem();
                break;

            case 4:
                updateQuantity();
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

void addItem(){
    int n;

    cout << "\nHow many items do you want to add? ";
    cin >> n;

    if(count + n > 100)
    {
        cout << "\nInventory is Full!\n";
        return;
    }

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nItem " << i + 1 << endl;

        cout << "Enter Item ID : ";
        cin >> inventory[count].id;
        cin.ignore();

        cout << "Enter Item Name : ";
        getline(cin, inventory[count].name);

        cout << "Enter Quantity : ";
        cin >> inventory[count].quantity;

        cout << "Enter Price : ";
        cin >> inventory[count].price;

        cin.ignore();

        count++;
    }

    cout << "\nItem(s) Added Successfully.\n";
}

void displayItems(){
    if(count == 0)
    {
        cout << "\nNo Items Available.\n";
        return;
    }

    cout << "\n=====================================================================\n";
    cout << "ID\tName\t\tQuantity\tPrice\n";
    cout << "=====================================================================\n";

    for(int i = 0; i < count; i++)
    {
        cout << inventory[i].id << "\t"<< inventory[i].name << "\t\t"<< inventory[i].quantity << "\t\t"<< inventory[i].price << endl;
    }
}

void searchItem(){
    int id;
    bool found = false;

    cout << "\nEnter Item ID : ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(inventory[i].id == id)
        {
            cout << "\nItem Found\n";
            cout << "ID       : " << inventory[i].id << endl;
            cout << "Name     : " << inventory[i].name << endl;
            cout << "Quantity : " << inventory[i].quantity << endl;
            cout << "Price    : " << inventory[i].price << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nItem Not Found.\n";
    }
}

void updateQuantity(){
    int id;
    bool found = false;

    cout << "\nEnter Item ID : ";
    cin >> id;

    for(int i = 0; i < count; i++)
    {
        if(inventory[i].id == id)
        {
            found = true;

            cout << "Current Quantity : " << inventory[i].quantity << endl;
            cout << "Enter New Quantity : ";
            cin >> inventory[i].quantity;

            cout << "\nQuantity Updated Successfully.\n";
            break;
        }
    }

    if(!found)
    {
        cout << "\nItem Not Found.\n";
    }
}