#include "bits/stdc++.h"
using namespace std;

string initialisation()
{
    cout << endl << endl << endl;
    cout << "\t\t Welcome to Credit Card Validation System!!! \t\t" << endl;
    cout << "\t\t ----------------------------------------------------- \t\t" << endl;
    cout << "\t\t ----------------------------------------------------- \t\t" << endl;
    cout << "\t\t ----------------------------------------------------- \t\t" << endl;
    cout << endl << endl << endl;

    cout << "\t\t Enter your Credit Card Number: ";
    string CardNumber = ""; cin >> CardNumber;

    return CardNumber;
}

void final_exit_message()
{
    cout << "\t\t Thank you for using the Credit Card Validator Program! \t\t" << endl;    
    cout << "\t\t ----------------------------------------------------- \t\t" << endl;
    cout << "\t\t ----------------------------------------------------- \t\t" << endl;
    cout << "\t\t ----------------------------------------------------- \t\t" << endl;
    cout << endl << endl << endl;
}

bool Luhn_Algo(string number)
{
    int n = number.length();

    int sum_of_odd_digits = 0, sum_of_even_digits = 0;

    for (int i = n - 1; i >= 0; i -= 2)
    {
        sum_of_odd_digits += (int)number[i] - 48;
    } 

    for (int i = n - 2; i >= 0; i -= 2)
    {
        int temp = (int)number[i] - 48;
        temp *= 2;

        sum_of_even_digits += temp/10 + temp%10;
    }

    if ((sum_of_even_digits + sum_of_odd_digits) % 10 == 0)   return true;
    else    return false;
}

void authenticate(string cardNumber)
{
    if (cardNumber.length() >= 13 && cardNumber.length() <= 16)
    {
        if (cardNumber[0] == '4')
        {
            if (Luhn_Algo(cardNumber))
            {
                cout << "\t\t Visa Card \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }else{
                cout << "\t\t Not a Valid Credit Card!!! \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }
        }
        else if (cardNumber[0] == '5')
        {
            if (Luhn_Algo(cardNumber))
            {
                cout << "\t\t MasterCard \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }else{
                cout << "\t\t Not a Valid Credit Card!!! \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }
        }
        else if (cardNumber[0] == '3' & cardNumber[1] == '7')
        {
            if (Luhn_Algo(cardNumber))
            {
                cout << "\t\t American Express Card \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }else{
                cout << "\t\t Not a Valid Credit Card!!! \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }
        }
        else if (cardNumber[0] == '6')
        {
            if (Luhn_Algo(cardNumber))
            {
                cout << "\t\t Discover Card \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }else{
                cout << "\t\t Not a Valid Credit Card!!! \t\t" << endl;
                cout << "\t\t ----------------------------------------------------- \t\t" << endl;
                cout << endl << endl << endl;
                return;
            }
        }
        
    }
    else{
        cout << "\t\t Not a Valid Credit Card!!! \t\t" << endl;
        cout << "\t\t ----------------------------------------------------- \t\t" << endl;
        cout << endl << endl << endl;
        return;
    }
}

int main()
{

    string creditCardNumber = initialisation();

    authenticate(creditCardNumber);

    final_exit_message();
    return 0;
}