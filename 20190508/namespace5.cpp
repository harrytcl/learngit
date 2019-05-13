/*************************************************************************
	> File Name: namespace5.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 08 May 2019 07:13:54 AM PDT
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using std::cout;
using std::endl;

int number = 10;
namespace sz
{
    int number = 100;
    void display(int number)
    {
        cout << "number = " << number << endl;
        cout << "sz::number = " << sz::number << endl;
        cout << "number = " << ::number << endl;
    }
}//end of namespace sz
int main(void)
{
    sz::display(1);
}

