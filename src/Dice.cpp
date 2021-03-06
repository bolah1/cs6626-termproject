/*
 * Created by Marcus Novoa & Brandon Olah
 * Last Updated: Feb 3, 2021
 *
 */
#include "Dice.hpp"

#define MAX_DICE 50		// The largest amount of dice that can be made

Dice::Dice(int n) {
	if(n > 0 && n < MAX_DICE) {
		nDice = n;
		diceValues = new int[n];
	}
	else if(n >= MAX_DICE) {
		nDice = MAX_DICE;
		diceValues = new int[MAX_DICE];
	}
	else {
		nDice = 0;
		diceValues = nullptr;
	}

	srand( time( NULL ) );
}

const int*
Dice::roll() {
	for(int n = 0; n < nDice; n++) {
		diceValues[n] = (rand() % 6) + 1;
	}

	return diceValues;
}

ostream&
Dice::print(ostream& out) const {
	if(nDice > 0) {
		for(int n = 0; n < nDice; n++) {
			out << diceValues[n] << " ";
		}
	}
	else {
		out << "No dice in set";
	}

	return out;
}
