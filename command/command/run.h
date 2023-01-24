#pragma once
#include "command.h"
#include "context.h"

class run : public command {
public:
	virtual void execute(context* pC, state* st) {
		st->run(pC);
	}
};