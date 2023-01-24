#pragma once
#include "command.h"
#include "state.h"

class context {
public:
	void handleCommand(command* c) {
		c->execute(this, _state);
	}
private:
	state* _state;
	friend state;
};