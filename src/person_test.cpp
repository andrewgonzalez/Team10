//
// Created by Andrew Gonzalez on 11/6/18.
// Unit tests for Person class.
// This is meant to be the entry point for running tests on the Person class.
//

#include <gtest/gtest.h>
#include "Person.h"


TEST(PersonTest, DefaultConstructor) {
    Person test;
    ASSERT_EQ(test.compare(0), true);
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
