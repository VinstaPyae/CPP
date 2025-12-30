#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main()
{
	std::cout << "===== BASIC TEST =====" << std::endl;
	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "\n===== SIZE TEST =====" << std::endl;
	try
	{
		Span sp(2);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
	}
	catch (const std::exception& e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}
	std::cout << "\n===== EXCEPTION TEST =====" << std::endl;
	try
	{
		Span sp(1);
		sp.addNumber(42);
		sp.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	std::cout << "\n===== RANGE INSERT TEST =====" << std::endl;
	try
	{
		Span sp(10);
		std::vector<int> values;

		values.push_back(100);
		values.push_back(50);
		values.push_back(200);
		values.push_back(150);

		sp.addNumber(values.begin(), values.end());

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n===== LARGE DATA TEST (100,000+) =====" << std::endl;
	try
	{
		const unsigned int SIZE = 100000;
		Span sp(SIZE);

		std::srand(std::time(NULL));
		for (unsigned int i = 0; i < SIZE; ++i)
			sp.addNumber(i);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
