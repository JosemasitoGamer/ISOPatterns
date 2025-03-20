#include "DivingState.h"

void DivingState::Enter()
{
	std::printf("He entrado en Jumping State\n");
}

void DivingState::Update()
{
	std::printf("Estoy en Jumping State\n");
}

bool DivingState::CanEnter()
{
	return true;
}

void DivingState::Exit()
{
	std::printf("He salido de Jumping State\n");
}
