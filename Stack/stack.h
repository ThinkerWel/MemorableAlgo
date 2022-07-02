#ifndef GOLF_H
#define GOLF_H
#include <iostream>

typedef unsigned long Item;
//1 /3 / 4 Yes

class Stack {
    enum{MAX=10};
    Item* pitems;
    int size;
    int top;
public:
    Stack(int n = 5);
    Stack(const Stack& st);
    ~Stack();
    bool isempty()const;
    bool isfull()const;
    bool push(const Item& item);    
    bool pop(Item& item);
    Stack& operator=(const Stack& st);

};






















#endif
    