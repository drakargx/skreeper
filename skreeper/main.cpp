#include <SFML/Graphics.hpp>
#include <chrono>
#include "Game.h"

using FrameTime = float;
const float ftStep{ 1.f }, ftSlice{ 1.f };

sf::CircleShape shape(100.f);

/*
struct Game
{
	sf::RenderWindow window{ { 200, 200 }, "Test" };
	FrameTime lastFT{ 0.f }, currentSlice{ 0.f };
	bool running{ false };

	Game()
	{
		window.setFramerateLimit(15);
	}

	void run()
	{
		shape.setFillColor(sf::Color::Green);
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

	void input()
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

	void update()
	{
		currentSlice += lastFT;
		for (; currentSlice >= ftSlice; currentSlice -= ftSlice)
		{

		}
	}

	void draw()
	{
		window.draw(shape);
		window.display();
	}
};
*/

int main()
{
	Game{60, "Test"}.run();
	return 0;
}