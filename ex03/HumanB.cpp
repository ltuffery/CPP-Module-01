#include "HumanB.hpp"

HumanB::HumanB( std::string name ) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB( void ) {
}

void HumanB::attack( void ) {
	Weapon *weapon = this->weapon;

	if (weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their null " << std::endl;
}

void HumanB::setWeapon( Weapon &weapon ) {
	this->weapon = &weapon;
}
