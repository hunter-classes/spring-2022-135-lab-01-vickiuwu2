/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1C

Given input year: 
Determines if the year is a leap year or a common year.
3rd Comment
*/

#include <iostream>
using namespace std;

int main()
    {
        int year;
        cout << "Enter year: ";
        cin >> year;

        if (year % 4 != 0)
        {
            cout << "Common year" << endl;
        }
        else if (year % 100 != 0)
        {
            cout << "Leap year" << endl;
        }
             else if (year % 400 != 0)
             {
                 cout <<  "Common year" << endl;
             }
                  else 
                  {
                      cout << "Leap year" << endl;
                  }

        return 0;
    }