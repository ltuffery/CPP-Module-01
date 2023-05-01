#include "Zombie.hpp"

void Zombie::randomChump(std::string name) {
	Zombie zombie;

	this->name = name;
	zombie.announce();
}
