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
	this->updateKeyBinds(dt);
	this->player.update(dt);
		
}

void GameState::render(std::shared_ptr<sf::RenderTarget> target)
{
	this->player.render(m_stateWindow);
}

void GameState::endState()
{
	std::cout << "GameStateOver";
}

