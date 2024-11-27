/* dice_roller.c */
#include <stdlib.h>
#include <time.h>
#include "dice_functions.h"

int get_dice_sides(int choice) {
    switch (choice) {
        case 1: return 4;   // Tetrahedron
        case 2: return 6;   // Cube
        case 3: return 8;   // Octahedron
        case 4: return 10;  // Pentagonal Trapezohedron
        case 5: return 12;  // Dodecahedron
        case 6: return 20;  // Icosahedron
        default: return -1; // Invalid choice
    }
}

int roll_dice(int sides) {
    srand(time(0) + rand());
    return (rand() % sides) + 1;
}

