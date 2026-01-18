#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(7);

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Found in vector: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Vector error: " << e.what() << std::endl;
	}

	try
	{
		easyfind(vec, 42);
	}
	catch (const std::exception& e)
	{
		std::cout << "Vector error: " << e.what() << std::endl;
	}
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);

	try
	{
		std::list<int>::iterator it = easyfind(lst, 20);
		std::cout << "Found in list: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "List error: " << e.what() << std::endl;
	}

	try
	{
		easyfind(lst, 99);
	}
	catch (const std::exception& e)
	{
		std::cout << "List error: " << e.what() << std::endl;
	}

	return 0;
}
