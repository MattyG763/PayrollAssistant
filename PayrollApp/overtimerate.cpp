#include "OvertimeRate.h"

//Constructor 
OvertimeRate::OvertimeRate() : rate(0) {}

void OvertimeRate::getRate()
{
    cout << "Please enter the rate: ";
    cin >> rate;
}

double OvertimeRate::calculateRate() const
{
    double calcRate = rate / 2;
    double answer = calcRate + rate;
    return answer;
}

void OvertimeRate::run()
{
    system("CLS");
    while(true)
    {
        cout << "Welcome to the Overtime Rate Calculator.\n\n";
        getRate();

        double overtime = calculateRate();
        cout << "Output: " << overtime << "\n\n";

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