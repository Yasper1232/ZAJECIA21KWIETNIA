
#ifndef KACPERNICIAK_ARRAY_H
#define KACPERNICIAK_ARRAY_H

#define SIZE 10
void displayArray(int *array);
float calcAverage(int *array);
int calcMin(int *array);
int calcMax(int *array);
int calcMedian(int *array);
void fetchData(int *array);
void bubbleSort(int *array);
template <typename T>
void swap (T *a, T *b);

#endif //KACPERNICIAK_ARRAY_H
