#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {

	private:
		Weapon &weapon;
		std::string name;

	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void attack( void );
		void setWeapon( Weapon &weapon );

};

#endif
