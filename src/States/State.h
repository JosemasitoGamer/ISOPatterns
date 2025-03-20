#pragma once
#include <iostream>
class State
{
	virtual void Enter() = 0;
	virtual void Update() = 0;
	virtual bool CanEnter() = 0;
	virtual void Exit() = 0;
};

