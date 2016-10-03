/// UML -> WITH MODELIO
/// GIT -> github.com/CUCEI-TAREAS/EDA2-HASSEM-2016B
/// STRUCTURE CORRECT

#include <iostream>
#include <thread>         // std::thread

#include "menu.h"



void foo()
{
  // do stuff...
}

void bar(int x)
{
  // do stuff...
}

//using namespace std;

int main() {

  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (bar,0);  // spawn new thread that calls bar(0)

  std::cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  std::cout << "foo and bar completed.\n";



    return 0;
}
