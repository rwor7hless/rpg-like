#ifndef STATE_H
#define STATE_H

#include <SFML/Graphics.hpp>
#include "Assets.h"
#include <memory>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

class State
{
private:

	std::vector<sf::Texture> m_textures;

public:
	State();
	virtual ~State();	

	virtual void update() = 0;
	virtual void render() = 0;
};



#endif // !STATE_H

