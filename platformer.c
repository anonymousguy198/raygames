#include<raylib.h>
#include"map.h"

void main(){
	//screen
	int w=800;
	int h=450;

	struct MAP map=LoadMap();	

	//make the window
	InitWindow(w,h,"platformer");
	SetTargetFPS(60);

	float gravity=5.0f;
	 Rectangle player= {(float)w/2, (float)h/2,30,60};
	 Rectangle flr= {(float)w/2-400,(float)h/2+100,1000,20};

	//while loop
	while(!WindowShouldClose()){
		//bool onfloor=CheckCollisionRecs(player,flr);
      
		//player
		if(IsKeyDown(KEY_W)){player.y-=3.0f;}
		if(IsKeyDown(KEY_S)){player.y+=2.0f;}
		if(IsKeyDown(KEY_A)){player.x-=3.0f;}
		if(IsKeyDown(KEY_D)){player.x+=3.0f;}
		//if (!onfloor){player.y+=gravity;}
		

		BeginDrawing();
			ClearBackground(GRAY);
			DrawFPS(w - 90, h - 30);
			RenderMap(map,32,32);
			//player
			 DrawRectangle(player.x,player.y,32,32,ORANGE); 
			//platform
			 //DrawRectangle(flr.x,flr.y,flr.width,flr.height,BLUE);

		EndDrawing();

	}
	CloseWindow();
}
