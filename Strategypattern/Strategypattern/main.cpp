// Strategypattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "context.h"


int main()
{
	int p = 0;
    std::cout << "Hello World!\n";
	Context *c1 = new Context(new strategy1);
	c1->executeStrategy(10, 5);
	
	if (c1->getStrategy())
	{
		std::cout << "Im in strategy1" << std::endl;
	};
	

	c1->SetStrategy(new strategy2);
	c1->executeStrategy(10, 5);
	delete c1;

	return 0;
}
