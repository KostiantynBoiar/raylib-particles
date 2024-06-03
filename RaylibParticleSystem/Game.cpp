#include "Game.h"

void Game::drawGame()
{
	InitWindow(WIDTH, HEIGTH, "Particles");
	
	

	while (!WindowShouldClose()) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			Particle particle(GetMousePosition(), { 0.000001, 0.000001 }, {0.000001,0.000001});
			addParticles(particle);
		}
		BeginDrawing();
			ClearBackground(BLACK);
			for (Particle& particle : particles) {
				particle.draw(particle);
				particle.update(particle);
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
