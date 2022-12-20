#include "rl_cube.h"

corner rl_corners[CORNERS] = {
    4, 8, 4, //_0, _0, _0,
    9, 5, 1, //_0, _0, _0,
    7, 6, 3, //_180, _0, _0,
    5, 7, 3, 
    1, 4, 6,
    2, 8, 9,
    6, 7, 2,
    5, 1, 9
};

edge rl_edges[EDGES] = {
    9, 8,
    2, 4,
    9, 6,
    6, 7,
    3, 9, 
    2, 3,
    3, 4,
    3, 2,
    5, 8, 
    2, 5,
    1, 7,
    8, 8
};

center rl_centers[CENTERS] = {
    1, 
    4, 
    5, 
    7, 
    1, 
    6
};

