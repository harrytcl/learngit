/*************************************************************************
	> File Name: reference.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 09 May 2019 01:27:21 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;

void test0()
{
    int number = 1;
    cout << "number = " << number << endl;
    
    int & ref = number; 
    ref = 10;
    cout << "&ref = "<< &ref << endl;
    cout << "&number = "<< &number << endl;
    cout << "number = " << number << endl;
    cout << "ref = " << ref << endl;
}
void swap2(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap1(int * px, int *py)
{
    int p;
    p = *px;
    *px = *py;
    *py = p;
}
void swap(int &x, int &y)
{
    int u = x;
    x = y;
    y = u;
}
int array[5] = {0, 1, 2, 3, 4};
int & index(int idx)
{
    return array[idx];
}

int & func1()
{
    int * p = new int (10);
    return *p;
}
int main(void)
{
    //test0();
    int a = 3, b = 4;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //swap1(&a, &b);
    swap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    int * p1 = NULL;
    const int & ref2 = 10;
    cout << index(2) << endl;

    int & ref = func1();
    cout << "ref = " << ref << endl;
    delete &ref;
 
    int c = a + func1() + b;
    cout << "c = " << c << endl;
    return 0;
}
