#pragma once
#include <iostream>
#include "state.h"

class stopping : public state{
public:
	virtual void run() {
		std::cout << "Run" << std::endl;
	}
};