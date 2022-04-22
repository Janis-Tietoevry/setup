#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Team3Xx.h"

class XXTest: public testing::Test {

protected:
    void SetUp() override {
    }
    Team3Xx x;
};
TEST_F (XXTest, TestEmptyString){
    ASSERT_EQ(0, x.calculate(""));
}

TEST_F (XXTest, TestTwoNumberSum){
    ASSERT_EQ(3, x.calculate("1+2"));
}

TEST_F (XXTest, TestSingleNumber){
    ASSERT_EQ(30, x.calculate("30"));
}

TEST_F (XXTest, TestTwoNumberMultiplication){
    ASSERT_EQ(15, x.calculate("5*3"));
}
