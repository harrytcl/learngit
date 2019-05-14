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

    Computer(const Computer &rhs)
    : _brand(new char[strlen(rhs._brand) + 1])
    , _price(rhs._price)
    {
        strcpy(_brand, rhs._brand);
        cout << "Computer(const Computer._brand)"<< endl;
    }
private:
    char * _brand;
    float _price;
};

int main(void)
{
    Computer pc1("zhanshen", 9999);
    cout << "pc1 = " << endl;
    pc1.print();
    
    Computer pc2 = pc1; //call copy structure function
    cout << "pc2 = " << endl;
    pc2.print();
    return 0;
}
