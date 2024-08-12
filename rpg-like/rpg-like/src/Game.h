#ifndef GAME_H
#define GAME_H
#include "../States/GameState.h"

class Game
{
protected:
	//Variables
	std::shared_ptr<sf::RenderWindow>	m_window;

	sf::Event			m_event;
	bool				m_running = true;
	float				m_deltaTime;
	sf::Clock			m_dtClock;


	std::stack<std::shared_ptr<State>> states;

	//Initialization for game
	void initWindow(const std::string& path = "");
	void initStates();
	void sUserInput();
public:
	//Constructor
	Game();
	virtual ~Game();


	//Functions
	void render();
	void run();
	void update();
	void quit();
	void updateDt();
	bool isRunning();
};
#endif // !GAME_H

