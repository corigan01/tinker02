/*     __  _      __           ___  ___ 
 *    / /_(_)__  / /_____ ____/ _ \|_  |
 *   / __/ / _ \/  '_/ -_) __/ // / __/ 
 *   \__/_/_//_/_/\_\\__/_/  \___/____/ 
 * 
 *   copyright (c) 2022 Gavin Kellam (aka corigan01) Ethan Thummel (aka UraniumNutt)
 *   
 *   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
 *   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
 *   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                                              
 */                             


#include <raylib.h>
#include <iostream>
#include <string>
#include <mos6502/mos6502.h>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 600, "Hello World");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World!", 100, 100, 20, LIGHTGRAY);
        EndDrawing();
    }

    
    return 0;
}