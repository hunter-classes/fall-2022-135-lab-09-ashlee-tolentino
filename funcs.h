#include <iostream>
#include <cmath>
#include <iomanip>
#include "coord3d.h"

#pragma once

double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);

