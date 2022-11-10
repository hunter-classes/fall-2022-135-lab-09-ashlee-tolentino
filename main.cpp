/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab9

This program...
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  // Task A
  Coord3D pointP = {10, 20, 30};
  std::cout << "Task A\n\n" << length(&pointP) << std::endl; // would print 37.4166
  std::cout << "---------------------------------------\n";

  // Task B
  //Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  std::cout << "Task B\n\nAddress of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
  std::cout << "ans = " << ans << std::endl; // So which point is farther?
  std::cout << "---------------------------------------\n";

  // Task C
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << "Task C\n\n" << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4
  std::cout << "---------------------------------------\n";

  // Task D
  


  
  return 0;
}
