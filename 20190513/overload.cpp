/*************************************************************************
	> File Name: overload.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 12 May 2019 09:50:39 PM PDT
 ************************************************************************/
//C++ overload principle
//name mangling
//the same name,according to the type of parameter ,number,order to change name of function name
#include<iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
int add (int x, int y, int z)
{
    return x + y + z;
}

double add(double x, double y)
{
    return x + y;
}

int main(void)
{
    int a = 3, b = 4, c = 5;
    printf("a + b = %d\n", add(a, b));
    printf("a + b + c = %d\n", add(a, b, c));
}
