#pragma once
#include <iostream>

#include "Node.h"

#include "Node.cpp"


template<class T>


class LinkedStack
{
public:
	LinkedStack();
	~LinkedStack();
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

