#pragma once
#include <vector>
#include "Particle.h"
#include <iostream>;

#define HEIGTH 1080
#define WIDTH 1920

class Game
{

private:
	std::vector<Particle> particles;

public:
	

	void drawGame();
	void addParticles(Particle &particle);
	std::vector<Particle> getParticles();
	void setParticles(std::vector<Particle> particles);
};

