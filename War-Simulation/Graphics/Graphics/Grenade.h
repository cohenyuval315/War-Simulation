#pragma once
#include "Bullet.h"

const int NUM_BULLETS = 20;
class Grenade
{
private:
	double x, y;
	Bullet* bullets[NUM_BULLETS];
public:
	Grenade(double xx, double yy);
	void draw();
	bool explode(int maze[MSZ][MSZ]);
	void SimulateExplosion(int maze[MSZ][MSZ], double security_map[MSZ][MSZ]);
};

