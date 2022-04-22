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

TEST_F (XXTest, TestTwoNumberSubtraction){
    ASSERT_EQ(5, x.calculate("7-2"));
}

TEST_F (XXTest, TestTwoOtherNumberSubtraction){
    ASSERT_EQ(19, x.calculate("34-15"));
}

TEST_F (XXTest, TestThreeOperandSum){
    ASSERT_EQ(25, x.calculate("3+7+15"));
}

TEST_F (XXTest, TestThreeOperandMix){
    ASSERT_EQ(-23, x.calculate("7-10*3")); //wtf
}


