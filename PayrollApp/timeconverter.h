#ifndef TIMECONVERTER_H
#define TIMECONVERTER_H

#include <iostream>
using namespace std;

class TimeConverter
{
private:
    double hours;
    double minutes;

public:

    //Constructor
    TimeConverter();

    //Method to get hours from user
    void getHours();

    //Mothod to get minutes from user
    void getMinutes();

    //Method to perform the conversion
    double conversion() const;

    //Method to run the Time Conversion
    void run();


};

#endif //TIMECONVERTER_H