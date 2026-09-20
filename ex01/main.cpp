#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main( void )
{
	int		N = 5;
	Zombie*	horde;

	// --- Test 1: normal horde ---
	std::cout << "=== Creating horde of " << N << " zombies ===" << std::endl;
	horde = zombieHorde( N, "Bob" );

	std::cout << std::endl << "=== Announcing ===" << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].announce();

	std::cout << std::endl << "=== Deleting horde ===" << std::endl;
	delete[] horde;

	std::cout << std::endl;

	// --- Test 2: horde of 1 ---
	std::cout << "=== Horde of 1 ===" << std::endl;
	horde = zombieHorde( 1, "Lonely" );
	horde[0].announce();
	delete[] horde;

	return 0;
}
