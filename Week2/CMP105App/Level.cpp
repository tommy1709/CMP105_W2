#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	if (!font.loadFromFile("font/arial.ttf"));
	{
		std::cout << "Error loading font\n";
	}
	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(25);
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	text.setPosition(100, 300);
}

Level::~Level()
{
	input = nullptr;
}

// handle user input
void Level::handleInput()
{
	if (input->isKeyDown(sf::Keyboard::W))
	{
		input->setKeyUp(sf::Keyboard::W);
		if (!font.loadFromFile("font/arial.ttf"));
		{
			std::cout << "Error loading font\n";
		}
		text.setFont(font);
		text.setString("W was prssed");
		text.setCharacterSize(30);
		text.setFillColor(sf::Color::Green);
		text.setStyle(sf::Text::Bold | sf::Text::Underlined);
		text.setPosition(300, 300);

	}

	if (input->isKeyDown(sf::Keyboard::J) && input->isKeyDown(sf::Keyboard::K) && input->isKeyDown(sf::Keyboard::L))
	{
		input->setKeyUp(sf::Keyboard::J);
		input->setKeyUp(sf::Keyboard::K);
		input->setKeyUp(sf::Keyboard::L);

		if (!font.loadFromFile("font/arial.ttf"));
		{
			std::cout << "Error loading font\n";
		}
		text.setFont(font);
		text.setString("J, K, & L were prssed");
		text.setCharacterSize(30);
		text.setFillColor(sf::Color::Magenta);
		text.setStyle(sf::Text::Bold | sf::Text::Underlined);
		text.setPosition(300, 500);

	}

}

// Update game objects
void Level::update()
{

}

// Render level
void Level::render()
{
	beginDraw();
	
	
		
	window->draw(text);


	
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}