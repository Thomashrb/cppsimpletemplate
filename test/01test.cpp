#include <catch2/catch_test_macros.hpp>
#include <simplemath.hpp>

TEST_CASE("Test 01", "[the first test]") {
  int x = simplemath::addone(1);
  REQUIRE(2 == x);
}
