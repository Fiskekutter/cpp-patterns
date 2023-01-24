#pragma once
#include <iostream>
#include "state.h"
class running : public state{
public:
	virtual void stop() {
		std::cout << "Stop" << std::endl;
	}
};