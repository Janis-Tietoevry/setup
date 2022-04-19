#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Team1Xx.h"

class XXTest: public testing::Test {

protected:

	virtual void SetUp() {
	}

    Team1Xx x;
};

TEST_F (XXTest, TestXXName){
	ASSERT_EQ("Team-1 XX", x.getXx());
}

TEST(XxNoFixture, TestGetXX) {
    Team1Xx x{};
    ASSERT_EQ("Team-1 XX", x.getXx());
}
