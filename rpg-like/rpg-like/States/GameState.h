#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "State.h"

class GameState : public State
{
private:


public:
	GameState(std::shared_ptr<sf::RenderWindow> m_stateWindow);
	virtual ~GameState();


	//Functions
	void updateKeyBinds(const float& dt);
	void update(const float& dt);
	void render(std::shared_ptr<sf::RenderTarget> target = nullptr);
	void endState();
};



#endif // !GAME_STATE_H

