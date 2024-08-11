#ifndef GAME_H
#define GAME_H
#include "State.h"

class Game
{
protected:
	//Variables
	std::shared_ptr<sf::RenderWindow>	m_window;

	sf::Event			m_event;
	bool				m_running = true;
	float				m_deltaTime;
	sf::Clock			m_dtClock;


	//Initialization
	void init(const std::string& path);
	void sUserInput();
public:
	//Constructor
	Game();


	//Functions
	void render();
	void run();
	void update();
	void quit();
	void updateDt();
	bool isRunning();
};
#endif // !GAME_H

