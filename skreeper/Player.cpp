#include "Player.h"
#include <SFML/Graphics.hpp>
using FrameTime = float;

Player::Player()
{
	_shape.setFillColor(sf::Color::Green);
}

void Player::update(FrameTime dt, sf::RenderWindow &window)
{
	input();
	draw(window);
}

void Player::input()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		_shape.setFillColor(sf::Color::Red);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		_shape.setFillColor(sf::Color::Blue);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		_shape.setFillColor(sf::Color::Magenta);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		_shape.setFillColor(sf::Color::Green);
	}
}

void Player::draw(sf::RenderWindow &window)
{
	window.draw(_shape);
}