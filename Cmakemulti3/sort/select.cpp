#include <iostream>
#include<algorithm>
#include<cmath>
#include "sort.h"

using namespace std;

void selectSort(int* A, int N)
{
    if (A == NULL)
		return;
	for (int i = 0; i < N - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < N; j++) {
			min = A[j] < A[min] ? j : min;
		}
		swap(A[i], A[min]);
	}
}
