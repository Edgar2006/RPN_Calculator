#include "Node.h"
#include "iostream"


template<class T>
Node<T>::Node(T& value)
{
	m_value = &value;
	m_next = nullptr;
}
