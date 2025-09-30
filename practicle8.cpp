#include <iostream>
#include <string>
using namespace std;
void printin(string prompt, string &variable)
{
    cout << prompt;
    getline(cin, variable);
}

void printin(string prompt, double &variable)
{ 
    
again:
    cout << prompt;
    string t;
    getline(cin, t);
    try
    {
        variable = stod(t);
    }
    catch (invalid_argument &e)
    {
        cout << "Error : That was a invalid number ! Try again ." << endl;
        goto again;
    }
}

class BankAccount
{
    string name, code;
    double balence, withdrow, deposite, accno;

public:
    BankAccount();
    void change(string);
};

BankAccount::BankAccount()
{
    cout << "||~~~~~~~~~~~~~~ GIVE YOU BANK ACCOUNT DETAILS ~~~~~~~~~~~~~||\n\n";
    printin("Enter your name : ", name);
    printin("Enter your Account number : ", accno);
    printin("Enter the first deposite you want to do in your Account : ", balence);
    cout << "Your bank balence is updated to : " << balence<<endl;
}

void BankAccount ::change(string c)
{
    if (c == "D")
    {
        printin("Enter the amount you want to deposite : ", deposite);
        balence += deposite;
        cout << "Your bank balence is updated to : " << balence;
    }
    else
    {
        printin("Enter the amount you want withdrow : ", withdrow);
    cheak:
        if (balence < withdrow)
        {
            printin("Your bank balence is less than your entered amount !!\nPlease Enter amount again : ", withdrow);
            goto cheak;
        }
        else
        {
            balence -= withdrow;
            cout << "Your bank balence is updated to : " << balence;
        }
    }
}

int main()
{
    string c;
    BankAccount user;
    printin("Enter the D to deposite more ammount.\nEnter W to withdrow ammount.\nEnter E to exit.\nEnter :", c);
    recheak :
    if (c == "D" || c == "W" || c == "E")
    {
        if (c == "D" || c == "W")
        {
            user.change(c);
        }
    }
    else
    {
        printin("Error : That was a invalid number ! Try again .\nEnter : ",c);
        goto recheak;
    }
