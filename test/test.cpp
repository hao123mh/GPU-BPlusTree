#include<iostream>
using namespace std;
void test(void *p)
{
    cout<<"p is pointer "<<p<<endl;
}
void test(int num)
{
    cout<<"num is int "<<num<<endl;
}
int main(void)
{

    int a=-5;


    int b= -a;





    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    return 0;
}

