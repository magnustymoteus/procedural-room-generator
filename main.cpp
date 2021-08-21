#include <iostream>
#include <cstdlib>
#include <string>
#include "Room.h"

using namespace std;

int main()
{
    Room r("seedExample123");
    r.generateRoom();
    r.displayRoom(); //example
    return 0;
}
