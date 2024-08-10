#include "Game.h"


Game::Game() { init("123"); }


void Game::init(std::string path)
{   
    //TODO: 
    //  1.implemetn loadFromFile func: m_assets.loadFromFile(path);
    //  
	m_window.create(sf::VideoMode(1280, 768), "RPG_LIKE");
}

void Game::sUserInput()
{

}



void Game::render()
{
    m_window.clear();
    // Отрисовка объектов игры
    m_window.display();
}

void Game::run()
{
    while (isRunning()) {
        sUserInput();
        update();
        render();
    }
}

void Game::update()
{
}

bool Game::isRunning()
{
    return m_running && m_window.isOpen();
}
