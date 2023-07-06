//
// Created by ASUS on 07-07-2023.
//

#ifndef RUBIKSCUBE_CORNERPATTERNDATABASE_H
#define RUBIKSCUBE_CORNERPATTERNDATABASE_H
#include "../Models/RubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef RubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubiksCube& cube) const;

};
#endif //RUBIKSCUBE_CORNERPATTERNDATABASE_H
