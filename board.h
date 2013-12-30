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
		move_by_id(blip* someBlip, int newX, int newY);
		// moving a cell
		move_by_loc(ind curX, int curY, int newX, int newY);
		// print the grid
		print_map();
		
		blip * grid[][];
		
		
};

#endif // BOARD_H
