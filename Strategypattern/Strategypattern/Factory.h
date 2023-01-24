#pragma once
#include "Strategy.h"
#include "strategy1.h"
#include "strategy2.h"
#include <unordered_map>


class Factory {
private:
	IStrategy* strategyone = new strategy1;
	IStrategy* strategytwo = new strategy2;

public:
	IStrategy* getStrategy(int num) {
		switch (num) {
		case 1:
			return strategyone;
			break;
		case 2:
			return strategytwo;
			break;
		}
	}
	
};