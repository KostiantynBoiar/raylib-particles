#include "Game.h"

void Game::drawGame()
{
	InitWindow(WIDTH, HEIGTH, "Particles");
	
	

	while (!WindowShouldClose()) {

		if (IsKeyDown(KEY_UP)) {
			Vector2 pos = { 
					GetRandomValue(GetMousePosition().x - 10, GetMousePosition().x + 10),
					GetRandomValue(GetMousePosition().y - 10, GetMousePosition().y + 10) 
			};

			Particle particle(
				pos, 
				{ 0.0001, 0.0001 }, 
				{ 0.0001,0.0001 }
			);

			addParticles(particle);

		}
		BeginDrawing();
			ClearBackground(BLACK);
			for (auto it = particles.begin(); it != particles.end(); ) {
				it->draw(*it);
				it->update(*it);
				if (it->getLifespan() < 1) {
					it = particles.erase(it); 
				}
				else {
					++it; 
				}
			}

		EndDrawing();
	}
	CloseWindow();

	return;
}

void Game::addParticles(Particle& particle)
{
	
	particles.push_back(particle);
	std::cout << "Particle has been drawn at x, y: " << particle.getPosition().x << " " << particle.getPosition().y << std::endl;
	std::cout << "Particle velocity at x, y: " << particle.getVelocity().x << " " << particle.getVelocity().y << std::endl;

	
}

std::vector<Particle> Game::getParticles()
{
	return this->particles;
}

void Game::setParticles(std::vector<Particle> particles)
{
	this->particles = particles;
}
