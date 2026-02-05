#include "MyString.hpp"
#include <iostream>

int MyString::count_object = 0;

MyString::MyString() : size_(0), string_(nullptr) {
    count_object++;
    std::cout << "Создано. Всего = " << count_object << std::endl;
}

MyString::MyString(const char c, size_t size) : size_(size), string_(new char[size_]) {
    std::fill(string_, string_ + size_, c);
    count_object++;
    std::cout << "Создано. Всего = " << count_object << std::endl;
}

MyString::MyString(const char* string) : size_(strlen(string)), string_(new char[size_]) {
    std::copy(string, string + size_, string_);
    count_object++;
    std::cout << "Создано. Всего = " << count_object << std::endl;
}

MyString::~MyString() {
    if (string_ != nullptr) {
        delete[] string_;
        count_object--;
        std::cout << "Удален. Всего = " << count_object << std::endl;
    }
}

MyString::MyString(const MyString& other) : size_(other.size_), string_(new char[size_]) {
    std::copy(other.string_, other.string_ + size_, string_);
    count_object++;
    std::cout << "Создано копией. Всего = " << count_object << std::endl;
}

MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        MyString tmp(other);
        std::swap(tmp.size_, size_);
        std::swap(tmp.string_, string_);
    }
    return *this;
}

MyString MyString::operator+(const MyString& other) {
    MyString result;
    result.size_ = size_ + 1 + other.size_;
    result.string_ = new char[result.size_];
    
    if (size_ > 0) {
        std::copy(string_, string_ + size_, result.string_);
        result.string_[size_] = ' ';
    }
    
    if (other.size_ > 0) {
        std::copy(other.string_, other.string_ + other.size_, result.string_ + size_ + 1);
    }
    
    return result;
}

void MyString::change_symbol(size_t index, char c) {
    if (index < size_) {
        string_[index] = c;
    }
}

void MyString::print() const {
    for (size_t i = 0; i < size_; ++i) {
        std::cout << string_[i];
    }
    std::cout << std::endl;
}