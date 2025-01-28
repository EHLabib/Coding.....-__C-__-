//Iterator......
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
    vector<int> :: iterator it;
    // it = v.begin()+2;
    // cout<<*it;
    for(it=v.begin(); it != v.end(); it++)  cout<<*it<<" ";

}