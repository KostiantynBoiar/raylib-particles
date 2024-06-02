#pragma once
#include "raylib.h"
class Particle
{

	void update();
	bool isDead();
	Vector2 getPosition();
	void setPosition(Vector2 position);
	Vector2 getAcceleration();
	void setAcceleration(Vector2 acceleration);
	Vector2 getVelocity();
	void setVelosity(Vector2 velocity);
	float getLifespan();
	void setLifespan(float lifespan);

private:
	Vector2 position;
	Vector2 acceleration;
	Vector2 velocity;
	float lifespan;
};

