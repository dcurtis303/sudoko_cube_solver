#pragma once

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


struct corner {
    unsigned int n[3];
};

struct edge {
    unsigned int n[2];
};

struct center {
    unsigned int n;
};

/** possibly outside scope of project
enum ORIENTATION {
    ORIENTATION_0, ORIENTATION_90, ORIENTATION_180, ORIENTATION_270
};
**/

