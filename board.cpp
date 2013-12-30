#include "board.h" // class's header file

// class constructor
Board::Board(int h, int w)
{
	int grid [h] [w];
}

// creating a cell
Board::create_cell(int id,int xpos, int ypos);
{
    grid [ypos] [xpos] = id                          
}

// moving a cell
Board::cell_move(ind xpos1, int ypos1, int xpos2, int ypos2);
{
    private int temp = grid [ypos1] [xpos1];
    grid [ypos2] [xpos2] = temp                    
}

// class destructor
Board::~Board()
{

}
