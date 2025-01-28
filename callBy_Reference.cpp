#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int x=9,y=3;
    cout<<" 1st x = "<<x<<endl<<" 1st y = "<<y<<endl;
    swap(&x,&y);
    cout<<" 2nd x = "<<x<<endl<<" 2nd y = "<<y<<endl;
}