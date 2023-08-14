#include "Zombie.hpp"

int main( void ) {
	{
		Zombie *horde;

		horde = zombieHorde(3, "test");
		for (int i = 0; i < 3; i++) {
			horde[i].announce();
		}
		delete [] horde;
	}
	{
		Zombie *horde;

		horde = zombieHorde(0, "test");
		if (horde == NULL) {
			std::cout << "Null" << std::endl;
		}
	}
	{
		Zombie *horde;

		horde = zombieHorde(-5, "yes");
		if (horde == NULL) {
			std::cout << "Null" << std::endl;
		}
	}
}
