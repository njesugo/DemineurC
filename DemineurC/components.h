#ifndef __COMPONENT__H__

#define __COMPONENT__H__

#include <stdio.h>

struct caseDemineur{
    int state;
    char content;
};
typedef struct caseDemineur CaseDemineur;

struct mapDemineur{
    CaseDemineur **tab;
    int length;
    int width;

};
typedef struct mapDemineur MapDemineur;

struct partieDemineur{
    FILE* backup;
    MapDemineur* map;
    int time;
    int state;
};
typedef struct partieDemineur PartieDemineur;

#endif