//WAP to create menu-driven array operation system.

#include <iostream>
using namespace std;

int arr[100], n = 0;

void insertElements();
void displayArray();
void findMaximum();
void findMinimum();
void calculateSum();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n    ARRAY OPERATIONS SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Insert Elements";
        cout << "\n2. Display Array";
        cout << "\n3. Find Maximum";
        cout << "\n4. Find Minimum";
        cout << "\n5. Calculate Sum";
        cout << "\n6. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                insertElements();
                break;

            case 2:
                displayArray();
                break;

            case 3:
                findMaximum();
                break;

            case 4:
                findMinimum();
                break;

            case 5:
                calculateSum();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}

void insertElements(){
    cout << "\nEnter Number of Elements : ";
    cin >> n;

    cout << "\nEnter " << n << " Elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nElements Inserted Successfully.\n";
}

void displayArray(){
    if(n == 0)
    {
        cout << "\nArray is Empty.\n";
        return;
    }

    cout << "\nArray Elements : ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void findMaximum(){
    if(n == 0)
    {
        cout << "\nArray is Empty.\n";
        return;
    }

    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "\nMaximum Element = " << max << endl;
}

void findMinimum(){
    if(n == 0)
    {
        cout << "\nArray is Empty.\n";
        return;
    }

    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "\nMinimum Element = " << min << endl;
}

void calculateSum(){
    if(n == 0)
    {
        cout << "\nArray is Empty.\n";
        return;
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "\nSum of Elements = " << sum << endl;
}