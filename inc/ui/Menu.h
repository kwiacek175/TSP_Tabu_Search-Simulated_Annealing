#pragma once
#include <string>
#include "structures/Graph.h"

class Menu
{
    std::string menu="";
    std::string pathfile = "";
    Graph graph;
    int time=0;
    double temperatureFactor=0;

public:
    void enable();
    Menu();
    ~Menu();
};

