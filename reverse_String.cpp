#include<iostream>
#include<algorithm> // Include this to use reverse function
using namespace std;
int main()
{
    string str = "Ehsanul Haque Nazif";
    cout<<str<<endl;
    reverse(str.begin()+2,str.begin()+7);
    cout<<str<<endl;
    return 0; // It's a good practice to return a value from main
}
