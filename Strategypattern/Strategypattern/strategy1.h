#pragma once

class IStrategy;


class strategy1 : public IStrategy
{
public:
	void doOperation(int num, int num2) override {
		std::cout << num + num2 << std::endl;
		}
};