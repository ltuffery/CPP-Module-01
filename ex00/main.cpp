#include "Zombie.hpp"

int main( void ) {
	Zombie zombie;
	Zombie *newZombie;

	newZombie = zombie.newZombie("John");
	newZombie->announce();
	delete newZombie;
	zombie.randomChump("Doe");
}
