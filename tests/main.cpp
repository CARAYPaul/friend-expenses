#include "../src/Person.hpp"
#include "../src/Group.hpp"
#include "../src/Donor.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <gtest/gtest.h>

using namespace std;

// This snippet is used to remove error messages from the console
// This can be an ofstream as well or any other ostream
std::stringstream buffer;
// Save cout's buffer here
std::streambuf *sbuf = std::cout.rdbuf();

int main(int argc, char **argv)
{
	// Redirect cout to our stringstream buffer
	std::cout.rdbuf(buffer.rdbuf());

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
