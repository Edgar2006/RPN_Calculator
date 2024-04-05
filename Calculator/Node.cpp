#include "Node.h"
#include "iostream"


template<class T>
Node<T>::Node(T& value)
{
	this->m_value = &value;
	this->m_next = nullptr;
}
