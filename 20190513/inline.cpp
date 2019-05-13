/*************************************************************************
	> File Name: inline.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 12 May 2019 10:34:07 PM PDT
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
#define Max(x, y) ((x)>(y)?(x):(y))
#define Multiply(x, y) (x)*(y) 
int test0(void)
{
    int a = 3, b = 4;
    cout << Max(a, b) << endl
         <<Multiply(a, b) << endl; 
    return 0;
}
inline int max(int x, int y)
{
    return x > y ? x : y;
}
int multiply(int x, int y)
{
    return  x * y;  
}
int main(void)
{
    cout << max(3+ 5, 4) << endl;
}
