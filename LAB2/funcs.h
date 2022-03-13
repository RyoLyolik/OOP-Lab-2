#pragma once
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int transform(int* arr, int size, int (*change)(int));
int change_negative(int x);
int change_to_five(int x);
int change_to_random(int x);