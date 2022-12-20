#include <stdio.h>

#include "cube.h"
#include "map.h"

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
            printf("%d\n", counts[i]);

}

int main(void)
{
    count_faces();

    current_map.fill_map();
    current_map.print_map();
    
    return 0;
}