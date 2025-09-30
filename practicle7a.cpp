#include<iostream>
#include<string>
using namespace std;
void printin(string prompt, char variable[])
{
    cout << prompt;
    // cin>>variable;
    cin.getline(variable , 50);
}
void printin(string prompt, double &variable)
{
    cout << prompt;
    cin>>variable;
}
class employee{
    char name[50];
    double id , salory;
    public:
    void input();
    void output();
};
void employee :: input(){
    printin("Enter the Name of Employee : ",name);
    printin("Enter the ID of Employee : ",id);
    printin("Enter the Salory of Employee : ",salory);
}
void employee :: output(){
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"Salory : "<<salory<<endl;
}
int main()
{
 double n;
 printin("Enter the number of employee : ",n);
 employee e[100];
 for(int i = 0; i < n; i ++)
 {
    e[i].input();
 }
 for(int i = 0; i < n; i ++)
 {
    e[i].output();
 }
return 0;
}