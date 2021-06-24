#pragma once
#include"Stack.h"
template<typename Stack_entry>
class Extend_Stack : public Stack<Stack_entry>
{
public:
	void clear();
	bool full()const;
	int size()const;
};