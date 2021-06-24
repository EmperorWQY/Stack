#pragma once

enum Error_code { success, fail, range_error, underflow, overflow, fatal, not_present, duplicate_error, entry_inserted, entry_found, internet_error };

const int MAXSTACK = 10;

template<typename Stack_entry>
class Stack
{
public:
	Stack();
	bool empty()const;
	Error_code pop();
	Error_code top(Stack_entry& item)const;
	Error_code push(const Stack_entry& item);
	int count;
	Stack_entry entry[MAXSTACK];
};
