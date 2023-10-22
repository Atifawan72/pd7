#include<iostream>
using namespace std;
int count(int);
 main()
{     
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    count(num);
}
int count(int n)
{
    int i = 0, sum;
    sum = 0; 
    for(i = n ; i>0 ; i--)
    {
        sum = sum + i;

    }
    cout<<sum;
}
