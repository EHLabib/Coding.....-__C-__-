#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of n = ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<(char)(i+64)<<" ";
        }

    cout<<endl;
    }
}