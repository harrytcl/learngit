/*************************************************************************
	> File Name: static_cast.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 09 May 2019 08:56:44 PM PDT
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;

void test0()
{
    double dvalue= 11.11;
    int number = (int)dvalue;
    int number2 = int(dvalue);
    cout << "number = " << number << endl;
    cout << "number2 = " << number2 << endl;
}

void test1()
{
    double dvalue = 11.11;
    int number = static_cast<int>(dvalue);
    cout << "in test1 number = " << number << endl;
}
int main()
{
    test0();
    test1();
    return 0;
}

