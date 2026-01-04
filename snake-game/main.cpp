/*!
* i cant get the warning crap to work for exclusively my code rahhhh
*/

#include<print>

#include<SFML/Graphics.hpp>

#include "snake.h"

void run();

int main() {
	std::println("hello world");

	Snake snake{ -1 };

	run();
}

void run() {
	sf::RenderWindow window{ sf::VideoMode{{800,600}}, "Snake" };
	while (window.isOpen()) {
		while (std::optional<sf::Event> event{ window.pollEvent() }) {
			if (event->is<sf::Event::Closed>())
				window.close();
		}

		window.clear(sf::Color::Magenta);

		window.display();
	}
}