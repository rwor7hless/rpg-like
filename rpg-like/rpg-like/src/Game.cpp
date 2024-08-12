#include "Game.h"


Game::Game() { initWindow(/*path*/); initStates(); }

Game::~Game() {};

void Game::initWindow(const std::string& path)
{   
    // open the .ini file to configurate window
    std::ifstream fs("config/window.ini");

    //variables to window properties
    std::string title = "None";
    sf::VideoMode windowBounds(1000, 1000);
    unsigned frameRate = 120;
    bool vSync = false;

    //if all okay put data from .ini file
    if (fs.is_open())
    {
        std::getline(fs, title);
        fs >> windowBounds.width >> windowBounds.height;
        fs >> frameRate;
        fs >> vSync;
    }
    //closing opened file
    fs.close();

    //make readed settings
    m_window = std::make_shared<sf::RenderWindow>(windowBounds, title);
    m_window->setFramerateLimit(frameRate);
    m_window->setVerticalSyncEnabled(vSync);
}

void Game::initStates()
{
    this->states.push(std::make_shared<GameState>(this->m_window));
}

void Game::sUserInput()
{
    while (m_window->pollEvent(m_event))
    {
        if (m_event.type == sf::Event::Closed) quit();
    }

}



void Game::render()
{
    m_window->clear();
    // Отрисовка объектов игры

    if (!this->states.empty())
    {
        this->states.top()->render(this->m_window);
    }
    m_window->display();
}

void Game::run()
{
    while (isRunning()) {
        sUserInput();
        updateDt();
        update();
        render();
    }
}

void Game::update()
{
    if (!this->states.empty())
    {
        this->states.top()->update(this->m_deltaTime);
    }
}

bool Game::isRunning()
{
    return m_running && m_window->isOpen();
}

void Game::quit()
{
    m_running = false;
    m_window->close();
}

void Game::updateDt()
{
    /* update m_deltaTime with the time it takes to update and render one frame */

    this->m_deltaTime = this->m_dtClock.restart().asSeconds();
    system("cls");
    std::cout << m_deltaTime << std::endl;

}
