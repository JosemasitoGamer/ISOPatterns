#include "DuckingState.h"
#include "StandingState.h"
#include "../FSM.h"

void DuckingState::Enter()
{
	std::printf("He entrado en Ducking State\n");
}

void DuckingState::Update()
{
	std::printf("Estoy en Ducking State\n");
	if (GetKey(A))
	{
		fsm->ChangeState(new StandingState());
	}
}

bool DuckingState::CanEnter()
{
	return true;
}

void DuckingState::Exit()
{
	std::printf("He salido de Ducking State\n");
}
