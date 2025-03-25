#pragma once
#include <iostream>
#include <windows.h>
#define GetKey(X) (!!(GetAsyncKeyState(0[#X]) & 0x8000))
//fordward declarations
class FSM;

class State
{
protected:
	FSM* fsm;
public:
	void SetFSM(FSM* fsmInstance) { fsm = fsmInstance; }

	virtual void Enter() = 0;
	virtual void Update() = 0;
	virtual bool CanEnter() = 0;
	virtual void Exit() = 0;
	virtual ~State() = default;
};

