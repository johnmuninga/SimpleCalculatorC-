// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;



static string nameFunction()
{
    string name;
    cout << "\nPlease Enter your name: ";
    getline(cin, name);
    return name;

}

static int options()
{
    int option;
    cout << "1. Display your name" << endl;
    cout << "2. Enter a List of names" << endl;
    cout << "3. Perfomr a simple calculation" << endl;
    cout << "4. Stop working" << endl;
    cout << "Choose one option: ";
    cin >> option;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return option;
}

int main()
{
    
    
    while (true) 
    {
        int choice = options();
        
        if (choice == 1) 
        {
            string name = nameFunction();
            cout << "You have selectedd option 1" << endl;
            cout << "\nWelcome " + name + "Hope you have a great Day!!!!\n" << endl;
        }
        else if (choice == 2) 
        {
            cout << "You chose option 2" << endl;
        }
        else if (choice == 3) 
        {
            cout << "You chose option 3" << endl;
        }
        else if (choice == 4) 
        {
            cout << "~Bye bye" << endl;
            break;
        }
        else 
        {
            cout << "The option you have choseen does not exist!!! Please re-enter the option" << endl;
        }
    }

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
 