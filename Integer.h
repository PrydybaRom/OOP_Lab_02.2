#pragma once
#include <sstream> 
#include <string>
#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer(); 
    Integer(int val); 
    Integer(const Integer& other); 
    ~Integer();

    // SET AND GET
    void SetValue(int value);
    int GetValue() const { return value; }

    //OPERATORS
    Integer operator = (int value);

    operator string() const;
    

    Integer operator++();
    Integer operator-();

    friend Integer operator+(const Integer& a, const Integer& b);

    
    friend ostream& operator<<(ostream& os, const Integer& obj);
    friend istream& operator>>(istream& is, Integer& obj);
};


