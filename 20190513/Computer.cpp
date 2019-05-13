/*************************************************************************
	> File Name: Computer.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 May 2019 01:59:56 AM PDT
 ************************************************************************/
#include <string.h>
#include "Computer.h"
#include<iostream>
using std::cout;
using std::endl;

void Computer::setBrand(const char * brand)
{
    strcpy(_brand, brand);
}
void Computer::setPrice(float price)
{
    _price = price;
}

void Computer::print()
{
    cout << "Brand :" << _brand << endl
        << "Price :" << _price << endl;
}

int main(void)
{
    Computer pc1;
    pc1.setBrand("acer");
    pc1.setPrice(7000);
    pc1.print();
    
    pc1.setBrand("Xiaomi");
    pc1.setPrice(7777);
    pc1.print();
    //pc1._price = 100; in protected you can't change the variable  
    return 0;
}

