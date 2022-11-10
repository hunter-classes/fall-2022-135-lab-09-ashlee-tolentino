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

// Task A: This function receives the coordinates of a point P passed as a pointer, and computes the distance from the origin to the point P
double length(Coord3D *p)
{
  double result = sqrt((p->x * p->x) + (p->y * p->y) + (p->z * p->z));
  return result;
}

// Task B: This function receives the coordinates of two points (passed as pointers), and returns the pointer of the point that is farther away from the origin.
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
  Coord3D * result;
  if(length(p1) > length(p2))
  {
    result = p1;
  }
  else
  {
    result = p2;
  }
  return result;
}
