#pragma once

class context;
class state;

class command {
public:
	virtual void execute(context*, state*) {};
};