#include<iostream>
using namespace std;
int show(int x,int n)
{
    if(x>n)    return 1;
    else
    cout<<x<<" ";
    show(x+1,n);    
     cout<<x<<" ";
}
int main()
{
  int n;
  cout<<"Enter n : ";
  cin>>n;
  show(1,n);
  
}