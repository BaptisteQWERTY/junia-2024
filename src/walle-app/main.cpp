#include <iostream>
#include <walle-lib/robot.hpp>


/// Les unités sont en mètre,
int main(int argc, char** argv)
{
<<<<<<< HEAD
	Robot robot;
	robot.set_speed(1);
	robot.set_angular_speed(0.5);
	robot.set_position(0, 0);
	robot.run(1);
	std::cout << "Position x : " << robot.get_position_x() << std::endl;
	std::cout << "Position y : " << robot.get_position_y() << std::endl;
	return 0;

=======
    // Créé en mémoire l'environment;
    Environment un_environment{-100,100,-100,100};

	std::cout << "Hello world" << std::endl;

    /// dt en seconde
    double dt = 0.01;
    double t = 0;
    for(t=0;t<10;t+=dt)
    {
    }
>>>>>>> 913ef72053885ad8d287b1eaa19c3c34d83d9f1d
}
