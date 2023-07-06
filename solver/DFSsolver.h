//
// Created by ASUS on 05-07-2023.
//
#include<bits/stdc++.h>
#ifndef RUBIKSCUBE_DFSSOLVER_H
#define RUBIKSCUBE_DFSSOLVER_H
#include "../Models/RubiksCube.h"


template<typename T,typename H>
class DFSsolver{
    private:
    vector<RubiksCube::MOVE> moves;
    int max_depth;

    bool dfs(int dep){
        if(rubikscube.isSolved()) return true;
        if(dep>max_depth) return false;
        for(int i=0;i<18;i++)
        {
            rubikscube.move(RubiksCube::MOVE(i));
            moves.push_back(RubiksCube::MOVE(i));
            if(dfs(dep+1)) return true;
            moves.pop_back();
            rubikscube.invert(RubiksCube::MOVE(i));
        }
        return false;
    }
public:
    T rubikscube;

    DFSsolver(T _rubikscube, int _max_search_depth = 8) {
        rubikscube = _rubikscube;
        max_depth = _max_search_depth;
    }

    vector<RubiksCube::MOVE> solve() {
        dfs(1);
        return moves;
    }
};
#endif //RUBIKSCUBE_DFSSOLVER_H