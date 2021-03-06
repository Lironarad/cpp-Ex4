#pragma once
#include "Guesser.hpp"
#include "calculate.hpp"
#include <unordered_set>
#include <math.h>
#include <iostream>


/**
 * ConstantGuesser is a guesser that always guesses the same string.
 */
class SmartGuesser: public bullpgia::Guesser {
	private:
		std::string Guess;
		std::unordered_set<std::string> _set;
		void full_search();

	public:
		std::string guess() override;
		void startNewGame(uint Length) override;
		void learn(std::string response) override;
};

