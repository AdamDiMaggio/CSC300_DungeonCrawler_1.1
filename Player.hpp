#include <iostream>
#include <string>
#include "Dungeon.hpp"

using namespace std;

class Player
{
    private:
        string playerName;
        Room* currPos;

    public:
        Player(string playerName, Room* Entrance);
        string getPlayerName();
        void checkRoom();   //check for doors in room
        void moveRooms(string direction);
        Room* getCurrPos();
        void seeResidentList();


};