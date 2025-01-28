#include<iostream>
using namespace std;                        //Pascal Triangle..
int fact(int x)
{
    int ft=1;
    for(int i=1; i<=x; i++)     
    {
        ft=ft*i;
    }
    return ft;
}
int ncr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}