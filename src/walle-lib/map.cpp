#include "map.hpp"
#include <iostream>
#include <ostream>
#include <vector>
#include <utility>


Map::Map()  : tableau_map(taille, std::vector<int>(taille)){
    taille = 4;
    init_map();
}

Map::Map(int taille) : tableau_map(taille, std::vector<int>(taille)){
    this -> taille = taille;
    init_map();
}

void Map::init_map() {
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            tableau_map[i][j] = 0;
        }
    }
}

void Map::afficher_map() {
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            std::cout << tableau_map[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Map::ajouter_arbre(int nombre) {
    for (int i = 0; i < nombre; i++) {
        int x = rand() % taille;
        int y = rand() % taille;
        if (tableau_map[x][y] == 0) {
            tableau_map[x][y] = 1;
        }
    }
}

void Map::ajouter_roche(int nombre) {
    for (int i = 0; i < nombre; i++) {
        int x = rand() % taille;
        int y = rand() % taille;
        if (tableau_map[x][y] == 0) {
            tableau_map[x][y] = 2;
        }
    }
}

bool Map::free_emplacement(int x, int y) {
    if (tableau_map[x][y] == 0) {
        return true;
    }
    return false;
}

void Map::afficher_type(int nombre) {
    for (int i = 0; i < nombre; i++) {
        std::cout << i << " : ";
        if (i == 0) {
            std::cout << "Arbre" << std::endl;
        }
        else if (i == 1) {
            std::cout << "roche" << std::endl;
        }
        else {
            std::cout << "Inconnu" << std::endl;
        }
    }
}


int Map::get_emplacement(int x, int y) {
    return tableau_map[x][y];
}

int Map::get_emplacement_x(int nombre) {
    return parcelle_plantee[nombre].first;
}

int Map::get_emplacement_y(int nombre) {
    return parcelle_plantee[nombre].second;
}

int Map::set_emplacement(int x, int y, int message) {
    tableau_map[x][y] = message;
    return tableau_map[x][y];
}

void Map::ajouter_robot(const Robot& robot) {
    int x = rand() % taille;
    int y = rand() % taille;
    if (tableau_map[x][y] == 0) {
        tableau_map[x][y] = 3;
        parcelle_plantee.push_back(std::make_pair(x, y));
    }
}

void Map::deplacer_robot(const Robot& robot) {
    int x = get_emplacement_x(0);
    int y = get_emplacement_y(0);
    int deplacement = rand() % 4;
    if (deplacement == 0) {
        if (x > 0 && x < taille) {
            x++;
        }
        else {
            x--;
        }
    }
    else if (deplacement == 1) {
        if (x > 0 && x < taille) {
            x--;
        }
        else {
            x++;
        }
    }
    else if (deplacement == 2) {
        if (y > 0 && y < taille) {
            y++;
        }
        else {
            y--;
        }
    }
    else {
        if (y > 0 && y < taille) {
            y--;
        }
        else {
            y++;
        }
    }
    set_emplacement(x, y, 3);
}





