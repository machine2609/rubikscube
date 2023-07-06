//
// Created by ASUS on 07-07-2023.
//

#ifndef RUBIKSCUBE_CORNERDBMAKER_H
#define RUBIKSCUBE_CORNERDBMAKER_H
#include "CornerPatternDatabase.h"
#include "../Models/RubiksCubeBitboard.cpp"
#include<bits/stdc++.h>
//using namespace std;
class CornerDBMaker {
private:
    std::string fileName;
    CornerPatternDatabase cornerDB;

public:
    CornerDBMaker(string _fileName);
    CornerDBMaker(string _fileName, uint8_t init_val);

    bool bfsAndStore();
};
#endif //RUBIKSCUBE_CORNERDBMAKER_H
