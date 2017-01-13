#include<stdio.h>
void PrintArray(int* arr, int size) {
	int i;
	for (i = 0; i <size; ++i) {
		printf("[%d]:%d\n", i, arr[i]);
	}
}
void InitArray(int* arr, int size) {
	for (int i = 0; i<size; i++) {
		arr[i] = (i + 1) * 10;
	}
}