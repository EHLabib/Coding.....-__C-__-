#include<iostream>
using namespace std ;
class complex 
{
    int real,img;
    public :
    complex() { };
    complex(int real , int img)
    {
        this -> real = real;
        this -> img = img;
    };
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    complex operator + (complex &C)
    {
        complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }
};
int main()
{
    complex C1(9,4);
    complex C2(4,5);
    complex C3 = C1+C2;
    C3.display();
};