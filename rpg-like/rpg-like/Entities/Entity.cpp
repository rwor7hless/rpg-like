#include "Entity.h"

Entity::Entity()
{
	this->shape.setSize(sf::Vector2f(50.f, 50.f));
	this->shape.setFillColor(sf::Color::White);
	this->m_movementSpeed = 100.f;
}

Entity::~Entity()
{


}

void Entity::update(const float& dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) this->move(dt, -0.1f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) this->move(dt,  0.f,  0.1f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) this->move(dt,  0.1f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) this->move(dt,  0.f, -0.1f);
}

void Entity::render(std::shared_ptr<sf::RenderTarget> target)
{
	target->draw(this->shape);
}


void Entity::move(const float& dt, const float x, const float y)
{
	this->shape.move(x * this->m_movementSpeed, y * this->m_movementSpeed);
}
