/*************************************************************************
	> File Name: Point.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 May 2019 05:34:41 AM PDT
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;

class Point
{
public:
#if 1
    Point()
    {
        _ix = 0;
        _iy = 0;
        cout << "Point()" << endl;   
    }
#endif

    Point (int ix, int iy)
    :_ix(ix)
    ,_iy(iy)
    {
        //_ix = ix;
        //_iy = iy;
        cout << "Point(int, int)" << endl;
    }
    void print()
    {
        cout << "(" << _ix
             << "," << _iy
             << ")" << endl;
    }
private:
    int _ix;
    int _iy;
};

int test0(void)
{
    int a = 3;
    int b = a;
    cout << "a = " << a << endl
         << "b = " << b << endl;
}
int main(void)
{
    Point pt;
    pt.print();
    
    Point  pt1(10, 20);
    pt1.print(); 
    return 0;
}
