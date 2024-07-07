#include "TimeConverter.h"

//Constructor 
TimeConverter::TimeConverter() : hours(0), minutes(0){}

void TimeConverter::getHours()
{
    cout << "Please enter the hours: ";
    cin >> hours;
}

void TimeConverter::getMinutes()
{
    cout << "Please enter the minutes: ";
    cin >> minutes;
}

double TimeConverter::conversion() const
{
    return hours + (minutes / 60);
}

void TimeConverter::run()
{
    system("CLS");
    while(true)
    {
        cout << "Welcome to the Time Converter.\n\n";
        getHours();
        getMinutes();

        double convertedHours = conversion();

        cout << "Output: " << convertedHours << "\n\n";

        cout << "Would you like to do another conversion? (y/n): ";
        char choice;
        cin >> choice;
        choice = tolower(choice);
        if(choice == 'n')
        {
            system("CLS");
            break;
        }
        system("CLS");
    }
}
