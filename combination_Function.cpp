#include<iostream>
using namespace std;
int fact(int x)
{ 
    int ft=1;
    for(int i=1; i<=x; i++)
    {
        ft=ft*i;
    }
    return ft;
}
int main()                 //combination nCr..
{
   int n,r;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"Enter r : ";
   cin>>r;                          //  nCr = n! / (n-r)! * r! ;
   int a = fact(n);
   int b = fact(r);
   int c = fact(n-r);
   cout<<endl<<"Combination = "<<a/(b*c)<<endl<<endl;
}