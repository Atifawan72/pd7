#include<iostream>
using namespace std;
int amplify(int);
main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<amplify(num);
}
int amplify(int n)
{
    int b = 0;
    int i;
    for( i = 1 ; i<=n ; i++)
    if(i % 4 == 0)
        {
            cout << i * 10 << ", ";
        }
        else
        {
            cout << i<< ", ";
            
        }
        
      
        
        
}