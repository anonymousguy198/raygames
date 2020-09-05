#include "map.h"
#include<raylib.h>



//load the map
struct MAP LoadMap(void){
	
	

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
for(int x=0;x<+10;x++){
		for(int y=0;y<=10;y++){
		map.mapdata[y][x]=mapinfo[y][x];
	}

	return map;
}


//render the map

void RenderMap(struct MAP map,int cellx,int celly){

	for(int x=0;x<+10;x++){
		for(int y=0;y<=10;y++){
			if(map.mapdata[x][y]=='#'){DrawRectangle(x*cellx,y*celly,cellx,celly,RED);}
			if(map.mapdata[x][y]=='8'){DrawRectangle(x*cellx,y*celly,cellx,celly,BLACK);}

			//DrawRectangle(x*cellx,y*celly,cellx,celly,RED);
		}
	}
}