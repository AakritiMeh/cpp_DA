#include <graphics.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd, &gm, (char*)"");
	
    initwindow(400, 400, "Smiley Face");

    // Draw face
    circle(200, 200, 100);

    // Draw eyes
    circle(160, 170, 15);
    circle(240, 170, 15);

    // Draw mouth
    arc(200, 220, 220, 320, 50);

    // Wait for user to close window
    getch();
    closegraph();

    return 0;

}

