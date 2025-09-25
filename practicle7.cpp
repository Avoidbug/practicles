#include <iostream>
#include <string>
using namespace std;
void printin(string prompt, string &variable)
{
    cout << prompt;
    getline(cin, variable);
}

void printin(string prompt, int &variable)
{       again :
        cout << prompt;
        string t;
        getline(cin, t);
        try
        {
            variable = stoi(t);
        }
        catch (invalid_argument &e)
        {
            cout << "Error : That was a invalid number ! Try again ." << endl;
            goto again;
        }
}

template <typename T>
void printout(const string &prompt, const T &variable)
{
    cout << prompt << variable <<endl;
}

class About
{
public:
    string name, dep, sec;
    int roll, std;
    void getdetails();
    void printdetails();
};

void About ::getdetails()
{
    printin("Enter your name :", name);
    printin("Enter your roll number :", roll);
    printin("Enter your class :", std);
    printin("Enter your section :", sec);
    printin("Enter your Deparment : ", dep);
}

void About ::printdetails()
{
    printout("Name : ", name);
    printout("Roll NO. : ", roll);
    printout("Class : ", std);
    printout("Section : ", sec);
    printout("Deparment : ", dep);
}
int main()
{
    About student;
    student.getdetails();
    cout<<"\nHere are the details of the student. \n\n";
    student.printdetails();
    return 0;
}