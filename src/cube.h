#pragma once

// 9 * 6 = 54, 3 * 8 + 12 * 2 + 6 = 54
// 6 faces
// 9 squares per face
// 3 types of pieces; center, edge, and corner
// orientation will be face rotation from parent
// each face has list of intrinsicaly connected faces, with orientation
// each face has list of solved partners, with orientation
// a center will have 1 face
// a edges will have 2 faces
// a corner will have 3 faces

#define CORNERS 8
#define EDGES 12
#define CENTERS 6
#define FACES 6

enum ORIENTATION {
    _0, _90, _180, _270
};

struct corner {
    int n[3];
    //ORIENTATION orientation[3];
};

struct edge {
    int n[2];
    //ORIENTATION orientation[2];
};

struct center {
    int n;
};

struct face
{
    corner m_corners[4];
    edge m_edges[4];
    center m_center;
};

extern corner corners[];
extern edge edges[];
extern center centers[];
