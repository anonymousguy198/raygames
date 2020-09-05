#include "map.h"
#include<raylib.h>




//load the map
struct MAP LoadMap(void){

/*
 *   indentation was really bad
 *
 */

	struct MAP map; 
	static char mapinfo[10][10]={
	{'#','#','#','#','#','#','#','#','#','#',},
	{'#','.','.','.','.','.','.','.','.','#',},
	{'#','.','.','.','.','8','8','.','.','#',},
	{'#','.','.','.','.','.','.','.','.','#',},
	{'#','.','.','.','8','.','.','.','.','#',},
	{'#','.','.','.','.','.','.','.','.','#',},
	{'#','.','.','8','.','.','.','.','.','#',},
	{'#','8','8','.','.','.','.','.','.','#',},
	{'#','8','.','.','.','.','.','.','.','#',},
	{'#','#','#','#','#','#','#','#','#','#',},
	};

	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
		map.mapdata[y][x]=mapinfo[y][x];
		}
	}     // missed a bracket here probably due to bad 
	return map;
}


//render the map

void RenderMap(struct MAP map,int cellx,int celly){

	for(int x=0;x<10;x++){         
/*
 *  WHAT IS x<+10 supposed to be ??????????????????????????????
 *
 *  Am assuming you were going for x<=10 which is wrong as well
 *  array starts from 0 and ends at TOTAL_SIZE-1
 *  so condition should be x < 10
 */

		for(int y=0;y<10;y++){
			if(map.mapdata[x][y]=='#'){DrawRectangle(x*cellx,y*celly,cellx,celly,RED);}
			if(map.mapdata[x][y]=='8'){DrawRectangle(x*cellx,y*celly,cellx,celly,BLACK);}

			//DrawRectangle(x*cellx,y*celly,cellx,celly,RED);
		}
	}
}
