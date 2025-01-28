#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(28);
    v.push_back(2);
    v.push_back(8);
    v.push_back(18);
    v.push_back(22);
    cout<<" Vector v before swap : ";
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    vector<int>v1;
    v1.push_back(34);
    v1.push_back(23);
    v1.push_back(5);
    v1.push_back(9);
    v1.push_back(12);
    cout<<" Vector v1 before swap : ";
    for(int i=0; i<v1.size(); i++)  
    {
        cout<<v1[i]<<" ";
    }    cout<<endl;

    //Swaping......
    swap(v , v1);
    cout<<" Vector v after swap : ";
    for(int i=0; i<v.size(); i++)   cout<<v[i]<<" ";
    cout<<endl;
    cout<<" Vector v1 after swap : ";
    for(int i=0; i<v1.size(); i++) cout<<v1[i]<<" ";
    cout<<endl;

    //Inserting a value.....
    v.insert(v.begin()+2 , 4);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    v.insert(v.begin()+4 , 3 , 6); //(v.begin()+v[i] , repeat , value )
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;  
}