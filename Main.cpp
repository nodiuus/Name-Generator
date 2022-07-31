#include <iostream>
#include <stdio.h>
#include "time.h"

#define string std::string
#define cin std::cin
#define endl std::endl

#define print(String) std::cout << String << endl;

namespace RandomNameGenerator {
	string FirstNames[] = { "Ian",    "Oliver", "Joseph",  "Jane",   "Nate",  "Harry", "Lewis", "Mario", "Luigi",  "Nelson", "Cooper", "Jordan", "Cole",   "Ford",   "Saul", "Jane" };
	string LastNames[] = { "Smiths", "Boggs",  "Clinton", "McCain", "Jones", "Adams", "King",  "Hill",  "Nelson", "Evans",  "Diaz",   "Cook",   "Morgan", "Cooper", "Cole", "Goodmen" };

	string GenerateName() {
		srand(time(NULL));

		int RandomIndex = rand() % 15;
		int RandomIndexTwo = rand() % 15;

		string Input;

		string FirstName = RandomNameGenerator::FirstNames[RandomIndex];
		string LastName  = RandomNameGenerator::LastNames[RandomIndexTwo];
		string FullName  = FirstName + " " + LastName;

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
}