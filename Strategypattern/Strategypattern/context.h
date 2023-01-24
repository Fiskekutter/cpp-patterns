#pragma once


#include "Strategy.h"
#include "strategy1.h"
#include "strategy2.h"


class Context {
public:
	Context(IStrategy* strategy = nullptr) : strat(strategy) {
		strat = strategy;
	}

	~Context()
	{
		delete this->strat;
	}

	void SetStrategy(IStrategy *strategy) {
		delete this->strat;
		this->strat = strategy;
	}

	void executeStrategy(int num1, int num2) const {
		this->strat->doOperation(num1, num2);
	}

	IStrategy* getStrategy() {
		return this->strat;
	}

private:
	IStrategy *strat;
};