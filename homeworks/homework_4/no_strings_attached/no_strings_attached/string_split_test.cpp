#include <gtest/gtest.h>

#include "string_split.h"

TEST(Split, TestSplitHelloWorld) {
    std::string lhs = "Hello World";
    std::vector<std::string> rhs = {"Hello", "World"};
    std::string delim = " ";
    EXPECT_EQ(no_strings_attached::Split(lhs, delim), rhs);
}

TEST(Split, TestSplitAbba) {
    std::string lhs = "aaabaaba";
    std::vector<std::string> rhs = {"", "ab", "ba"};
    std::string delim = "aa";
    EXPECT_EQ(no_strings_attached::Split(lhs, delim), rhs);
}

TEST(Split, TestSplitPaddings) {
    std::string lhs = "xxabxxxcdxxxx";
    std::vector<std::string> rhs = {"", "ab", "xcd", "", ""};
    std::string delim = "xx";
    EXPECT_EQ(no_strings_attached::Split(lhs, delim), rhs);
}

TEST(Split, TestSplitKeepNeq1) {
    std::string lhs = "hello world";
    std::vector<std::string> rhs = {"hello"};
    int keep_n = 1;
    std::string delim = " ";
    EXPECT_EQ(no_strings_attached::Split(lhs, delim, keep_n), rhs);
}

TEST(Split, TestSplitKeepNeq2) {
    std::string lhs = "hello world";
    std::vector<std::string> rhs = {"hello", "world"};
    int keep_n = 2;
    std::string delim = " ";
    EXPECT_EQ(no_strings_attached::Split(lhs, delim, keep_n), rhs);
}

TEST(Split, TestSplitAbbaKeepNeq2) {
    std::string lhs = "aaabaaba";
    std::vector<std::string> rhs = {"", "ab"};
    int keep_n = 2;
    std::string delim = "aa";
    EXPECT_EQ(no_strings_attached::Split(lhs, delim, keep_n), rhs);
}
