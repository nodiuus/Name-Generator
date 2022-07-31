#include <iostream>
#include <stdio.h>
#include "time.h"

#define string std::string
#define cin std::cin
#define endl std::endl
#define cout std::cout

#define print(String) cout << String << endl;

namespace RandomNameGenerator {
	const int ArraySize = 16;

	string FirstNames[ArraySize] = { "Ian",    "Oliver", "Joseph",  "Jane",   "Nate",  "Harry", "Lewis", "Mario", "Luigi",  "Nelson", "Cooper", "Jordan", "Cole",   "Ford",   "Saul", "Jane" };
	string LastNames[ArraySize]  = { "Smiths", "Boggs",  "Clinton", "McCain", "Jones", "Adams", "King",  "Hill",  "Nelson", "Evans",  "Diaz",   "Cook",   "Morgan", "Cooper", "Cole", "Goodmen" };

	string GenerateName() {
		srand(time(NULL));

		int RandomIndex = rand() % ArraySize;
		int RandomIndexTwo = rand() % ArraySize;

		string Input;

		string FirstName = RandomNameGenerator::FirstNames[RandomIndex];
		string LastName = RandomNameGenerator::LastNames[RandomIndexTwo];
		string FullName = FirstName + " " + LastName;

		print("Generated Name, are you okay with this name?")
		print("Y / N")
		print(FullName)

		cin >> Input;
		
		if (Input == "y" || Input == "Y") {
			return FullName;
		} else if (Input == "n" || Input == "N") {
			return GenerateName();
		}
	}
}


int main() {
	RandomNameGenerator::GenerateName();
	return 0;
}