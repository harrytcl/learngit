/*************************************************************************
	> File Name: string.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 12 May 2019 11:03:54 PM PDT
 ************************************************************************/

#include <string.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void test0()
{
    char str1[] = "hello";
    char str2[] = ",world";
    strcat(str1, str2);
    printf("%s\n", str1);
}
void test1()
{
    string s1 = "hello"; //convert C string style to C++ string style
    string s2 = ",world";
    string s3 = s1 + s2;
    cout << "s3 = "<< s3 << endl;
    
    char str1[100];
    strcpy(str1, s1.c_str()); // conver C++ string style to C string tyle
    cout << "str1 = " << str1 << endl;
    cout << "s1.size() = " << s1.size() << endl; 
    cout << "s1.length() = " << s1.length() << endl;

    string s4 = s1.append(3, 'A');
    cout << "s4 = " << s4 << endl;

    string s5 = s1.append("BBB");
    cout << "s5 = " << s5 << endl;
}
int main(void)
{
    test0();
    test1();
}
