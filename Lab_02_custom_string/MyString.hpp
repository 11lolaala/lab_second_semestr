#pragma once

class MyString {
public:
    MyString();
    MyString(const char c, size_t size);
    MyString(const char* string);
    MyString(const MyString& other);

    ~MyString();
    
    MyString& operator=(const MyString& other);
    MyString operator+(const MyString& other);

    void change_symbol(size_t index, char c);
    void print() const;
    
private:
    size_t size_;
    char* string_;
    static int count_object;
};