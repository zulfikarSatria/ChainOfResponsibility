#include <iostream>
#include "HandGenerator.h"
Hand HandGenerator::generateHand() {
	std::cout << "Generating cards for player...\n";
	Hand hand;
	hand.value = 2; //pair
	hand.value = 4; //two pair
	hand.value = 6; //straigth
	hand.value = 7; //full house
	return hand;
}