#include "StandingState.h"

void StandingState::Enter()
{
	std::printf("He entrado en Standing State\n");
}

void StandingState::Update()
{
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
