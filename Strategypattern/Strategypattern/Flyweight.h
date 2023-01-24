#pragma once

#include "SharedState.h"


class Flyweight {
private:
	SharedState* shared_state_;

public:
	Flyweight(const SharedState *shared_state) : shared_state_(new SharedState(*shared_state)) {

	}
	Flyweight(const Flyweight &other) : shared_state_(new SharedState(*other.shared_state_)) {

	}
	~Flyweight() {
		delete shared_state_;
	}
	SharedState* shared_state() const
	{
		return shared_state_;
	}
};