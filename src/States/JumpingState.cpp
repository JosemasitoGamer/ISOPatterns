#include "JumpingState.h"

void JumpingState::Enter()
{
	std::printf("He entrado en Jumping State\n");
}

void JumpingState::Update()
{
	std::printf("Estoy en Jumping State\n");
}

bool JumpingState::CanEnter()
{
	return true;
}

void JumpingState::Exit()
{
	std::printf("He salido de Jumping State\n");
}
