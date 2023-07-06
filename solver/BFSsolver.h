//
// Created by ASUS on 05-07-2023.
//

#ifndef RUBIKSCUBE_BFSSOLVER_H
#define RUBIKSCUBE_BFSSOLVER_H
#include "../Models/RubiksCube.h"
#include<bits/stdc++.h>
template<typename T,typename H>

class BFSsolver{
private:
    vector<RubiksCube::MOVE> moves;
    unordered_map<T,bool,H> visited;
    unordered_map<T,RubiksCube::MOVE,H> move_done;
    T bfs(){
        queue<T> q;
        q.push(rubikscube);
        visited[rubikscube] = true;
        while(!q.empty()){
            T node = q.front();
            q.pop();
            if(node.isSolved()){
                return node;
            }
            for(int i=0;i<18;i++)
            {
                auto curr_move = RubiksCube::MOVE(i);
                node.move(curr_move);
                if(!visited[node]){
                    visited[node] = true;
                    move_done[node] = curr_move;
                    q.push(node);
                }
                node.invert(curr_move);
            }
        }
        return rubikscube;

    }
public:
    T rubikscube;

    BFSsolver(T _rubiksCube) {
        rubikscube = _rubiksCube;
    }
    vector<RubiksCube::MOVE> solve(){
        T solved_cube = bfs();
        assert(solved_cube.isSolved());
        T curr_cube = solved_cube;
        while(!(curr_cube==rubikscube)){
            RubiksCube::MOVE curr_move = move_done[curr_cube];
            moves.push_back(curr_move);
            curr_cube.invert(curr_move);
        }
        rubikscube = solved_cube;
        reverse(moves.begin(),moves.end());
        return moves;

    }
};
#endif //RUBIKSCUBE_BFSSOLVER_H
