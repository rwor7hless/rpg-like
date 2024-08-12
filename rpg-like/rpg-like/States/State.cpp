#include "State.h"


State::State(std::shared_ptr<sf::RenderWindow> m_stateWindow)
{
	this->m_stateWindow = m_stateWindow;
	this->m_quit = false;
}

State::~State()
{
}

void State::update(const float& dt)
{
}

const bool& State::getQuit() const
{

	return this->m_quit;
}

void State::checkForEnd()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) 
	{
		this->m_quit = true;
	}
}

void State::updateKeyBinds(const float& dt)
{
}

void State::endState()
{
}
