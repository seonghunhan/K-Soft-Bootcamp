#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"

// ������
template<typename T>
Stack<T>::Stack(int capacity)
    : capacity(capacity), size(0)
{
    ptr = new T[capacity];
}
// �Ҹ���
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
// push �Լ�
template<typename T>
void Stack<T>::push(const T& element)
{
    if (size < capacity)
    {
        ptr[size] = element;
        size++;
    }
    else
    {
        cout << "������ �� ���� ������ �� �����ϴ�." << endl;
        assert(false);
    }
}
// pop �Լ�
template<typename T>
T Stack<T>::pop()
{
    if (size > 0)
    {
        T temp = ptr[size - 1];
        //ptr[size - 1] = 0; 
        size--;
        return temp;
    }
    else
    {
        cout << "������ �� ������ �� �����ϴ�." << endl;
        assert(false);
    }
}
template<typename T>
T Stack<T>::peek()
{
    if (size > 0)       
        return ptr[size - 1];
}
template<typename T>
void Stack<T>::printStack()
{
    cout << "\n STACK [ ";
    for (int i = 0; i < size; i++)
        cout << ptr[i] << " ";
        //cout << stack[i] << " ";
    cout << "] ";
}
#endif