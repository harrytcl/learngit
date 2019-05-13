/*************************************************************************
	> File Name: Computer.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 May 2019 01:59:56 AM PDT
 ************************************************************************/
#ifndef __COMPUTER_H__
#define __COMPUTER_H__
#include <string.h>
#include<iostream>
using std::cout;
using std::endl;

class Computer
{
public:
    void setBrand(const char * brand);
    void setPrice(float price);
    void print();
private:
    char  _brand[20];
    float _price;
};
#endif
