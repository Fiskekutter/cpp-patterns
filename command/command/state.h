#pragma once

class context;

class state {
public:
	virtual void run(context*) {};
	virtual void stop(context*) {};


protected:
	state();
	void ChangeState(context*, state*);
};