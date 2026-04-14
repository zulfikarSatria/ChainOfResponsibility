#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
#include "HandGenerator.h"

Hand HandGenerator::generateHand() {
	std::cout << "Generating cards for player...\n";
	Hand hand;
	hand.value = (std::rand() % 13) + 1;
		// Generate a random value from 1 to 13
		// rand() % 13 produces 0-12, so adding 1 results in 1-13
	return hand;
}