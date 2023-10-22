#include<iostream>
using namespace std;
bool primeNum(int);
main()
{   
    int num;
    cout<<"Enter the number: ";
    cin>>num;
   cout<<primeNum(num);
}
bool primeNum(int n)
{
  
    for(int i = 2 ; i< n ; i++)
       { if(n % i == 0)
        {
            return false;
        }
}
return true;
    
}
