//main.cpp

#include <iostream>
#include "array"

#include "States/StandingState.h"
#include "FSM.h"

int main()
{
  //State Pattern
  //Create fsm
  StandingState* standing = new StandingState();
  FSM* fsm = new FSM(standing);
  //set reference to fsm
  standing->SetFSM(fsm);

  while (true) {
    fsm->Update();
    Sleep(100);
  }
}
