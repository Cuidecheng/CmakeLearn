#include <iostream>
#include<algorithm>
#include<cmath>
#include "sort.h"

using namespace std;

void insertSort(int* A, int N)
{
    if (A == NULL)
	    return;
	for (int i = 1; i < N; i++)
	{
		for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; j--) {
			swap(A[j], A[j + 1]);
		}
	}
}
