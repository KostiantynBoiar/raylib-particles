#include "Particle.h"



Particle::Particle(Vector2 position)
{
	this->position = position;
}

Particle::Particle(Vector2 position, Vector2 acceleration, Vector2 velocity)
{
	this->position = position;
	this->acceleration = acceleration;
	this->velocity = velocity;
}

void Particle::draw(Particle& particle)
{
	DrawRectangle(this->position.x, this->position.y, PARTICLE_SIZE, PARTICLE_SIZE, color);
}

void Particle::update(Particle& particle)
{
	this->velocity.x += this->acceleration.x;
	this->velocity.y += this->acceleration.y;
	this->lifespan -= 2;
	this->color = { 255, 255, 255, (unsigned char)lifespan };
	setPosition(velocity);
}

bool Particle::isDead()
{
	return false;
}

Vector2 Particle::getPosition()
{
	return this->position;
}

void Particle::setPosition(Vector2 velocity)
{
	this->position.x += getVelocity().x;
	this->position.y += getVelocity().y;

}

Vector2 Particle::getAcceleration()
{
	return this->acceleration;
}

void Particle::setAcceleration(Vector2 acceleration)
{
	this->acceleration = acceleration;
}

Vector2 Particle::getVelocity()
{
	return this->velocity;
}

void Particle::setVelosity(Vector2 velocity)
{
	this->velocity = velocity;
}

int Particle::getLifespan()
{
	return this->lifespan;
}

void Particle::setLifespan(int lifespan)
{
	this->lifespan = lifespan;
}

Color Particle::getColor()
{
	return this->color;
}
