#include <iostream>
#include <cstdlib> // Required for srand
#include <ctime>   // Required for time
#include "GameManager.h"
int main()
{
	// Seed the random number generator with the current time
	// This ensures a different sequence of numbers every time you run the app
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	GameManager gameManager;
	gameManager.runSession();
	return 0;
}