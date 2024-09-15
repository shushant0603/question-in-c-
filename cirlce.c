#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x = 200, y = 200, radius = 100;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw a circle
    circle(x, y, radius);

    // Wait for a key press
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
