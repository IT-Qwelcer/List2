#include "list.h"
#include <iostream>

template<typename T1, typename T2>
inline List<T1, T2>::List()
{
	element = "";
}

template<typename T1, typename T2>
List<T1, T2>::~List()
{
}

template<typename T1, typename T2>
void List<T1, T2>::add(T2& action)
{
	if (std::cin >> element && element.size() > 0)
	{
		std::cout << "\n 1.Add to top\n 2.Add at the end\n\n Select an action -> ";
		if (std::cin >> action && action == 1)
		{
			list.push_front(element);
		}
		else
		{
			list.push_back(element);
		}
	}
}

template<typename T1, typename T2>
void List<T1, T2>::del(T2& action)
{
	std::cin >> action;
	switch (action)
	{
	case 1:
		list.pop_front();
		break;
	case 2:
		list.pop_back();
		break;
	case 3:
		list.clear();
		break;
	default:
		std::cout << " Error!" << std::endl;
		break;
	}
}

template<typename T1, typename T2>
void List<T1, T2>::replacement(T2& search)
{
	auto iter = list.cbegin();

	std::cin >> search;
	advance(iter, search);

	list.erase(iter);

	std::cout << "\n Enter a name for the item -> "; std::cin >> element;
	list.insert(iter, element);
}

template<typename T1, typename T2>
void List<T1, T2>::mergeAdd()
{
	std::list<T1> list2;
	do
	{
		std::cin >> element;
		if (element.size() > 0)
		{
			list2.push_back(element);
		}
	} while (element != "");

	auto iter = list2.cend();
	list2.insert(iter, list.begin(), list.end());
}

template<typename T1, typename T2>
void List<T1, T2>::mergeDel()
{
	std::list<T1> list2;
	do
	{
		std::cin >> element;
		if (element.size() > 0)
		{
			list2.push_back(element);
		}
	} while (element != "");

	auto iter = list2.cend();
	list2.insert(iter, list.begin(), list.end());

	auto begin = list.begin();
	auto end = list.end();

	list.erase(begin, end);
}

template<typename T1, typename T2>
void List<T1, T2>::printLeft()
{
	for (auto iter = list.cbegin(); iter != list.cend(); iter++)
	{
		std::cout << "\n " << *iter;
	}
}

template<typename T1, typename T2>
void List<T1, T2>::printRight()
{
	list.reverse();

	for (auto iter = list.cbegin(); iter != list.cend(); iter++)
	{
		std::cout << "\n " << *iter;
	}
}
