#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "esat/window.h"
#include "esat/draw.h"
#include "esat/input.h"
#include "esat/sprite.h"
#include "esat/time.h"
#include "esat/math.h"
#include "resources/include/centipede_variables.cc"
#include "resources/include/centipede_sprites.cc"
#include "resources/include/centipede_auxiliar.cc"
#include "resources/include/centipede_interface.cc"
// #include "resources/include/centipede_map.cc"
#include "resources/include/centipede_player.cc"
#include "resources/include/centipede_enemies.cc"

void Init(){
  InitSprites();
}

int esat::main(int argc, char** argv){
  double current_time = 0.0;
  double last_time = 0.0;
  double fps = 30.0;
  esat::WindowInit(800, 800);
  WindowSetMouseVisibility(false);
  srand(time(NULL));
  Init();

  while(!esat::IsSpecialKeyDown(esat::kSpecialKey_Escape) && esat::WindowIsOpened()){
    last_time = esat::Time();
    esat::DrawBegin();
    esat::DrawClear(0, 0, 0);



    esat::DrawEnd();
    esat::WindowFrame();

  	do{
      current_time = esat::Time();
    } while((current_time - last_time) <= 1000.0 / fps);
  }
  esat::WindowDestroy();
  ReleaseSprites();
  FreePointers();
  return 0;
}
