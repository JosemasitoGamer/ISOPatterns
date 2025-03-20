#include "FSM.h"

FSM::FSM(State* initialState)
{
	currentState = initialState;
	currentState->Enter();
}

void FSM::ChangeState(State* newState)
{
  if (newState->CanEnter()) {
    currentState->Exit();
    newState->SetFSM(this);
    currentState = newState;
    currentState->Enter();
  }
  else {
    delete newState;
    std::printf("No se puede entrar en ese estado.\n");
  }
}

void FSM::Update()
{
	currentState->Update();
}

State* FSM::getCurrentState()
{
	return currentState;
}
