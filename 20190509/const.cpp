/*************************************************************************
	> File Name: const.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 08 May 2019 07:13:23 PM PDT
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
#define MAX 100

void test0()
{
cout << "MAX = " <<MAX << endl;
}
void test1(void)
{
    const int number = 100;
    cout << "number = " << number << endl;
    //const int number2;
}
void test2()
{
    int number = 100;
    int number2 = 1000;
    int * p1 = &number;
    *p1 = 200;
    p1 = &number2;
    cout << "*p1 = " << *p1 << endl;
    cout << "&number2 = " << &number2 << endl;
    cout << "p1 = " << p1 << endl; 
    
    const int *p2 = &number2;
    //*p2 = 1000;
    p2 = &number2;

    int const *p3 = &number;
    //*p3 = 1000;
    p3 = &number2;

    int * const p4 = &number;
    *p4 = 1000;
    //p4 = &number2;
    const int * const p5 = &number;
}
int main(void)
{
    test0();
    test1();
    test2();
}
