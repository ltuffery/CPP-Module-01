#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

	private:
		Weapon *weapon;
		std::string name;

	public:
		HumanB( std::string name, Weapon *weapon = NULL );
		~HumanB( void );
		void attack( void );
		void setWeapon( Weapon &weapon );

};

#endif
