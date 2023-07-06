cmake_minimum_required(VERSION 3.25)
project(rubikscube)

set(CMAKE_CXX_STANDARD 17)

add_executable(rubikscube Models/RubiksCube.cpp Models/RubiksCube.h Models/RubiksCube3dArray.cpp Models/RubiksCube1dArray.cpp Models/RubiksCubeBitboard.cpp main.cpp solver/DFSsolver.h solver/BFSsolver.h solver/IDDFSsolver.h solver/IDAstarsolver.h PatternDatabases/CornerPatternDatabase.h PatternDatabases/NibbleArray.h PatternDatabases/NIbbleArray.cpp PatternDatabases/PatternDatabase.cpp PatternDatabases/PatternDatabase.h PatternDatabases/math.h PatternDatabases/math.cpp PatternDatabases/PermutationIndexer.h PatternDatabases/CornerPatternDatabse.cpp PatternDatabases/CornerDBMaker.h PatternDatabases/CornerDBMaker.cpp)
