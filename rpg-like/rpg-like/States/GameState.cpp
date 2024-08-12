#include "GameState.h"

GameState::GameState(std::shared_ptr<sf::RenderWindow> m_stateWindow) : State(m_stateWindow)
{
}

GameState::~GameState()
{
}

void GameState::update(const float& dt)
{
	std::cout << "123123" << std::endl;
}

void GameState::render(std::shared_ptr<sf::RenderTarget> target)
{
}

void GameState::endState()
{
}
