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

<<<<<<< HEAD
//test de la vitesse angulaire

TEST(Robot, test_angular_speed)
{
    MonRobotDeTest robot{nullptr};

    robot.set_angular_speed(0.5);
    EXPECT_EQ(robot.get_angular_speed(), 0.5);
=======
TEST(Robot, test_move_forward) {
    Environment e;
    MonRobotDeTest mon_robot{&e};
    float x0 = mon_robot.get_position_x();
    float y0 = mon_robot.get_position_y();
    mon_robot.set_speed(0.5);
    mon_robot.run(0.01);
    float x1 = mon_robot.get_position_x();
    float y1 = mon_robot.get_position_y();

    float dx = x1 - x0;
    float dy = y1 - y0;
    float d = sqrt(dx*dx + dy*dy);


    EXPECT_NEAR(d, 0.5*0.01, 0.00001);
>>>>>>> 913ef72053885ad8d287b1eaa19c3c34d83d9f1d
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