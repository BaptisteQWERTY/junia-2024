#include <gtest/gtest.h>
#include <walle-lib/robot.hpp>

class MonRobotDeTest : public Robot
{
public:
    RobotTest(Environment* e) : Robot(e) {};
    double get_battery_capacity(){ return 0.5; }
};

//test du constructeur
TEST(Robot, test_constructor)
{
    MonRobotDeTest robot{nullptr};

    EXPECT_EQ(robot.get_battery_capacity(), 0.5);
}

//test de la vitesse
TEST(Robot, test_speed)
{
    MonRobotDeTest robot{nullptr};

    robot.set_speed(1);
    EXPECT_EQ(robot.get_speed(), 1);
}

//test de la vitesse angulaire

TEST(Robot, test_angular_speed)
{
    MonRobotDeTest robot{nullptr};

    robot.set_angular_speed(0.5);
    EXPECT_EQ(robot.get_angular_speed(), 0.5);
}


//test de la position
TEST(Robot, test_position)
{
    MonRobotDeTest robot{nullptr};

    robot.set_position(1, 2);
    EXPECT_EQ(robot.get_position_x(), 1);
    EXPECT_EQ(robot.get_position_y(), 2);
}

//test de la fonction stop
TEST(Robot, test_stop)
{
    MonRobotDeTest robot{nullptr};

    robot.set_speed(1);
    robot.set_angular_speed(0.5);
    robot.stop();
    EXPECT_EQ(robot.get_speed(), 0);
    EXPECT_EQ(robot.get_angular_speed(), 0);
}