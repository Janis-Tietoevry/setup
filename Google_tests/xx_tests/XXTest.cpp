#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Xx.h"

class XXTest: public testing::Test {

protected:

	virtual void SetUp() {
	}
};

TEST_F (XXTest, TestXXName){
    Xx x{};
	ASSERT_EQ("XX", x.getXx());
}

