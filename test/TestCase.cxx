#include "../include/CookiePackaging.hh"
#include "../include/catch2/catch.hh"

TEST_CASE("Example input data is correct", "[]") {
  CookiePackaging obj(12345);
  obj.calculate();

  REQUIRE(obj.getTotalCookies() == 12345);
  REQUIRE(obj.getTotalBoxes() == 514);
  REQUIRE(obj.getTotalContainers() == 6);
  REQUIRE(obj.getLeftoverCookies() == 9);
  REQUIRE(obj.getLeftoverBoxes() == 64);
}
