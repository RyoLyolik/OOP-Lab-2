#include "funcs.h"

int transform(int* arr, int size, int (*change)(int))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = change(arr[i]);
	}
	return 0;
}

int change_negative(int x)
{
	if (x < 0)
	{
		return -x;
	}
	return x;
}
int change_to_five(int x) {
	return 5;
}
int change_to_random(int x) {
	return (1 + rand() % 200) - 100;
}
int invert(int x) {
	return x;
}