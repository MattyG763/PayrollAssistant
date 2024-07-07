#ifndef OVERTIMERATE_H
#define OVERTIMERATE_H

#include <iostream>
using namespace std;

class OvertimeRate
{
private:
    double rate;

public:
    //Constructor
    OvertimeRate();

    //Method to get rate from the user
    void getRate();

    //Method to calculate the rate
    double calculateRate() const;

    //Methid to run the Overtime Rate
    void run();
};

#endif //OVERTIMERATE_H