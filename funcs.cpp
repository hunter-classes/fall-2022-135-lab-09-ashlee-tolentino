/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab9

This program works with pointer variables and dynamic memory allocation.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include "coord3d.h"
#include "funcs.h"

/**
   Task A: This function receives the coordinates of a point P passed as a pointer, and computes the distance from the origin to the point P
 */
double length(Coord3D *p)
{
  double result = sqrt((p->x * p->x) + (p->y * p->y) + (p->z * p->z));
  return result;
}

/**
   Task B: This function receives the coordinates of two points (passed as pointers), and returns the pointer of the point that is farther away from the origin.
 */
Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
  Coord3D* result;
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

/**
   Task C: This function gets the position and the velocity of an object and has to compute object’s new coordinates after the time interval dt. The function does not return any values, instead, it should update the object’s position ppos with its new position coordinates.
 */
void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
  ppos->x = ppos->x + pvel->x * dt;
  ppos->y = ppos->y + pvel->y * dt;
  ppos->z = ppos->z + pvel->z * dt;
}

/**
   Task E: These functions create and delete coordinate objects dynamically.
 */
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z)
{
  Coord3D *result = new Coord3D;
  result->x = x;
  result->y = y;
  result->z = z;
  
  return result;
}

// free memory
void deleteCoord3D(Coord3D *p)
{
  delete p;
}
