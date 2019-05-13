/*************************************************************************
	> File Name: extern.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 12 May 2019 10:04:06 PM PDT
 ************************************************************************/

#include<stdio.h>
extern "C" // c++ compatible to c
{
int add(int x, int y)
{
    return x + y;
}
}
int add(int x, int y, int z)
{
    return x+ y + z;
}
int main(void)
{
    int a = 3, b = 4, c = 5;
    printf("a + b = %d\n", add(a, b));
    printf("a + b + c = %d\n", add(a + b + c));
}
