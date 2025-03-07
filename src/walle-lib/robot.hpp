#pragma once 
#include "environnement.hpp"

<<<<<<< HEAD
=======
#include "environnement.hpp"

/// Décrire un objet.
>>>>>>> 913ef72053885ad8d287b1eaa19c3c34d83d9f1d
class Robot
{

public:
    Robot();
    ~Robot();

    void set_speed(double linear_speed);              ///
    void set_angular_speed(double angular_speed);    ///
    void set_position(int x, int y);


    double get_speed() const;
    double get_angular_speed() const;

    void planter();
    void stop();

    double get_position_x() const { return m_x; }
    double get_position_y() const { return m_y; }


    void run(double dt);

    // return la capacity de la batterie.
    virtual double get_battery_capacity() const {
        return 0;// pas de batterie par défaut because pas le temps de le faire
    };


private:
    double m_x;      /// attributs x = x * orientation * vitesse * dt
    double m_y;
    double m_theta;  /// position angulaire

    double m_speed{0};/// vitesse linéaire
    double m_omega{0};  /// vitesse angulaire

protected:
    Environment* environment {nullptr}; //pointeur
};


