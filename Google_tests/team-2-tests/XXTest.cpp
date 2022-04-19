#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Team2Xx.h"

class XXTest: public testing::Test {

protected:

	virtual void SetUp() {
	}

    Team2Xx x;
};

TEST_F (XXTest, TestXXName){
	ASSERT_EQ("Team-2 XX", x.getXx());
}

TEST(XxNoFixture, TestGetXX) {
    Team2Xx x{};
    ASSERT_EQ("Team-2 XX", x.getXx());
}
