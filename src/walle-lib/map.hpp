#pragma once
#include <vector>
#include "robot.hpp"


class Map {

public:

    Map();
    Map(int taille);

    void afficher_map();
    void init_map();

    void ajouter_arbre(int nombre);
    void ajouter_roche(int nombre);

    bool free_emplacement(int x, int y);
    void afficher_type(int nombre);

    int get_emplacement(int x, int y);
    int get_emplacement_x(int nombre);
    int get_emplacement_y(int nombre);
    int set_emplacement(int x, int y, int message);

    void ajouter_robot(const Robot& robot);
    void deplacer_robot(const Robot& robot);
    //void remove_robot(const Robot& robot);


private:
    int taille = 7;
    std::vector<std::vector<int>> tableau_map;
    std::vector<std::pair<int, int>> parcelle_plantee;
};
