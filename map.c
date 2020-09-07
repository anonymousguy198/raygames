#include "map.h"
#include<raylib.h>




//load the map
struct MAP LoadMap(void){

//==== Character Map =====

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
			map.mapdata[x][y]=mapinfo[x][y];
		}
	}    
	return map;
}


//==== Render Map ====

void RenderMap(struct MAP map,int cellx,int celly){

	for(int x=0;x<10;x++){         
		for(int y=0;y<10;y++){
			if(map.mapdata[y][x]=='#'){DrawRectangle(x*cellx,y*celly,cellx,celly,RED);}
			if(map.mapdata[y][x]=='8'){DrawRectangle(x*cellx,y*celly,cellx,celly,BLACK);}

/*
 *  Explanation: 
 *
 *    arr [x][y] 
 *
 *    here, x = x-axis and y = y-axis
 *    This is how it reflects on screen/graph
 *
 *            x-axis
 *  	   1  2  3  4         
 *        ------------->
 *      0 |
 *      1 |
 *      2 |
 *      3 |y-axis
 *      4 |
 *    
 *
 *    and this is how it reflects on array
 *
 *    arr[x][y] = {
 *      
 *           y-axis    	
 *        ----------------
 *	  |
 *  x-axis|  {"","","",""}
 *	  |  {"","","",""}
 *	  |  {"",""."",""}
 *	  |  {"",""."",""}
 *
 *      }
 *
 *    notice that x amd y axis is inverted in array
 *    so if there is an element at arr[0][3]
 *      
 *      arr[x][y] = { 
 *        {".",".",".","#"}.
 *        {".",".",".","."},
 *        {".",".",".","."},
 *        {".",".",".","."},
 *      }
 *
 *    
 *    It would reflect something like this on screen
 *
 *            x-axis
 *         0  1  2  3  4  
 *        ---------------->		   
 *      0 |
 *      1 |
 *      2 |			
 *      3 |# (x=0, y=3)
 *      4 |
 *
 *	
 *    To display it as shown in array, switch x and y axis
 *
 *            x-axis
 *         0  1  2  3  4  
 *        ---------------->		   
 *      0 |         # (x=3, y=o)
 *      1 |
 *      2 |			
 *      3 |
 *      4 |
 *
 *
 */
		}
	}
}
