/*************************************************************************
	> File Name: Computer3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 May 2019 06:35:57 AM PDT
 ************************************************************************/
#include <string.h>
#include<iostream>
using namespace std;


class Computer
{
public:
    Computer(const char * brand, float price)
    : _brand(new char[strlen(brand) + 1]())
    , _price(price)
    {  
        strcpy(_brand, brand);
        cout << "Computer(const char * float)" << endl;
    }

    ~Computer()
    {
        delete [] _brand;
        cout << "~Computer" << endl;
    }

    void print()
    {
        cout << "Brand : " << _brand << endl
             << "Price : " << _price << endl;
    }
private:
    char * _brand;
    float _price;
};

int test(void)
{
    Computer c1("xiaomi", 7777);
    c1.print();
}
int main(void)
{
    Computer * p1 = new Computer("zhanshen", 9999);
    p1->print();

    delete p1;
    return 0;
}
