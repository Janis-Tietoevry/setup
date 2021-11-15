#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Xx.h"

class XXTest: public testing::Test {

protected:

	virtual void SetUp() {
	}

    Xx x;
};

TEST_F (XXTest, TestXXName){
	ASSERT_EQ("XX", x.getXx());
}

TEST(XxNoFixture, TestGetXX) {
    Xx x{};
    ASSERT_EQ("XX", x.getXx());
}
