#include "board.h" // class's header file

// class constructor
Board::Board(int h, int w)
{
	grid = Blip* [h] [w];
}

// creating a blip
Board::create_blip(int id,int xpos, int ypos);
{
    grid [xpos] [ypos] = blip(id,xpos,ypos);                          
}

// Move a particle by its pointer id
Board::move_by_id(blip* someBlip, int newX, int newY);
{
	grid[someBlip->x][someBlip->y] = NULL;
	grid[newX][newY] = someBlip;
}

// Move a particle by its coordinates
Board::move_by_loc(int curX, int curY, int newX, int newY)
{
	blip * workingBlip = grid [curX] [curY];
	grid [curX] [curY] = NULL;
    	grid [newX] [newY] = workingBlip;         
}

// class destructor
Board::~Board()
{

}
