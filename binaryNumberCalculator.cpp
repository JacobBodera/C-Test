/*
 * Name: Jacob Bodera
 * File Name: binaryNumberCalculator.cpp
 * Description: Allows the user to enter a number and outputs whether the number is prime or not
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "PRIME NUMBER CALCULATOR.\nTHE OUTPUT WILL TELL YOU WHETHER AN ENTERED INTEGER IS PRIME.\nENTER \"-1\" TO EXIT.\n\n";
    
    int number = 0;
    do 
    {
    cout << "Please enter a number:  ";
    cin >> number;

    int count = 0;
    if (number < 0)
    {
        cout << "\nThis is not a valid number. Please enter a positive integer.";
    }
    else if (number == 0 || number == 1)
    {
        cout << "\n" << number << " is prime.\n";
    }
    else
    {
        for (int i = 1; i <= number/2; i++)
        {
            if ((number % i) == 0)
                count++;
        }
        if (count > 1)
        {
            cout << "\n" << number << " is not prime.\n";
        }
        else
        {
            cout << "\n" << number << " is prime.\n";
        }
    }
    } while (number != -1);

    cout << "\n\nTHANK YOU!";
    return 0;
}