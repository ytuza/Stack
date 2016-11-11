#include "Stack.h"

using namespace std;

template <class T>
Stack<T>::Stack()
{
}

template <typename T>
void Stack<T>::push(const T& elem)
{
    data.push_back(elem);
}

template <typename T>
void Stack<T>::pop()
{
    if (data.empty()){
        return NULL;
    }
    data.pop_back();
}

template<typename T>
const T Stack<T>::top()
{
    if (data.empty())
    {
        return NULL;
    }

    return (data.back());
}

template<typename T>
bool Stack<T>::iempty()
{
    return (data.empty());
}
template<typename T>
Stack& Stack<T>::operator +(const Stack &p1,const Stack &p2){
    c = new Stack;
    int i = 0;
    for(i;i< p1.size ;i++)
        c.data.push(p1[i]);
    for(i=0;i< p2.size ;i++)
        c.data.push(p2[i]);
    return c;

}

