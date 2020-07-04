#pragma once
#include <list>

template<typename T1, typename T2>
class List
{
public:
	List();
	~List();

	void add(T2& action);
	void del(T2& action);
	void replacement(T2& search);
	void mergeAdd();
	void mergeDel();
	void printLeft();
	void printRight();

private:
	T1 element;
	std::list<T1> list;
};

