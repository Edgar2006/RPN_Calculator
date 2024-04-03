#pragma once
#include <iostream>
class Operator
{
public:
	Operator(const char & m_operator, const int & m_priority);

public:
	char m_operator;
	int m_priority;
};

