#include <stdio.h>

int main() 
{
    int side = 9; 
    int surface_area_of_cube;
    
    surface_area_of_cube = 6 * side * side;
    
    printf("Value of the side length of the cube : %d\n\n", side);
    printf("Surface area of the cube : %d\n", surface_area_of_cube);
    
    return 0;
}
