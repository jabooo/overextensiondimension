#ifndef BOARD_H
#define BOARD_H

//THIS IS A COMMENT FUCKER
/*
GET USED TO IT
*/
class Board
{
	public:
		// class constructor
		Board(int w,int h);
		// class destructor
		~Board();
		// creating a cell
		create_cell(int id,int xpos, int ypos);
		// moving a cell
		cell_move(ind xpos1, int ypos1, int xpos2, int ypos2);
		// print the grid
		print_map();
		
		
};

#endif // BOARD_H
