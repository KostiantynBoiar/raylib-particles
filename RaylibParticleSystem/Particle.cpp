#include "Particle.h"



Particle::Particle(Vector2 position)
{
	this->position = position;
	int red = rand() % 256;
	int green = rand() % 256;
	int blue = rand() % 256;
	this->color = { (unsigned char)red, (unsigned char)green, (unsigned char)blue, (unsigned char)lifespan };
}

Particle::Particle(Vector2 position, Vector2 acceleration, Vector2 velocity)
{
	this->position = position;
	this->acceleration = acceleration;
	this->velocity = velocity;
	int red = rand() % 256;
	int green = rand() % 256;
	int blue = rand() % 256;
	this->color = { (unsigned char)red, (unsigned char)green, (unsigned char)blue, (unsigned char)lifespan };
}


void Particle::draw(Particle& particle)
{

	DrawRectangle(this->position.x, this->position.y, PARTICLE_SIZE, PARTICLE_SIZE, color);
}

void Particle::update(Particle& particle)
{
	this->velocity.x += this->acceleration.x;
	this->velocity.y += this->acceleration.y;
	
	this->lifespan -= 0.001;

	this->color.a = (unsigned char)lifespan;


	setPosition(velocity);
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

float Particle::getLifespan()
{
	return this->lifespan;
}

void Particle::setLifespan(float lifespan)
{
	this->lifespan = lifespan;
}

Color Particle::getColor()
{
	return this->color;
}
