#include <iostream>
#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-"
		<< "special-ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn't "
		<< "put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free. I've been "
		<< "coming for years, whereas you started working here just last month."
		<< std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain( std::string level )
{
	static const std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	int	i = -1;
	for (int j = 0; j < 4; j++)
	{
		if (levels[j] == level)
		{
			i = j;
			break;
		}
	}

	switch (i)
	{
		case 0: debug();   /* falls through */
		case 1: info();    /* falls through */
		case 2: warning(); /* falls through */
		case 3: error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					  << std::endl;
	}
}
