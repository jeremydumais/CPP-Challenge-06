#include <iostream>
#include <conio.h>
#include "include/abundant.h"

using namespace std;

int GetInputNumber(string const &msg);

int main(int argc, char const *argv[])
{
    unsigned int number {0};
    cout << "Abundant numbers and their abundance up to a number" << endl;
    number = GetInputNumber("Enter the number : ");

    //Calculation
    unsigned int abundantNumberCount {0};
    for(unsigned int i=1; i<=number; i++)
    {
        vector<unsigned int> divisors = abundantHelper::getDivisors(i);
        unsigned int abundance = abundantHelper::getAbundance(divisors);
        if (abundance > i) 
        {
            if (abundantNumberCount > 0)
                cout << ", ";
            cout << "(" << i << " -> " << abundance << ")"; 
            abundantNumberCount++;
        }
    }
   
    cout << endl;
    cout << "Press any key to continue... " << endl;
    getch();
    return 0;
}

int GetInputNumber(string const &msg)
{
    int retVal {0};
    cout << msg;
    
    while(!(cin >> retVal))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout << "Invalid number. Please try again : ";
    }
    return retVal;
}
