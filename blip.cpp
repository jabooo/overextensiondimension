// I am a wizard!

#include "blip.h" // class's header file

// class constructor
Blip::Blip(int type, int startx,int starty)
{
	xloc = startx;
	yloc = starty;
	id = type;
}

// Changes internal location
move(int newX, int newY)
{
    xloc = newX;
    yloc = newY;
}

// class destructor
Blip::~Blip()
{
	grid [yloc] [xloc] = null
}
