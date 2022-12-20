#include "map.h"

void map::fill_map(void)
{
    for (int i = 0; i < FACES; i++)
    {
        for (int j = 0; j < CENTERS; j++)
            m_face[i].m_center = rl_centers[j];

        for (int j = 0; j < CORNERS; j++)
            m_face[i].m_corners[j] = rl_corners[j];

        for (int j = 0; j < EDGES; j++)
            m_face[i].m_edges[j] = rl_edges[j];
    }
}

void map::print_map()
{

}