#pragma once
#include <vector>
#include "structures/Graph.h"

class TabuSearch
{
    int **matrix = nullptr;
    int size = 0;
    int searchTime = 0;

    vector<int> randomPermutation(int _size);
    int calculatePath(vector <int> path);

public:
    void apply();
    TabuSearch(Graph graph,int time);
    ~TabuSearch();
};


