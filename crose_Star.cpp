#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of n = ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
           if((i%2 != 0) || (j%2 != 0))  cout<<"* ";
           else    cout<<"  ";
        }
    cout<<endl;
    }
} 