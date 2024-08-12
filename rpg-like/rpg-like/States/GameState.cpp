#include "GameState.h"

GameState::GameState(std::shared_ptr<sf::RenderWindow> m_stateWindow) : State(m_stateWindow)
{
}

GameState::~GameState()
{
}

void GameState::updateKeyBinds(const float& dt)
{
	this->checkForEnd();
}

void GameState::update(const float& dt)
{
	this->updateKeyBinds(2);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) std::cout << "123123" << std::endl;
		
}

void GameState::render(std::shared_ptr<sf::RenderTarget> target)
{
}

void GameState::endState()
{
	std::cout << "GameStateOver";
}

