#include <iostream>
#include <cmath>
#include <iomanip>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  // Task A
  Coord3D pointP = {10, 20, 30};
  std::cout << "Task A\n\n" << length(&pointP) << std::endl;
  std::cout << "---------------------------------------\n";
  
  return 0;
}
