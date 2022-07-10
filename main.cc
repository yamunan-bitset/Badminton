#include <raylib.h>
#include "entity.hh"

#define W 1200
#define H 600

int main(int argc, char** argv)
{
	InitWindow(W, H, "Badminton");
	SetTargetFPS(60);
	Player player(W, H);
	Enemy enemy(W, H);
	Ball ball(W, H, player, enemy);
	Net net(W, H);

	while (!WindowShouldClose())
	{
		player.update();
		enemy.update();
		ball.update();

		BeginDrawing();
			ClearBackground(GRAY);
			player.draw();
			enemy.draw();
			ball.draw();
			net.draw();
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
