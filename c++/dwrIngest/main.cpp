/*
 * All of this is super hard-coded. I don't care, it gets the job done.
 * Except that I do care, and I'll probably change it at some later date. Damn it, future Matt...
*/
#include <fstream>
#include <iostream>
#include <pqxx/pqxx>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace pqxx;

std::vector<std::string> SplitString(std::string line)
{
    std::vector<std::string> results;
    boost::split(results, line, boost::is_any_of(","));
    return results;
}

int main(int argc, char* argv[]) {
    connection C("dbname = dwrandomizer user = postgres password = password hostaddr = 24.16.59.136 port = 5432");
    if (C.is_open()) {
        cout << "Opened database successfully: " << C.dbname() << endl;
    } else {
        cout << "Can't open database" << endl;
        return 1;
    }

    std::string line;
    std::vector<std::string> splitString;

    std::ifstream currFile("/home/mcortez/ROMs/DWR/zones.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */
        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"Zones\" (\"Zone\",\"Enemy\",\"Hash\") VALUES (" + splitString[2] + ", '" + splitString[1] + "', '" + splitString[0] + "')");
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/zone_layouts.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */
        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"Zone_Layouts\" (\"Hash\",\"Zone\",\"Zone_X\",\"Zone_Y\") VALUES ('" + splitString[0] + "', " + splitString[1] + ", " + splitString[2] + ", " + splitString[3] + ")" );
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/shops.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line)) {
                splitString = SplitString(line);
                  /* Create SQL statement */
        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"Shops\" (\"Hash\",\"Shop\",\"Item\") VALUES ('" + splitString[0] + "', " + splitString[1] + ", '" + splitString[2] + "')" );
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/mp_spell_reqs.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */

        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"MP_Spell_Reqs\" (\"Hash\",\"Spell\",\"MP Requirements\") VALUES ('" + splitString[0] + "', '" + splitString[1] + "', " + splitString[2] + ")" );
        W   .commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/mp_spell_levels.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */
        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"MP_Spell_Levels\" (\"Hash\",\"Spell\",\"Level\") VALUES ('" + splitString[0] + "', '" + splitString[1] + "', " + splitString[2] + ")" );
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/locations.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */
        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"Locations\" (\"Hash\",\"Name\",\"Location_X\",\"Location_Y\") VALUES ('" + splitString[0] + "', '" + splitString[1] + "', " + splitString[2] + "," + splitString[3] + ")" );
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/levels.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */

        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"Levels\" (\"Hash\",\"Level\",\"Strength\",\"Agility\",\"HP_PerLevel\",\"MP_PerLevel\") VALUES ('" + splitString[0] + "', " + splitString[1] + ", " + splitString[2] + "," + splitString[3] + "," + splitString[4] + "," + splitString[5] + ")" );
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/enemy_stats.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */

        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"Enemy_Stats\" (\"Hash\",\"Enemy Name\",\"Agility\",\"Gold\",\"Enemy_HP\",\"HR Dodge\",\"Pattern\",\"Resist\",\"Strength\",\"XP\") VALUES ('" + splitString[0] + "', '" + splitString[1] + "', " + splitString[2] + "," + splitString[3] + "," + splitString[4] + "," + splitString[5] + "," + splitString[6] + "," + splitString[7] + "," + splitString[8] + "," + splitString[9] + ")" );
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    currFile.open("/home/mcortez/ROMs/DWR/chests.csv");
    // Get the first line always - it's just the column definition
    std::getline(currFile, line);
    while (std::getline(currFile, line))
    {
        splitString = SplitString(line);
                  /* Create SQL statement */

        /* Create a transactional object. */
        work W(C);
        /* Execute SQL query */
        W.exec( "INSERT INTO public.\"Chests\" (\"Hash\",\"Chest Number\",\"Item\",\"Chest_X\",\"Chest_Y\") VALUES ('" + splitString[0] + "', " + splitString[1] + ", '" + splitString[2] + "'," + splitString[3] + "," + splitString[4] + ")" );
        W.commit();
    }
    currFile.close();
    cout << "Records created successfully" << endl;

    C.disconnect ();

}


