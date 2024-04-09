#pragma once
#include <iostream>

template<class T>

class Node
{
public:
	Node(T& value);
public:
	T* m_value;
	Node<T>* m_next;

};

