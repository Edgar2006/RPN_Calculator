#pragma once
#include "Node.h"
template<class T>


class Stack
{
public:
	Stack();
	~Stack();
	void push_back(T& value);
	void getSize();
	void pop_back();
	T top();
	bool isEmpty();
private:
	Node<T>* m_start;
	Node<T>* m_end;
	int m_size;
};

