#include <raylib.h>
#include <iostream>
#include <string>
#include "compiler/compiler.h"

using std::cout;
using std::endl;
using std::string;

int main() {
    InitWindow(800, 600, "Hello World");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World!", 100, 100, 20, LIGHTGRAY);
        EndDrawing();
    }

    something();
    return 0;
}