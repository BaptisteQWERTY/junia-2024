#include <iostream>
#include <walle-lib/robot.hpp>


/// Les unités sont en mètre,
int main(int argc, char** argv)
{
	Robot robot;
	robot.set_speed(1);
	robot.set_angular_speed(0.5);
	robot.set_position(0, 0);
	robot.run(1);
	std::cout << "Position x : " << robot.get_position_x() << std::endl;
	std::cout << "Position y : " << robot.get_position_y() << std::endl;
	return 0;

}
