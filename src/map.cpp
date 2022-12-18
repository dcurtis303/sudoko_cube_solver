#include "map.h"

void map::fill_map(void)
{
    for (int i = 0; i < CENTERS; i++)
        m_center[i] = centers[i];

    for (int i = 0; i < EDGES; i++)
        m_edge[i] = edges[i];

    for (int i = 0; i < CORNERS; i++)
        m_corner[i] = corners[i];
}

void map::print_map()
{

}