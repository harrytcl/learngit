/*************************************************************************
	> File Name: overload.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 May 2019 11:46:35 PM PDT
 ************************************************************************/

#include<stdio.h>

int add1(int x, int y)
{
    return x + y;
}
int add2(int x, int y, int z)
{
    return x + y + z;
}
int main(void)
{
    int a =3, b = 4, c =5;
    printf("a + b = %d\n" ,add1(a, b));
    printf("a + b + c = %d\n" ,add2(a, b, c));
    return 0;
}

