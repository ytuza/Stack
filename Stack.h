#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>

using namespace std;
template <typename T>
class Stack{

    private:
        vector<T> data;

    public:
        Stack();
        void push(const T&elem);
        void pop();
        const T top();
        bool iempty();
        Stack& operator+(const Stack &p1,const Stack &p2);
};

#endif // STACK_H
