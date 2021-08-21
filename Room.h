#pragma once
#ifndef ROOM_H
#define ROOM_H
#include <iostream>
using namespace std;
class Room
{
    private:
        string seed, room;
        string legend[3];
        int x,y,dX,dY;
    public:
        Room(string);
        void displayLegend();
        void changeSeed(string);
        void generateRoom();
        void displayRoom();
        string getRoom();
};

#endif // ROOM_H
