
#include <stdio.h>

int* Selection_Sort(int* array, int length){
    int min = 0, tmp = 0;
    for(int i = 0; i < length; i++){
        min = i;
        for(int j = i + 1; j < length; j++){
            if(array[j] < array[min])
                min = j;
        }
        if( i != min){
            tmp = array[i];
            array[i] = array[min];
            array[min] = tmp;
        }
    }
    return array;
}

