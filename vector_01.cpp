#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
//Create a Vector...
    vector<int> a;
    a.push_back(31);
    a.push_back(4);
    a.push_back(2);
    a.push_back(22);
    a.push_back(33);

    //Print Vector...
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl<<a.size()<<" ";
    cout<<a.capacity()<<endl;

    //Erase a element...
    a.erase(a.begin()+1);
    cout<<endl<<a.size()<<" ";
    cout<<a.capacity()<<endl;
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";

    //Insert a value......
    a.insert(a.begin()+2, 40);
    cout<<endl;
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;

    //First element..
    cout<<"First element = " <<a[0]<<endl;
    cout<<"First element = " <<a.front()<<endl;
    //Last element....
    cout<<"Last element = " <<a[a.size()-1]<<endl;
    cout<<"Last element = " <<a.back()<<endl;

     //Find position .....
     cout<<endl<<"Find position : ";
     cout<<find(a.begin() , a.end() , 22) - a.begin()<<endl;
    //Sorting....
    sort(a.begin(),a.end());
    cout<<"\n Sort increasing order : ";
    for(auto i : a)
        cout<<i<<" ";

    //Binary  search ..
            cout<<endl;
    cout<<"Binary search : "<<binary_search(a.begin() , a.end() , 22);


    //Sorting Decreasing order....
    cout<<"\n Sort decreasing order  : ";
    sort(a.begin() , a.end() , greater<int>());
    for(auto i : a)
        cout<<i<<" ";
    //Sorting reversed order....
    cout<<"\n Sort revesed order  : ";
    sort(a.rbegin() , a.rend() );
    for(auto i : a)
        cout<<i<<" ";

    //Clear the Vector..
       cout<<endl;
    a.clear();
    cout<<a.size()<<"  ";
    cout<<a.capacity()<<endl;

    return 0;
}