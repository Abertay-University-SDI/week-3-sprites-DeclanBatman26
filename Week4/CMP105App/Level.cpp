#include "Level.h"
using namespace std;
#include <iostream>

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	DuckTexture.loadFromFile("gfx/coolDuck.png");

	coolDuck.setTexture(&DuckTexture);
	coolDuck.setSize(sf::Vector2f(250, 250));
	coolDuck.setPosition(800, 300);

	UmaTexture.loadFromFile("gfx/Killbill.png");

	UmaThurman.setTexture(&UmaTexture);
	UmaThurman.setSize(sf::Vector2f(250, 250));
	UmaThurman.setPosition(200, 300);

	BazingaTexture.loadFromFile("gfx/Bazinga.png");

	Bazinga.setTexture(&BazingaTexture);
	Bazinga.setSize(sf::Vector2f(1500, 700));
	Bazinga.setPosition(0, 0);

	ExplodeTexture.loadFromFile("gfx/Explosion.png");

	Explosion.setTexture(&ExplodeTexture);
	Explosion.setSize(sf::Vector2f(300, 300));
	Explosion.setPosition(1500, 200);

	BackgroundTexture.loadFromFile("gfx/Background.png");

	Background.setTexture(&BackgroundTexture);
	Background.setSize(sf::Vector2f(1500, 700));
	Background.setPosition(0, 0);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	else if (input->isPressed(sf::Keyboard::Num2)) {
		cout << "Space";
		sf::View view = window->getView();
		view.setSize(200, 100);
		window->setView(view);
		view.move(-250, 0);
		window->setView(view);
	}
	else if (input->isPressed(sf::Keyboard::Num1)) {
		Bazinga.setPosition(sf::Vector2f(-1500, 0));
	}
	else if (input->isPressed(sf::Keyboard::Right)) {
		cout << "Right";
		sf::View view = window->getView();
		view.move(sf::Vector2f(550, 0));
		window->setView(view);
	}
	else if (input->isPressed(sf::Keyboard::Left)) {
		cout << "Left";
		sf::View view = window->getView();
		view.move(sf::Vector2f(-550, 0));
		window->setView(view);
	}
	else if (input->isPressed(sf::Keyboard::Num3)) {
		sf::View view = window->getView();
		view.move(700, 0);
		window->setView(view);
	}

}

// Update game objects
void Level::update(float dt)
{

	
}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(testSprite);
	window->draw(Background);
	window->draw(coolDuck);
	window->draw(UmaThurman);
	window->draw(Bazinga);
	window->draw(Explosion);
	

	endDraw();
}
