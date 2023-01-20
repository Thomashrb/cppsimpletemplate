#include <catch2/catch_test_macros.hpp>
#include <simpleconstants.hpp>

TEST_CASE("Test 02-1", "[the first second test]") { REQUIRE(simpleconstants::FIVE == 5); }

TEST_CASE("Test 02-1", "[the second second test]") { REQUIRE(simpleconstants::ONE_HUNDRED == 100); }
