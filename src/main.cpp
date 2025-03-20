//main.cpp

#include <iostream>
#include "array"
#include <windows.h>
#define GetKey(X) (!!(GetAsyncKeyState(0[#X])&0x8000))


#include "States/DivingState.h"
#include "States/JumpingState.h"
#include "States/StandingState.h"

//standing-> jumping (B)
//jumping->diving(A)
//standing->ducking(A)
//ducking->standing(A)

int main()
{
    DivingState divingstate;
    JumpingState jumpingState;
    StandingState standingstate;

    //std::array<State> {}

    while (1)
    {
      if (GetKey(A))
      {
        puts("A");
      }
      if (GetKey(B))
      {
        puts("B");
      }
    }
}
