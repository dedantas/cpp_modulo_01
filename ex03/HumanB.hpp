#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB( std::string name );

	void	setWeapon( Weapon& weapon );
	void	attack( void ) const;

private:
	std::string	_name;
	Weapon*		_weapon;  // pointer: may not always have a weapon

};

#endif
