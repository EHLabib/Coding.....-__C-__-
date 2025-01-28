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
    v.push_back(11);
    v.push_back(24);
    cout<<"  Before sorting : ";
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    //Sorting.....
    cout<<" After sorting v increasing order : ";
    sort(v.begin() , v.end());
    for(int i=0; i<v.size(); i++)   cout<<v[i]<<" ";
    cout<<endl;

    //Reversed......
    cout<<" After reversed : ";
    reverse(v.begin() , v.end());
    for(int i=0; i<v.size(); i++)   cout<<v[i]<<" ";
    cout<<endl;    


}