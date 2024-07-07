#include "TimeConverter.h"
#include "OvertimeRate.h"

//To Display the menu
void displayMenu()
{
    cout << "Welcome to your personal Payroll Assistant\n\n";
    
    cout << "1. Time Converter\n";
    cout << "2. Overtime Calculator\n";
    cout << "3. Exit\n";
    cout << "Please choose what you would like to do: ";

}

int main()
{
    while(true){
        

        displayMenu();
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:{
            TimeConverter converter;
            converter.run();
            break;
        }
        case 2:{
            OvertimeRate rate;
            rate.run();
            break;
        }
        case 3:{
            cout << "EXITING THE PROGRAM. Goodbye!";
            return 0;
        }
        
        default:{
            // Clear the console for a clean experience
            system("CLS");
            cout << "Please chose from one of the displayed options.\n";
            break;
        }
        }
    }
    
    return 0;
}