#include<iostream>
using namespace std;
int main()
{
    int i , j , row;
    cout<<"Enter the desired number of rows: ";
    cin>>row;
    for(i = 1 ; i<=row ; i++){
        for(j = row ; j>=i ; j-- )
        {
            cout<<"*";
        }
           cout<<endl;
    }
        cout<<endl;
}
