

#include <cstdio>
#include "array.h"


void displayArray(int *array){
    for (int i = 0; i < SIZE; ++i) {
        printf("*(array + %d) = %d\n",i, *(array+i));
    }
}

float calcAverage(int *array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum+= *(array+i);
    }
    return (float) sum / SIZE;
}

int calcMin(int *array){
    int min = *array;
    for (int i = 1; i < SIZE; ++i) {
        if(*(array + i) < min)
            min = *(array + i);
    }
    return min;
}
int calcMax(int *array){
    int max = *array;
    for (int i = 1; i < SIZE; ++i) {
        if(*(array + i) > max)
            max = *(array + i);
    }
    return max;
}

int calcMedian(int *array){
    int tempArray[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        *(tempArray + i) = *(array +i);
    }
    bubbleSort(tempArray);
    int median;
    if (SIZE % 2 == 0){
        median = (*(tempArray + (SIZE/2)) + *(tempArray + (SIZE/2) -1)) / 2;
    }
    else{
        median = *(tempArray + (SIZE/2));
    }

    return median;
}

void fetchData(int *array){
    for (int i = 0; i < SIZE; ++i) {
        printf("*(array + %d) = ", i);
        scanf("%d", (array + i));
    }
}
void bubbleSort(int *array){
    for( int i = 0; i < SIZE; i++ )
    {
        for( int j = 0; j < SIZE - 1; j++ )
        {
            if (array[j] > array[j + 1]) {
                swap((array + j), (array + j + 1));
            }
        }
    }
}
template <typename T>
void swap (T *a, T *b)
{
    T c =  *a;
    *a = *b;
    *b = c;
}
