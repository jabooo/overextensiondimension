#include "board.h" // class's header file

// creating grid
   Blip * grid [1] [1];
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

// moving a cell
Board::cell_move(ind xpos1, int ypos1, int xpos2, int ypos2);
{
    private int temp = grid [ypos1] [xpos1];
    grid [xpos2] [ypos2] = temp;                    
}

// class destructor
Board::~Board()
{

}
