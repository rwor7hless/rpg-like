#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include "Assets.h"
#include <memory>
class Game
{
protected:
	//Variables
	sf::RenderWindow	m_window;
	sf::Event			m_event;
	std::string			m_currentScene;
	bool				m_running = true;
	Assets				m_assets;

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
	bool isRunning();
	void quit();

};
#endif // !GAME_H

