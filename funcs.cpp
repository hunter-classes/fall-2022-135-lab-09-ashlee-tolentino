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
  //double result = p->z;
  return result;
}
