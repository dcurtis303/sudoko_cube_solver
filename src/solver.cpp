#include <stdio.h>

#include "cube.h"
#include "map.h"

corner corners[8] = {
    4, 8, 4,
    1, 5, 9,
    6, 3, 7,
    5, 7, 3,
    1, 4, 6,
    2, 8, 9,
    6, 7, 2,
    5, 1, 9
};

edge edges[12] = {
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

center centers[6] = {
    1, 
    4, 
    5, 
    7, 
    1, 
    6
};

map current_map;
map scratch_map;


int main(void)
{
    // fill map
    

    return 0;
}