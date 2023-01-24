#pragma once
#include "command.h"
#include "state.h"
#include "context.h"

class invoker {
public:
	void setCommand(command com) {
		this->comma = com;
	}
	
	void changeState() {
		comma.execute(context* c, state* s);
	}

private:
	command comma;
};