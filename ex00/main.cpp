#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main( void )
{
	// Heap: zombie vive fora do scope da função
	std::cout << "=== Heap zombie ===" << std::endl;
	Zombie* heap = newZombie( "HeapZombie" );
	heap->announce();
	delete heap;

	std::cout << std::endl;

	// Stack: criado e destruído dentro de randomChump
	std::cout << "=== Stack zombie ===" << std::endl;
	randomChump( "StackZombie" );

	return 0;
}
