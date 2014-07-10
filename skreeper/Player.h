#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>

using FrameTime = float;
class Player
{
public:
	Player();
	void update(FrameTime dt, sf::RenderWindow &window);
	void input();
	void draw(sf::RenderWindow &window);

private:
	sf::CircleShape _shape{ 100.f };
};
#endif