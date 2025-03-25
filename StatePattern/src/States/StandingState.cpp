#include "StandingState.h"
#include "../FSM.h"
#include "JumpingState.h"
#include "DuckingState.h"

void StandingState::Enter()
{
	std::printf("He entrado en Standing State\n");
}

void StandingState::Update()
{
	if (GetKey(A)) {
		fsm->ChangeState(new DuckingState());
	}
	else if (GetKey(B)) {
		fsm->ChangeState(new JumpingState());
	}
	std::printf("Estoy en Standing State\n");
}

bool StandingState::CanEnter()
{
	return true;
}

void StandingState::Exit()
{
	std::printf("He salido de Standing State\n");
}
