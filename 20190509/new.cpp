/*************************************************************************
	> File Name: new.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 09 May 2019 12:37:42 AM PDT
 ************************************************************************/

#include<iostream>
#include <stdlib.h>
using std::cout;
using std::endl;
void test0()
{
    int *p1 = (int *)malloc(sizeof(int));
    *p1 = 10;
    cout << "*p1 = " << *p1 << endl;

    int *p2 = (int *)malloc(sizeof(int) * 10);
    for (size_t idx = 0; idx != 10; ++idx)
        p2[idx] = idx;
    free(p1);
}
void test1()
{
    int * p1 = new int(10);
    cout << "new -> *p1 = " << *p1 << endl;
    delete p1;

    int &p2 = new int[10]();
    
}
int main(void)
{
    
}
