#pragma once
#include "raylib.h"
#include <iostream>

#define PARTICLE_SIZE 5.0



class Particle
{
public:

	Particle(Vector2 position);
	Particle(Vector2 position, Vector2 acceleration, Vector2 velocity);
	void draw(Particle& particle);
	void update(Particle& particle);
	bool isDead(Particle& particle);
	Vector2 getPosition();
	void setPosition(Vector2 velocity);
	Vector2 getAcceleration();
	void setAcceleration(Vector2 acceleration);
	Vector2 getVelocity();
	void setVelosity(Vector2 velocity);
	float getLifespan();
	void setLifespan(float lifespan);
	Color getColor();
	void setColor(Color color);

private:
	Vector2 position;
	Vector2 acceleration;
	Vector2 velocity;
	int red;
	int green;
	int blue;
	Color color;
	float lifespan = 255.0f;
};

