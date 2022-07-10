#pragma once
#include <raylib.h>
#include <cmath>

class Player
{
public:
	float x, y, size = 64, w, h;
	bool turn = true;
	Player(float _w, float _h) : w(_w), h(_h) { x = 100; y = h - size; }
	void draw();
	void update();
};

class Enemy
{
public:
	float x, y, size = 64, w, h;
	Enemy(float _w, float _h) : w(_w), h(_h) { x = w - 100; y = h - size; }
	void draw();
	void update();
};

class Ball
{
	unsigned dtiters = 0;
public:
	float x, y, radius = 10, w, h, gravity = -1, vel = 1;
	Player player;
	Enemy enemy;
	Ball(float _w, float _h, Player _player, Enemy _enemy) 
		: w(_w), h(_h), player(_player), enemy(_enemy) 
		{ x = w / 2; y = h / 2; }
	void draw();
	void update();
};

class Net
{
public:
	float w, h;
	Net(float _w, float _h) : w(_w), h(_h) {}
	void draw();
};
