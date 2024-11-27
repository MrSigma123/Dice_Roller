/* dice_roller.c */
/* Project overview
  design functions and divide program by modules
  implement rolls for different dice types:
  - tetrahedron
  - cube
  - octahedron
  - pentagonal trapezohedron
  - dodecahedron
  - icosahedron
  add sum, product of different dice combinations

  Divide code with main function file and defined functions
  in separate file and header
  */

#include <stdio.h>
#include "dice_functions.h"

int main() {
    int choice, rolls, i;
    printf("Welcome to Dice Roller!\n");
    printf("Choose the type of dice to roll:\n");
    printf("1. Tetrahedron (4 sides)\n");
    printf("2. Cube (6 sides)\n");
    printf("3. Octahedron (8 sides)\n");
    printf("4. Pentagonal Trapezohedron (10 sides)\n");
    printf("5. Dodecahedron (12 sides)\n");
    printf("6. Icosahedron (20 sides)\n");
    scanf("%d", &choice);

    int sides = get_dice_sides(choice);
    if (sides == -1) {
        printf("Invalid choice. Exiting.\n");
        return 1;
    }

    printf("How many rolls?\n");
    scanf("%d", &rolls);

    int results[rolls];
    int sum = 0, product = 1;
    printf("Rolling %d-sided dice %d times:\n", sides, rolls);
    for (i = 0; i < rolls; i++) {
        results[i] = roll_dice(sides);
        printf("Roll %d: %d\n", i + 1, results[i]);
        sum += results[i];
        product *= results[i];
    }

    printf("Sum of rolls: %d\n", sum);
    printf("Product of rolls: %d\n", product);
    return 0;
}

