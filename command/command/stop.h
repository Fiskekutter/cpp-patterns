#pragma once
#include "command.h"
#include "context.h"

class stop : public command {
public:
	void execute(context* pC, state* st) {
		st->run(pC);
	}
};