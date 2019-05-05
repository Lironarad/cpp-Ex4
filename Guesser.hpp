#pragma once

#include <string>


namespace bullpgia {
	class Guesser {
		public:
			uint length;
			virtual std::string guess(){return NULL;};
			virtual void startNewGame(uint theLength){};
			virtual void learn(std::string){};
 	};
}