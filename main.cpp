#include "list.h"
#include "list.cpp"
#include <iostream>

int main(int argc, char** argv)
{
	List<std::string, int> list;

	int act, action, search; act = action = search = 0;

	do
	{
		std::cout << "\n\n ___________________"
			<< "\n\n 1.Add\n 2.Del\n 3.Replacement\n 4.Merge\n 5.Print\n Select an action -> ";

		std::cin >> act; system("cls");
		switch (act)
		{
		case 1:
			std::cout << "\n Enter a name for the item -> ";
			list.add(action);
			break;
		case 2:
			std::cout << "\n 1.Delete the first items\n 2.Delete the second item\n 3.Delete all items\n\n Select an action -> ";
			list.del(action);
			break;
		case 3:
			std::cout << "\n\n _____________________\n\n Enter the item number you want to change -> ";
			list.replacement(search);
			break;
		case 4:
			std::cout << "\n 1.Add lists\n 2.Replace list\n\n Select an action -> ";
			if (std::cin >> act && act == 1)
			{
				std::cout << "\n Enter the items in the new list (When you have finished typing, enter a blank line) -> ";
				list.mergeAdd();
			}
			else
			{
				std::cout << "\n Enter the items in the new list (When you have finished typing, enter a blank line) -> ";
				list.mergeDel();
			}
			break;
		case 5:
			std::cout << "\n Define from left to right:" << std::endl;
			list.printLeft();
			std::cout << "\n\n Output elements from right to left:" << std::endl;
			list.printRight();
			break;
		default:
			break;
		}
	} while (act != 0);

	return 0;
}