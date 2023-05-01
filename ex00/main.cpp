#include "Zombie.hpp"

int main( void ) {
	Zombie zombie;
	Zombie *newZombie;

	newZombie = zombie.newZombie("John");
	zombie.randomChump("Doe");
	newZombie->announce();
	delete newZombie;
}
