#include "MyString.hpp"
#include <iostream>

int main() {
    MyString a("Hello");
    MyString b("World");
    
    a.print();
    b.print();
    
    MyString c = a + b;
    c.print();
    
    return 0;
}