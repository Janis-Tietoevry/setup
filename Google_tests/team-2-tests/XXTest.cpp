#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Team2LineCounter.h"
#include <vector>

class XXTest: public testing::Test {

protected:

    virtual void SetUp() {
    }

    Team2LineCounter counter;
};


TEST_F (XXTest, TestStringWithOneLine)
{
    const std::vector<std::string> exampleStringWithOneLine = {"main() { 1+1 == 2; } "};
    ASSERT_EQ(1, counter.CountLines(exampleStringWithOneLine));
}

TEST_F (XXTest, TestStringWithThreeLines)
{
    const std::vector<std::string> exampleStringWithThreeLines = {
        "main() {",
        "    1+1 == 2;",
        "}"
    };
    ASSERT_EQ(3, counter.CountLines(exampleStringWithThreeLines));
}

//TEST_F(XXTest, TestNamespace) {
//    const std::string exampleNamespace = "namespace testNamespace { }";
//    ASSERT_EQ(1, counter.CountLines(exampleNamespace));
//}
