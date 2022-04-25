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

TEST_F (XXTest, TestStringWithSpaces) 
{
    const std::vector<std::string> exampleStringWithSpaces = {
        "main() {",
        "    ",
        "}"
    };
    ASSERT_EQ(2, counter.CountLines(exampleStringWithSpaces));
}

TEST_F (XXTest, TestInclude) 
{
    const std::vector<std::string> exampleStringWithInclude = {
        "#include <string>",
        "main() {",
        "    std::string value = \"Value\"",
        "}"
    };
    ASSERT_EQ(3, counter.CountLines(exampleStringWithInclude));
}


TEST_F(XXTest, TestNamespace) {
    const std::vector<std::string> exampleStringWithNamespace = {
        "#import <string>",
        "using namespace std",
        "main() {",
        "    string value = \"Value\"",
        "}"
    };
    ASSERT_EQ(4, counter.CountLines(exampleStringWithNamespace));
}

TEST_F(XXTest, TestComment) {
    const std::vector<std::string> exampleStringWithComment = {
        "// This main function is sure that one plus one is the same as two",
        "main() {",
        "    1 + 1 == 2;",
        "}"
    };
    ASSERT_EQ(3, counter.CountLines(exampleStringWithComment));
}

TEST_F(XXTest, TestBigComment) {
    const std::vector<std::string> exampleStringWithBigComment = {
        "/*",
        "This main function is sure that one plus one is the same as two",
        "*/",
        "main() {",
        "    1 + 1 == 2;",
        "}"
    };
    ASSERT_EQ(3, counter.CountLines(exampleStringWithBigComment));
}

TEST_F(XXTest, TestBigCommentSameLine) {
    const std::vector<std::string> exampleStringWithBigCommentSameLine = {
        "/* This main function is sure that one plus one is the same as two */",
        "main() {",
        "    1 + 1 == 2;",
        "}"
    };
    ASSERT_EQ(3, counter.CountLines(exampleStringWithBigCommentSameLine));
}

TEST_F(XXTest, TestBigCommentTwiceOpened) {
    const std::vector<std::string> exampleStringWithBigCommentTwiceOpened = {
        "/*",
        "/*",
        "  This main function is sure that one plus one is the same as two",
        "*/",
        "main() {",
        "    1 + 1 == 2;",
        "}"
    };
    ASSERT_EQ(3, counter.CountLines(exampleStringWithBigCommentTwiceOpened));
}