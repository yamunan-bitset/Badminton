#include "entity.hh"

void Player::draw()
{
	DrawRectangle(x, y, size, size, RAYWHITE);
}

void Player::update()
{
	if (IsKeyDown(KEY_RIGHT))
		x += 10;
	if (IsKeyDown(KEY_LEFT))
		x -= 10;

	if (x <= 0) x = 0;
	if (x + size > w / 2) x = w / 2 - size;
}

void Enemy::draw()
{
	DrawRectangle(x, y, size, size, RAYWHITE);
}

void Enemy::update()
{
}

void Ball::draw()
{
	DrawCircle(x, y, radius, RAYWHITE);
}
#include <iostream> // For Debug

void Ball::update()
{
	dtiters++;
	if (((y <= 535) || (y >= 537)) && ((x <= player.x - 17) || (x >= player.x + 17)))
		y -= gravity * GetFrameTime() * 10 * dtiters;

	/*std::cout << "Ball:" << x << ',' << y << std::endl;
	std::cout << "Player:" << player.x << ',' << player.y << std::endl;*/
	/*if ((y >= player.y + player.h) && (y <= player.y)) std::cout << "ycoll" << std::endl;
	if ((x >= player.x + player.w) && (x <= player.x)) std::cout << "xcoll" << std::endl;*/
	if (x == player.x) std::cout << "xcoll" << std::endl;
	if (y == player.y) std::cout << "ycoll" << std::endl;
	if (y + radius > h) y = h - radius;
}

void Net::draw()
{
	DrawLine(w / 2, h, w / 2, 2 * h / 3, RAYWHITE);
}
