#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify roll between 1 and 6")
{
	Die a;
	REQUIRE((a.rolled_value() <= 6 && a.rolled_value()>= 1));
}

TEST_CASE("Roll 10 times")
{
	Die a;
	for(int i = 0; i < 10; i++)
	{
		REQUIRE((a.rolled_value() <= 6 && a.rolled_value()>= 1));
	}
}