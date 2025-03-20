#pragma once

#include "States/State.h"

class FSM
{
public:
	FSM(State* initialState);
	void ChangeState(State* newState);
	void Update();
	State* getCurrentState();
private:
	State* currentState;
};