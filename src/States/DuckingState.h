#pragma once

#include "State.h"

class DuckingState : public State
{
	virtual void Enter() override;
	virtual void Update() override;
	virtual bool CanEnter() override;
	virtual void Exit() override;
};

