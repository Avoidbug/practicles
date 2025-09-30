#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter the number of elements you want to store in the array : ";
cin>>n;
int arr[n];
cout<<"\nEnter the elements : ";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<"Elements Entered by you are : ";
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
    sum +=arr[i];
}
cout<<"\nSum of the all elements of the array is : "<<sum;
return 0;
}