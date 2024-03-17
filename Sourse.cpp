#include "integer.h"
#include <iostream>


int main() {

    Integer a; 
    Integer b(10); 
    Integer c = b; 

    ++a; 
    Integer d = -b; 
    Integer e = a + c; 
    Integer f = 25;
    

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

  
    cout << "Enter new value a: ";
    cin >> a;
    cout << "New value a: " << a << endl;
    
    string str = a;
    cout << str << endl;
    

    cout << "OFF #pragma pack(1): " << sizeof(Integer) << endl;

#pragma pack(1)
    cout << "ON #pragma pack(1): " << sizeof(Integer);

    return 0;
}