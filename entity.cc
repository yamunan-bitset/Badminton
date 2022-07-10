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

void Ball::update()
{
	dtiters++;
	y -= gravity * GetFrameTime() * 10 * dtiters;

	if (y + radius > h) y = h - radius;
}

void Net::draw()
{
	DrawLine(w / 2, h, w / 2, 2 * h / 3, RAYWHITE);
}
