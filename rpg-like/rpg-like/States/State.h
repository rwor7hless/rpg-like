#ifndef STATE_H
#define STATE_H

#include "../Entities/Entity.h"



class State
{
protected:
	std::vector<sf::Texture>			m_textures;
	std::shared_ptr<sf::RenderWindow>	m_stateWindow;
	bool								m_quit;
public:
	State(std::shared_ptr<sf::RenderWindow> m_stateWindow);
	virtual ~State();	

	const bool& getQuit() const;

	virtual void endState() = 0;
	virtual void updateKeyBinds(const float& dt) = 0;
	virtual void update(const float& dt) = 0;
	virtual void render(std::shared_ptr<sf::RenderTarget> target = nullptr) = 0;
	virtual void checkForEnd();
};



#endif // !STATE_H

