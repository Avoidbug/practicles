#include<iostream>
using namespace std;
class Area {
    public :
    int r;
    void input();
    int output();
};
void Area :: input(){
    cout<<"Enter the radius of the circle : ";
    cin>>r;
}

int Area :: output(){
    cout << "Area of the circle is : "<<3.14*r*r;
}
int main()
{
Area circle;
circle.input();
circle.output();
return 0;
}