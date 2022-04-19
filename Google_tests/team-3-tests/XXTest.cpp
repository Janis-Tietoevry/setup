#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Team3Xx.h"

class XXTest: public testing::Test {

protected:

	virtual void SetUp() {
	}

    Team3Xx x;
};

TEST_F (XXTest, TestXXName){
	ASSERT_EQ("Team-3 XX", x.getXx());
}

TEST(XxNoFixture, TestGetXX) {
    Team3Xx x{};
    ASSERT_EQ("Team-3 XX", x.getXx());
}
