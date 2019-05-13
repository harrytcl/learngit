/*************************************************************************
	> File Name: namespace1.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 08 May 2019 06:33:14 AM PDT
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
namespace wd
{
    int num = 10;
    void display()
    {
        cout << "wd::display()" << endl;
    }
}
int main(void)
{
    cout << "num = " << wd::num << endl;
    wd::display();
    return 0;
}
