#include "Zombie.hpp"

int main( void ) {
	Zombie *zombie;

	zombie = newZombie("John");
	zombie->announce();
	randomChump("Doe");
	delete zombie;
}
