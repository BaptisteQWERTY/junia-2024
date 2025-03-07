#include <gtest/gtest.h>
#include <walle-lib/vector2.hpp>

TEST(Vector2, test_constructor) {
    Vector2 v{1, 2};

    EXPECT_EQ(v.x(), 1);
    EXPECT_EQ(v.y(), 2);
}

TEST(Vector2, test_addition) {
    Vector2 v1{1, 2};
    Vector2 v2{3, 4};

    Vector2 v3 = v1 + v2;

    EXPECT_EQ(v3.x(), 4);
    EXPECT_EQ(v3.y(), 6);
}
