#include <SFML/Graphics.hpp>
#include <chrono>
#include "Game.h"

using FrameTime = float;
//const float ftStep{ 1.f }, ftSlice{ 1.f };

sf::CircleShape shape(100.f);

int main()
{
	Game{60, "Test"}.run();
	return 0;
}