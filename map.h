struct MAP{
    char mapdata[10][10];	
};

/*
 *  struct needs to be declared before it is used
 *
 */

struct MAP LoadMap(void);   //return type was void

void RenderMap(struct MAP map,int cellx,int celly);  //<- missed a semicolon here. Reason for all that error

// Dont make functions extern
