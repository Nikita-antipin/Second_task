#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstddef> // size_t
#include <cstring> 
#include <algorithm> 
#include "String.h"

    String::String(const char* str = "") {
        int i = 0;
        while (str[i] != '\0')
            i++;
        this->size = i;
        this->str = new char[size + 1];
        for (int i = 0; i < size + 1; i++)
            this->str[i] = str[i];


    }
    String::String(const String& other)
    {
        if (size != other.size) {
            size = other.size;
            str = new char[size + 1];
        }
        strcpy(str, other.str);
    }

    String& String::operator=(const String& other)
    {
        if (size != other.size)
        {
            size = other.size;
            delete[] str;
            str = new char[size + 1];
        }
        strcpy(str, other.str);
        return *this;
    }

    String::String(size_t n, char c) {
        size = n;
        str = new char[n + 1];
        for (int i = 0; i < size; i++)
            this->str[i] = c;
        str[this->size] = '\0';



    }
    String::~String() {
        delete[] this->str;
    }
    void String::append(String& other) {
        char* newstr = new char[other.size + this->size + 1];
        int newsize = other.size + this->size;
        for (int i = 0; i < newsize; i++) {
            if (i < this->size)
                newstr[i] = this->str[i];
            else
                newstr[i] = other.str[i - this->size];
        }
        newstr[newsize] = '\0';
        this->size = newsize;
        delete[] this->str;
        this->str = newstr;

    }
 

