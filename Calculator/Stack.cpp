#include "Stack.h"
#include "Node.h"
#include "Node.cpp"

#include "iostream"


template<class T>

Stack<T>::Stack()
{
	m_start = nullptr;
	m_end = nullptr;
	m_size = 0;
}

template<class T>
Stack<T>::~Stack()
{
	Node<T>* item = m_start;
	Node<T>* temp = nullptr;
	while (item != nullptr)
	{
		temp = item->m_next;
		delete item;
		item = temp;
	}
	std::cout<<"rm" << std::endl;
}

template<class T>
void Stack<T>::push_back(T& value)
{
	Node<T>* newElement = new Node<T>(value);
	if (m_start == nullptr)
	{
		m_start = newElement;
		m_end = newElement;
	}
	else
	{
		m_end->m_next = newElement;
		m_end = newElement;
	}
	m_size++;
}




template<class T>
void Stack<T>::getSize()
{
	std::cout << m_size << std::endl;
}

template<class T>
void Stack<T>::pop_back()
{
	Node* item = m_start;
	if (item != nullptr) 
	{
		while (item->m_next != nullptr)
		{
			if (item->m_next->m_next == nullptr)
			{
				delete item->m_next;
				item->m_next = nullptr;
				m_size--;
				break;
			}
			item = item->m_next;
		}
	}
}

template<class T>
T Stack<T>::top()
{
	return m_end->m_value;
}	


template<class T>
bool Stack<T>::isEmpty()
{
	if (m_start == nullptr) 
	{
		return 1;
	}
	else {
		return 0;
	}
}

