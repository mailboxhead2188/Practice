
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "dwr.h"
#include "dwr_types.h"
#include "map.h"
#include "sprites.h"


static void print_usage(const char *command)
{
    printf("Usage %s <rom_file1> <rom_file2> <output_dir>\n", command);
    printf("\n");
    printf("A ROM comparison tool for Dragon Warrior for NES\n");
    printf("\n");
    printf("\n");
}

/*
// Primary routine. Just prints out stats, easy-peasy.
//
*/
static void write_output(dw_rom rom, char* output_dir)
{
    unsigned long i = 0;
    BOOL newFiles = 0;

    printf("Writing out statistics files for randomized data...\n");

    size_t alloc_size = INT16_MAX * sizeof(char);
    // Open up the files and set initialization flag if the files don't exist.
    char *chests = malloc(alloc_size);
    strncpy(chests, output_dir, alloc_size);
    strncat(chests, "chests.csv", alloc_size);

    char *locationPath = malloc(alloc_size);
    strncpy(locationPath, output_dir, alloc_size);
    strncat(locationPath, "locations.csv", alloc_size);

    char *enemyStats = malloc(alloc_size);
    strncpy(enemyStats, output_dir, alloc_size);
    strncat(enemyStats, "enemy_stats.csv", alloc_size);

    char *mpSpellReqs = malloc(alloc_size);
    strncpy(mpSpellReqs, output_dir, alloc_size);
    strncat(mpSpellReqs, "mp_spell_reqs.csv", alloc_size);

    char *mpSpellLevels = malloc(alloc_size);
    strncpy(mpSpellLevels, output_dir, alloc_size);
    strncat(mpSpellLevels, "mp_spell_levels.csv", alloc_size);

    char *zoneLayouts = malloc(alloc_size);
    strncpy(zoneLayouts, output_dir, alloc_size);
    strncat(zoneLayouts, "zone_layouts.csv", alloc_size);

    char *zones = malloc(alloc_size);
    strncpy(zones, output_dir, alloc_size);
    strncat(zones, "zones.csv", alloc_size);

    char *shops = malloc(alloc_size);
    strncpy(shops, output_dir, alloc_size);
    strncat(shops, "shops.csv", alloc_size);

    char *levels = malloc(alloc_size);
    strncpy(levels, output_dir, alloc_size);
    strncat(levels, "levels.csv", alloc_size);

    // Append will create the file if it doesn't exist, so we're safe with just passing in that flag.
    FILE *chestStream = fopen(chests, "a");
    FILE *locationStream = fopen(locationPath, "a");
    FILE *enemyStatsStream = fopen(enemyStats, "a");
    FILE *mpSpellReqsStream = fopen(mpSpellReqs, "a");
    FILE *mpSpellLevelsStream = fopen(mpSpellLevels, "a");
    FILE *zoneLayoutsStream = fopen(zoneLayouts, "a");
    FILE *zonesStream = fopen(zones, "a");
    FILE *shopsStream = fopen(shops, "a");
    FILE *levelsStream = fopen(levels, "a");

    // Each of the stats will now be written in CSV format, which is text-based and simple to parse.

    // Chests
    char* chest_content_map[] = { "ARMOR", "HERB", "KEY", "TORCH", "FAIRY_WATER", "WINGS", "DRAGON_SCALE", "FLUTE",
    "RING", "TOKEN", "GWAELINS_LOVE", "CURSED_BELT", "HARP", "NECKLACE", "STONES", "STAFF", "SWORD", "GOLD" };
    if (newFiles) {
        fprintf(chestStream, "Hash,Flags,Item,Chest Number\n");
    }
    size_t chests_size = sizeof(rom.chests) / sizeof(rom.chests[0]);
    for(i=0; i < chests_size - 1; i++) {
        fprintf(chestStream, "%lu,%s,%lu\n", rom.seed, rom.flags, chest_content_map[rom.chests[i].item - 1], i);
    }

    // Zone layouts
    if (newFiles) {
        fprintf(zoneLayoutsStream, "Hash,Flags,Zone,Value\n");
    }
    for (i=0; i < 32; i++) {
        fprintf(zoneLayoutsStream, "%lu,%lu,%d\n", rom.seed, rom.flags, i, rom.zone_layout[i]);
    }

    // Zones
    int zone;
    if (newFiles) {
        fprintf(zonesStream, "Hash,Flags,Zone,Enemy\n");
    }
    zone = 0;  /* tantegel zone */
    for (i=0; i < 19; i++) {
        fprintf(zonesStream, "%lu,%d,%d\n", rom.seed, rom.flags, zone, rom.zones[zone * 5 + i]);
    }

    // Shops
    char* items[15] = {
            "BAMBOO_POLE", "CLUB", "COPPER_SWORD", "HAND_AXE", "BROAD_SWORD", "FLAME_SWORD",
            "CLOTHES", "LEATHER_ARMOR", "CHAIN_MAIL", "HALF_PLATE", "FULL_PLATE",
            "MAGIC_ARMOR", "SMALL_SHIELD", "LARGE_SHIELD", "SILVER_SHIELD"
    };


    size_t shop_list_size = sizeof(rom.weapon_shops) / sizeof(rom.weapon_shops[0]);
    if (newFiles) {
        fprintf(shopsStream, "Hash,Flags,Shop,Item\n");
    }
    for (i=0; i < 7; i++) {
        for (unsigned long j=0; j < shop_list_size - 1; j++) {
            fprintf(shopsStream, "%lu,%lu,%s\n", rom.seed, rom.flags, i, items[j]);
        }
    }

    // Levels and stat gains
    if (newFiles) {
        fprintf(levelsStream, "Hash,Flags,Level,Strength,Agility,HP,MP\n");
    }
    for (i=0; i < 30; i++) {
        fprintf(levelsStream, "%lu,%lu,%d,%d,%d,%d\n", rom.seed, rom.flags, i, rom.stats[i].str,rom.stats[i].agi,rom.stats[i].hp,rom.stats[i].mp);
    }

    // MP requirements for spells
    char* spell_map[] =  { "HEAL", "HURT", "SLEEP", "RADIANT", "STOPSPELL", "OUTSIDE", "RETURN", "REPEL", "HEALMORE", "HURTMORE" };
    if (newFiles) {
        fprintf(mpSpellReqsStream, "Hash,Flags,Spell,MP Requirements\n");
    }
    for (i=0; i < 10; i++) {
        fprintf(mpSpellReqsStream, "%lu,%s,%d\n", rom.seed, rom.flags, spell_map[i], rom.mp_reqs[i]);
    }

    // Levels when spells are attained
    if (newFiles) {
        fprintf(mpSpellLevelsStream, "Hash,Flags,Spell,Level\n");
    }
    size_t spell_map_size = sizeof(spell_map) / sizeof(spell_map[0]);
    for(i=0; i < spell_map_size; i++)
    {
        fprintf(mpSpellLevelsStream, "%lu,%s,%d\n", rom.seed, rom.flags, spell_map[i], rom.new_spells[i].level);
    }

    // Locations.
    // For the moment we log everything, even if it isn't part of the seed. Personally, I would prefer that, as we can filter on the
    // receiving end, but if anybody feels strongly I'm happy to do the standard checks and omit those items that aren't useful.
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Rainbow Bridge", rom.map.rainbow_bridge->x, rom.map.rainbow_bridge->y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Tantegel", rom.map.warps_from[WARP_TANTEGEL].x,rom.map.warps_from[WARP_TANTEGEL].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Charlock", rom.map.warps_from[WARP_CHARLOCK].x,rom.map.warps_from[WARP_CHARLOCK].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Erdrick's Cave", rom.map.warps_from[WARP_ERDRICKS_CAVE].x,rom.map.warps_from[WARP_ERDRICKS_CAVE].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Garinham", rom.map.warps_from[WARP_GARINHAM].x,rom.map.warps_from[WARP_GARINHAM].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Garin's Grave", rom.map.warps_from[WARP_GARINS_GRAVE].x,rom.map.warps_from[WARP_GARINS_GRAVE].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Garin's Grave (Pointless)", rom.map.warps_from[WARP_GARINS_GRAVE_POINTLESS].x,rom.map.warps_from[WARP_GARINS_GRAVE_POINTLESS].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Hauksness", rom.map.warps_from[WARP_HAUKSNESS].x,rom.map.warps_from[WARP_HAUKSNESS].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Jerk Cave", rom.map.warps_from[WARP_JERK_CAVE].x,rom.map.warps_from[WARP_JERK_CAVE].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Kol", rom.map.warps_from[WARP_KOL].x,rom.map.warps_from[WARP_KOL].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Mountain Cave", rom.map.warps_from[WARP_MOUNTAIN_CAVE].x,rom.map.warps_from[WARP_MOUNTAIN_CAVE].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Mountain Cave (Pointless)", rom.map.warps_from[WARP_MOUNTAIN_CAVE_POINTLESS].x,rom.map.warps_from[WARP_MOUNTAIN_CAVE_POINTLESS].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Rimuldar", rom.map.warps_from[WARP_RIMULDAR].x,rom.map.warps_from[WARP_RIMULDAR].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Staff Shrine", rom.map.warps_from[WARP_STAFF_SHRINE].x,rom.map.warps_from[WARP_STAFF_SHRINE].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Swamp North", rom.map.warps_from[WARP_SWAMP_NORTH].x,rom.map.warps_from[WARP_SWAMP_NORTH].y);
    fprintf(locationStream, "%lu,%s,%d,%d\n", rom.seed, rom.flags, "Swamp South", rom.map.warps_from[WARP_SWAMP_SOUTH].x,rom.map.warps_from[WARP_SWAMP_SOUTH].y);

    // Enemy stats and abilities
    char* enemies[] = { "SLIME", "RED_SLIME", "DRAKEE", "GHOST", "MAGICIAN", "MAGIDRAKEE", "SCORPION", "DRUIN", "POLTERGEIST",
                       "DROLL", "DRAKEEMA", "SKELETON", "WARLOCK", "METAL_SCORPION", "WOLF", "WRAITH", "METAL_SLIME", "SPECTER",
                       "WOLFLORD", "DRUINLORD", "DROLLMAGI", "WYVERN", "ROGUE_SCORPION", "WRAITH_KNIGHT", "GOLEM", "GOLDMAN",
                       "KNIGHT", "MAGIWYVERN", "DEMON_KNIGHT", "WEREWOLF", "GREEN_DRAGON", "STARWYVERN", "WIZARD", "AXE_KNIGHT",
                       "BLUE_DRAGON", "STONEMAN", "ARMORED_KNIGHT", "RED_DRAGON", "DRAGONLORD_1", "DRAGONLORD_2" };
    size_t enemy_list_size = sizeof(enemies) / sizeof(enemies[0]);

    if (newFiles) {
        fprintf(enemyStatsStream, "Hash,Flags,Enemy Name,Agility,Gold,HP,HR Dodge,Pattern,Resist,Strength,HP\n");
    }
    for(i=0; i < enemy_list_size; i++)
    {
        fprintf(enemyStatsStream,
                "%lu,%s,%d,%d,%d,%d,%d,%d,%d,%d\n",
                rom.seed, rom.flags,
                enemies[i],
                rom.enemies[i].agi,
                rom.enemies[i].gold,
                rom.enemies[i].hp,
                rom.enemies[i].hr_dodge,
                rom.enemies[i].pattern,
                rom.enemies[i].s_ss_resist,
                rom.enemies[i].str,
                rom.enemies[i].xp
               );
    }

    // TODO: Call map_decode from map.c and print out the tile types.

    fclose(chestStream);
    fclose(locationStream);
    fclose(enemyStatsStream);
    fclose(mpSpellReqsStream);
    fclose(mpSpellLevelsStream);
    fclose(zoneLayoutsStream);
    fclose(zonesStream);
    fclose(shopsStream);
    fclose(levelsStream);


    free(chests);
    free(locationPath);
    free(enemyStats);
    free(mpSpellReqs);
    free(mpSpellLevels);
    free(zoneLayouts);
    free(zones);
    free(shops);
    free(levels);
}

int main(int argc, char **argv)
{
    char *input_file1, *input_file2, *output_dir;

    printf("DWZ ROM comparison version %s\n", VERSION);
    if (argc < 4) {
        print_usage(argv[0]);
        exit(0);
    }

    input_file1 = argv[1];
    input_file2 = argv[2];
    output_dir = argv[3];

    dw_rom rom1;
    dw_rom rom2;
    if (!dwr_init(&rom1, input_file1, NULL)) {
        printf("Could not scan rom %s", input_file1);
        print_usage(argv[0]);
        return 1;
    }

    if (!dwr_init(&rom2, input_file2, NULL)) {
        printf("Could not scan rom %s", input_file2);
        print_usage(argv[0]);
        return 1;
    }
    printf("Decoding of both ROMs successful. Writing out results...");

    write_output(rom1, strcat(output_dir, "rom1"));
    write_output(rom2, strcat(output_dir, "rom2"));

    return 0;
}

