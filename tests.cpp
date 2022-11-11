#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

TEST_CASE("Length"){
  Coord3D point1 = {10, 20, 30};
  Coord3D point2 = {0, 48, 152};
  CHECK(length(&point1) == sqrt((10 * 10) + (20 * 20) + (30 * 30)));
  CHECK(length(&point2) == sqrt((0 * 0) + (48 * 48) + (152 * 152)));
}

TEST_CASE("Farther From Origin"){
  Coord3D point3 = {10, 20, 30};
  Coord3D point4 = {-20, 21, -22};
  Coord3D point5 = {0, 48, 152}; 
  Coord3D point6 = {33, 6, 27}; 
  CHECK(fartherFromOrigin(&point3, &point4) == &point3);
  CHECK(fartherFromOrigin(&point5, &point6) == &point5);
}

TEST_CASE("Velocity"){
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  CHECK(pos.x == 2);
  CHECK(pos.y == -10);
  CHECK(pos.z == 100.4);
  Coord3D pos2 = {5, 0, 60.0};
  Coord3D vel2 = {5, 3, 0.1};
  move(&pos2, &vel2, 3.0);
  CHECK(pos2.x == 20);
  CHECK(pos2.y == 9);
  CHECK(pos2.z == 60.3);
}

TEST_CASE("Create and Delete"){
  Coord3D *ppos = createCoord3D(10,20,30);
  Coord3D *pvel = createCoord3D(5.5,-1.4,7.77);
  move(ppos, pvel, 10.0);
  CHECK((*ppos).x == 65);
  CHECK((*ppos).y == 6);
  CHECK((*ppos).z == (10.0 * 7.77 + 30));
  
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);
}
