/*************************************************************************
	> File Name: namespace1.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 08 May 2019 06:33:14 AM PDT
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
namespace sz
{
    int num = 10;
    void display()
    {
        cout << "wd::display()" << endl;
    }
namespace wd
{
    int num = 100;
    void display()
    {
        cout << "sz::wd::display()" << endl;
    }
}//end of namespace
}//end of namespace
int main(void)
{
    cout << "num = " << sz::num << endl;
    sz::display();
    sz::wd::display();
    return 0;
}
