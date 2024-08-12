#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include <ctime>
#include <fstream>
#include <iostream>
#include <memory>
#include <map>
#include <sstream>
#include <stack>
#include <vector>


class Entity
{

private:

protected:
	sf::RectangleShape shape;
	float m_movementSpeed;

public:
	Entity();
	virtual ~Entity();

	//Functions
	virtual void update(const float& dt);
	virtual void render(std::shared_ptr<sf::RenderTarget> target);
	virtual void move(const float& dt, const float x, const float y);

};


#endif // !ENTITY_H


