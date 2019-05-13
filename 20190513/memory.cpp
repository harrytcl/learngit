/*************************************************************************
	> File Name: memory.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 May 2019 12:33:57 AM PDT
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using std::cout;
using std::endl;
int a = 0;
char *p1;
int test(void)
{
    int b;
    char s[] = "123456";
    char *p2;
    const char * p3 = "123456";

    static int c = 0;
    char * p4 = new char[10]();
    char * p5 = new char[5]();

    printf("&a = %p\n", &a);
    printf("p1 = %p\n", p1);
    printf("&p1 = %p\n", &p1);
    printf("&b = %p\n", &b);
    printf("s = %p\n", s);
    printf("p2 = %p\n", p2);
    printf("&p2 = %p\n", &p2);
    printf("p3 = %p\n", p3);
    printf("&p3 = %p\n", &p3);

    printf("c = %p\n", &c);
    printf("p4 = %p\n", &p4);
    printf("p5 = %p\n", &p5);

    printf("&test = %p\n", &test);
}

const int number1 = 10;
void test1()
{
    const int number2 = 100;
    int number3  = 1000;
    printf("number1 = %p\n", &number1);
    printf("number2 = %p\n", &number2);
    printf("number3 = %p\n", &number3);
}
int main(void)
{
    test1();
    return 0;
}
