#include "Game.h"


Game::Game() { init("123"); }


void Game::init(const std::string& path)
{   
    //TODO: 
    //  1.implemetn loadFromFile func: m_assets.loadFromFile(path);
    //  
	m_window.create(sf::VideoMode(1280, 768), "RPG_LIKE");
}

void Game::sUserInput()
{
    while (m_window.pollEvent(m_event))
    {
        if (m_event.type == sf::Event::Closed) quit();
    }

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

void Game::quit()
{
    m_running = false;
    m_window.close();
}
