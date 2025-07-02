#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include <string>
using namespace testing;
using std::string;

class PrimeFactorFixter : public Test {
    PrimeFacotrs prmeFactors;
public:
    void checkValue(int num, string expected) {
        EXPECT_EQ(expected, prmeFactors.getResult(num));
    }
};

TEST_F(PrimeFactorFixter, PrimeTest2) {
    checkValue(2, "[2]");
}

TEST_F(PrimeFactorFixter, PrimeTest3) {
    checkValue(3, "[3]");
}

TEST_F(PrimeFactorFixter, PrimeTest4) {
    checkValue(4, "[2,2]");
}

TEST_F(PrimeFactorFixter, PrimeTest6) {
    checkValue(6, "[2,3]");
}

TEST_F(PrimeFactorFixter, PrimeTest8) {
    checkValue(8, "[2,2,2]");
}

TEST_F(PrimeFactorFixter, PrimeTest9) {
    checkValue(9, "[3,3]");
}

TEST_F(PrimeFactorFixter, PrimeTest12) {
    checkValue(12, "[2,2,3]");
}

TEST_F(PrimeFactorFixter, PrimeTest14) {
    checkValue(14, "[2,7]");
}

TEST_F(PrimeFactorFixter, PrimeTest15) {
    checkValue(15, "[3,5]");
}
