/*************************************************************************
	> File Name: X.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 May 2019 06:12:41 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;

class X
{
public:
    X(int a)
    : _ix(a)
    , _iy(_ix)
    {

    }

    void print()
    {
        cout << "(" << _ix
             << "," << _iy
             << ")" << endl;
    }
    ~X()
    {
        cout << "~Point()" << endl;
    }
private:
    int _ix;
    int _iy;
};
int main(void)
{
    X x(10);
    x.print();
    return 0;
}
