#include <stdio.h>

#include "cube.h"
#include "map.h"

// top left corner, 1st # is front face, 
corner corners[CORNERS] = {
    4, 8, 4, //_0, _0, _0,
    9, 5, 1, //_0, _0, _0,
    7, 6, 3, //_180, _0, _0,
    5, 7, 3, 
    1, 4, 6,
    2, 8, 9,
    6, 7, 2,
    5, 1, 9
};

edge edges[EDGES] = {
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

center centers[CENTERS] = {
    1, 
    4, 
    5, 
    7, 
    1, 
    6
};

map current_map;
map scratch_map;

void count_faces()
{
    int counts[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    for (int i = 0; i < CENTERS; i++)
    {
        counts[centers[i].n - 1]++;
    }

    for (int i = 0; i < EDGES; i++)
    {
        counts[edges[i].n[0] - 1]++;
        counts[edges[i].n[1] - 1]++;
    }

    for (int i = 0; i < CORNERS; i++)
    {
        counts[corners[i].n[0] - 1]++;
        counts[corners[i].n[1] - 1]++;
        counts[corners[i].n[2] - 1]++;
    }

    for (int i = 0; i < 9; i++)
        if (i != 8)
            printf("%d, ", counts[i]);
        else
            printf("%d\n ", counts[i]);

}

int main(void)
{
    count_faces();
    
    return 0;
}