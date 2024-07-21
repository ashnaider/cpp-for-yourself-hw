#include <gtest/gtest.h>

#include "string_trim.h"

TEST(Trim, TrimTestBothSides) {
    std::string lhs = "   abc   ";
    std::string rhs = "abc";
    EXPECT_EQ(no_strings_attached::Trim(lhs), rhs);
}

TEST(Trim, TrimTestBothSidesTrimChInside) {
    std::string lhs = "   abc  def   ";
    std::string rhs = "abc  def";
    EXPECT_EQ(no_strings_attached::Trim(lhs), rhs);
}

TEST(Trim, TrimTestRightSide) {
    std::string lhs = "abc   ";
    std::string rhs = "abc";
    EXPECT_EQ(no_strings_attached::Trim(lhs), rhs);
}

TEST(Trim, TrimTestLeftSide) {
    std::string lhs = "    abc";
    std::string rhs = "abc";
    EXPECT_EQ(no_strings_attached::Trim(lhs), rhs);
}

TEST(Trim, TrimTestEmpty) {
    std::string lhs = "       ";
    std::string rhs = "";
    EXPECT_EQ(no_strings_attached::Trim(lhs), rhs);
}

TEST(Trim, TrimTestRightSideOnly) {
    std::string lhs = "    abc";
    std::string rhs = "    abc";
    EXPECT_EQ(no_strings_attached::Trim(lhs, ' ', no_strings_attached::Side::kRight), rhs);
}

TEST(Trim, TrimTestLeftSideOnly) {
    std::string lhs = "abc    ";
    std::string rhs = "abc    ";
    EXPECT_EQ(no_strings_attached::Trim(lhs, ' ', no_strings_attached::Side::kLeft), rhs);
}

TEST(Trim, TrimTestRightSideExplicit) {
    std::string lhs = "    abc    ";
    std::string rhs = "    abc";
    EXPECT_EQ(no_strings_attached::Trim(lhs, ' ', no_strings_attached::Side::kRight), rhs);
}

TEST(Trim, TrimTestLeftSideExplicit) {
    std::string lhs = "       abc    ";
    std::string rhs = "abc    ";
    EXPECT_EQ(no_strings_attached::Trim(lhs, ' ', no_strings_attached::Side::kLeft), rhs);
}
