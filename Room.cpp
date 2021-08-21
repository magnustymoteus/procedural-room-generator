#include <iostream>
#include <cstdlib>
#include <string>
#include "Room.h"
using namespace std;

 Room::Room(string seedArg) {
        if(seedArg != "") {
            Room::seed = seedArg;
        }
        else {
            cout << "A seed cannot be an empty string!\n";
        }
}

void Room::displayLegend() {
        for(unsigned short int i=0;i<sizeof(legend)/sizeof(legend[0]);i++) {
            cout << legend[i] << endl;
        }
        cout << endl;
}
void Room::changeSeed(string seedArg) {
         if(seedArg != "") {
            Room::seed = seedArg;
        }
        else {
            cout << "A seed cannot be an empty string!\n";
        }
}
void Room::generateRoom() {
    if(Room::seed != "") {
    Room::room.clear();
    string seed = Room::seed, room = Room::room;
    int x,y,dX,dY;
    x = rand()%seed.size()-rand()%(seed.size()), y=rand()%seed.size()-rand()%(seed.size());
    if(x < 0) {
        x -= (x*2);
    }
    if(y < 0) {
        y -= (y*2);
    }
    if(rand()%x > rand()%y) {
        if( ((rand()%x)/2) > 0 ) {
            dX = rand()%x;
            dY = y;
        }
        else {
            dX = rand()%x;
            dY = 0;
        }
    }
    else {
        if( ((rand()%y)/2) > 0 ) {
            dX = x;
            dY = rand()%y;
        }
        else {
            dX = 0;
            dY = rand()%y;
        }
    }

    for(int i =0;i<=y;i++) {
        for(int j=0;j<=x;j++) {
            if(j==dX && i==dY) {
                room.append("/");
            }

            else {
            if(i==y||i==0) {
                if((j==0 || j == x ) && i==0 ) {
                    room.append(" ");
                }
                else if ((j==0 || j == x) && i ==y){
                room.append("|");
                }
                else {
                    room.append("_");
                }
            }
            else {
                if(j==0 || j == x) {
                    room.append("|");
                }
                else {
                room.append(" ");
                }
            }
          }
         }
        room.append("\n");
         }
         Room::room = room;
        }
        else {
            cout << "Cannot generate a room with an empty string!\n";
        }
    }
void Room::displayRoom() {
        cout << Room::room << endl;
    }
string Room::getRoom() {
        return Room::room;
    }
