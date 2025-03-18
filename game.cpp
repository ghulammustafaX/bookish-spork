#include <conio.h> // For getch() and clrscr() functions
#include <iostream.h> // Standard I/O functions

int main() {
    int x = 10, y = 10;
    char ch;

    clrscr();  // Clears the screen

    while (1) {
        gotoxy(x, y); // Moves the cursor to the (x, y) position
        cout << "@";  // Displays the character '@'
        
        ch = getch();  // Waits for user input
        
        // Erases the character from the old position
        gotoxy(x, y);
        cout << " ";
        
        // Updates the position based on arrow key input
        if (ch == 0) {  // For special keys like arrow keys
            ch = getch();
            switch(ch) {
                case 72: y--; break; // Up arrow key
                case 80: y++; break; // Down arrow key
                case 75: x--; break; // Left arrow key
                case 77: x++; break; // Right arrow key
            }
        }
        
        // Exit the loop if 'q' is pressed
        if (ch == 'q') break;
    }

    return 0;
}
