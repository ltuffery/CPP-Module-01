#include "Zombie.hpp"

int main( void ) {
	Zombie *horde;

	horde = zombieHorde(3, "test");
	for (int i = 0; i < 3; i++) {
		horde[i].announce();
	}
	delete [] horde;
}
