#include "JumpingState.h"
#include "../FSM.h"
#include "DivingState.h"

void JumpingState::Enter()
{
	std::printf("He entrado en Jumping State\n");
}

void JumpingState::Update()
{
	std::printf("Estoy en Jumping State\n");
	if (GetKey(A))
	{
		fsm->ChangeState(new DivingState());
	}
}

bool JumpingState::CanEnter()
{
	return true;
}

void JumpingState::Exit()
{
	std::printf("He salido de Jumping State\n");
}
