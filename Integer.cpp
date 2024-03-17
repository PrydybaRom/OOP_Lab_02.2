#include "Integer.h"
#include <sstream> 
#include <string>


Integer::Integer()
{
    value = 0;
};
Integer::Integer(int val)
{
    value = val;
}

Integer::Integer(const Integer& other)
{
    value = other.value;
}

Integer::~Integer() {}


// SET
void Integer::SetValue(int val)
{
    value = val;
}

// OPERATORS = ++ - + << >> string
Integer Integer::operator=(int val) {
    value = val;
    return *this;
}

Integer Integer::operator++() {
    ++value;
    return *this;
}

Integer Integer::operator-() {
    return Integer(-value);
}

Integer operator+(const Integer& a, const Integer& b) {
    return Integer(a.value + b.value);
}

ostream& operator<<(ostream& os, const Integer& obj) {
    os << obj.value;
    return os;
}

istream& operator>>(istream& is, Integer& obj) {
    is >> obj.value;
    return is;
}

Integer::operator string () const
{
    stringstream typestring;
    typestring << "String Value: " << value << endl;
    return typestring.str();
}