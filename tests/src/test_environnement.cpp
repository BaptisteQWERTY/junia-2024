#include <gtest/gtest.h>
#include <walle-lib/environnement.hpp>

TEST(Environnment, test_constructor) {
    // Creates an environment of size 100m x 100m
    Environment e{100,-100,100,-100};

    EXPECT_EQ(e.left(), -100);
    EXPECT_EQ(e.right(), 100);
    EXPECT_EQ(e.top(), 100);
    EXPECT_EQ(e.bottom(), -100);

}

TEST(Environnment, test_affichage) {
    // Creates an environment of size 100m x 100m
    Environment e{100,-100,100,-100};

    e.affichage_environment();
}

TEST(Environnment, test_constructor2) {
    // Creates an environment of size 100m x 100m
    Environment e{100,-100,100,-100};

    EXPECT_EQ(e.left(), -100);
    EXPECT_EQ(e.right(), 100);
    EXPECT_EQ(e.top(), 100);
    EXPECT_EQ(e.bottom(), -100);

}





