#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	GameObject testSprite;
	GameObject coolDuck;
	GameObject UmaThurman;
	GameObject Bazinga;
	GameObject Explosion;
	GameObject Background;
	sf::Texture texture;
	sf::Texture DuckTexture;
	sf::Texture UmaTexture;
	sf::Texture BazingaTexture;
	sf::Texture ExplodeTexture;
	sf::Texture BackgroundTexture;

};