// solution.c
// 
// John Van Note
// 2016-10-02
//
// Rotates array positions n spaces

#include <stdio.h>
#include <stdlib.h>

int main(){
    // get user input
    int array_size; 
    int n_rotations;
    scanf("%d %d",&array_size,&n_rotations);
    int *array = malloc(sizeof(int) * array_size);
    for(int i = 0; i < array_size; i++){
        scanf("%d",&array[i]);
    }

    // removes unnecessary rotations
    n_rotations = n_rotations % array_size;
    int *rot_array = malloc(sizeof(int) * array_size);
    
    // performs rotation
    for(int i=0; i <array_size; i++) {
        int new_position = (array_size + i - n_rotations) % array_size;
        rot_array[new_position] = array[i];  
    }

    // print
    for(int i=0; i < array_size; i++) {
        printf("%d ", rot_array[i]);
    }

    return 0;
}
