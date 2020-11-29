
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "map.h"

#define FILL_ITERATIONS 12
#define MAX_FILL_BLOB   7000
#define MIN_LM_SIZE     400   /* minimum size for a land_mass to use */
#define RIVER_COUNT     25
#define MIN_WALKABLE    5000
#define MAP_ENCODED_SIZE 2294

enum {
    KEY_IN_MOUNTAIN = 1,
    KEY_IN_GRAVE    = 2,
    KEY_IN_BASEMENT = 4,
    KEY_IN_TABLET   = 8
};

#define VAN_SPOT_COUNT 13

static const uint8_t vanilla_spots[VAN_SPOT_COUNT][2] = {
    /* vanilla place locations */
    { 43, 43 },
    { 48, 41 },
    {  2,  2 },
    {104, 10 },
    { 81,  1 },
    { 28, 12 },
    { 25, 89 },
    { 73,102 },
    {102, 72 },
    {108,109 },
    {104, 44 },
    { 29, 57 },
    {104, 49 },
    /* extra locations 
    { 83,113 },
    { 40, 82 },
    { 13,107 },
    { 67, 86 },
    { 68, 82 },
    { 75, 82 },
    { 67, 77 },
    {112, 26 },
    {114, 37 }, */
};

static inline int map_ob(int x) {
    return (x < 0 || x > 119);
}

/**
 * Shifts bytes in memory 1 to the left. Shifts [start+1, end) to [start, end-1)
 * This is used for map encoding optimization.
 *
 * @param start A pointer to the location of the new location of the bytes
 * @param end A pointer to the end of the old bytes
 */
static void shift_bytes(uint8_t *start, uint8_t *end)
{
    uint8_t *p;
    --end;

    for (p = start; p < end; p++) {
        *p = *(p + 1);
    }
}

/**
 * Decodes the in-game map into a 2 dimentional array of tiles
 *
 * @param map The map struct
 */
void map_decode(dw_map *map)
{
    uint8_t x, y, *e, tile, count;

    for (y=0; y < 120; y++) {
        /* get a pointer to the beginning of the row */
        e = &map->encoded[map->pointers[y] - 0x9d5d];
        /* assign the pointer value to current */
        tile = *e >> 4;
        count = *e & 0xf;
        for (x=0; x < 120; x++) {
            /* fill in each column in the row */
            map->tiles[x][y] = tile;
            if (!count) {
                ++e;
                tile = *e >> 4;
                count = *e & 0xf;
            } else {
                count--;
            }
        }
    }
}
