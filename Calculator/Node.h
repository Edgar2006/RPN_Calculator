#ifndef THIS_HEADER_H // Use a unique identifier for every file.
#define THIS_HEADER_H
template<class T>

class Node
{
public:
	Node(T& value);
public:
	T* m_value;
	Node<T>* m_next;

};

#endif
