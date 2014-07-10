#ifndef GAME_H
#define GAME_H
//#include <chrono>
#include <SFML/Graphics.hpp>

using FrameTime = float;
const float ftStep, ftSlice;

struct Game
{
	sf::RenderWindow window{ { 800, 600 }, "" };
	FrameTime lastFT{ 0.f }, currentSlice{ 0.f };
	bool running;

	Game(int fps, std::string title);

	void run();
	void input();
	void update();
	void draw();
};


#endif