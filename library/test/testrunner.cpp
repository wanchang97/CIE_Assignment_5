#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include"vectorfunctions.h"

TEST_CASE("Dot product") {
	double a[] = { 1,2,3 }; double b[] = { 2,3,4 };
	double result = cie::dotproduct(a, b, 3);
	CHECK(result == 20);
}

TEST_CASE("Euclidean norm") {
	double a[] = { 3,4 };
	double result = cie::Euclidean_norm(a, 2);
	CHECK(result == 5);
}

TEST_CASE("Maximum norm") {
	double a[] = { 6,7,0 };
	double result = cie::max_norm(a, 3);
	CHECK(result == 7);
}