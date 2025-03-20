#include "DivingState.h"

void DivingState::Enter()
{
	std::printf("He entrado en Diving State\n");
}

void DivingState::Update()
{
	std::printf("Estoy en Diving State\n");
}

bool DivingState::CanEnter()
{
	return true;
}

void DivingState::Exit()
{
	std::printf("He salido de Diving State\n");
}
