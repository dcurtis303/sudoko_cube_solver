#include "map.h"

void map::fill_map(void)
{
    for (int i = 0; i < FACES; i++)
    {
        for (int j = 0; j < CENTERS; j++)
            m_face[i].m_center = centers[j];

        for (int j = 0; j < CORNERS; j++)
            m_face[i].m_corners[j] = corners[j];

        for (int j = 0; j < EDGES; j++)
            m_face[i].m_edges[j] = edges[j];
    }
}

void map::print_map()
{

}