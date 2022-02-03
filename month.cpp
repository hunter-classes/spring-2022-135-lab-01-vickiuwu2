/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1D

Given two variables
Takes in a year
Takes in a month
Using knuckle method, it determines how many days there are in a month
Taken into consideration of leap years
1 more comment
*/


#include <iostream>

int main()
    {
        int year, month;
        std::cout << "Enter year: " ;
        std::cin >> year;
        std::cout << "Enter month: " ;
        std::cin >> month;
        
        if ((month % 2 == 1) && (month < 8))
            {
                std::cout << "31 days" << endl;
            }
        else if ((month % 2 == 0) && (month != 8) && (month != 2) && (month <= 8)) 
        {
            std::cout << "30 days" << endl;
        }
            else if ((month % 2 == 0) && (month != 8) && (month != 2) && (month > 8))
                {
                    std::cout << "31 days" << endl;
                }
                else if ((month % 2 == 1)  && (month > 8))
                    {
                        std::cout << "30 days" << endl;
                    }
                    else if ((month == 1) || (month == 8))
                        {
                            std::cout << "31 days" << endl;
                        }

        if ((month == 2) && (year % 4 == 0) && (year % 400 == 0))
            {
                std::out << "29 days" << endl;
            }
        else if ((month == 2) && (year % 4 != 0) && (year % 100 != 0))
            {
                std::cout << "28 days" << endl;
            }
            else if ((month == 2) && (year % 4 == 0) && (year % 100 == 0) && (year % 400 != 0))
            {
                std::cout << "28 days" << endl;
            }
            else if ((month == 2) && (year % 4 == 0) && (year % 100 != 0))
            {
                std::cout << "29 days" << endl;
            }
        return 0;
    }