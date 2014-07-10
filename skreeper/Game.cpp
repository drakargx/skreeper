#include "Game.h"
#include <chrono>
#include <SFML/Graphics.hpp>

Game::Game(int fps, std::string title)
{	
	window.setFramerateLimit(fps);
	window.setTitle(title);
}

void Game::run()
{
	running = true;
	while (running)
	{
		auto timePoint1(std::chrono::high_resolution_clock::now());
		window.clear(sf::Color::Black);

		input();
		update();
		draw();

		auto timePoint2(std::chrono::high_resolution_clock::now());
		auto elapsedTime(timePoint2 - timePoint1);
		FrameTime ft{ std::chrono::duration_cast<
			std::chrono::duration<float, std::milli >> (elapsedTime).count() };
		lastFT = ft;
		auto ftSeconds(ft / 1000.f);
		auto fps(1.f / ftSeconds);

		window.setTitle("FT: " + std::to_string(ft) + "\tFPS: " + std::to_string(fps));
	}
}

void Game::input()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
			break;
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
		running = false;
}

void Game::update()
{
	currentSlice += lastFT;
	for (; currentSlice >= ftSlice; currentSlice -= ftSlice)
	{
		//all structs/objects/whatever should update here, as well as checking collisions
	}
}

void Game::draw()
{
	//draw everything before window.display()!
	window.display();
}