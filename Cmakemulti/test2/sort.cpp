#include <iostream>
#include "sort.h"

using namespace std;
const int NumSIZE = 10;

int main()
{
    int nums1[NumSIZE] = {5, 52, 26, 33, 9, 16, 12, 40, 1, 19};
    int nums2[NumSIZE] = {20, 2, 10, 33, 15, 8, 43, 26, 5, 19};
    insertSort(nums1, NumSIZE);
    selectSort(nums2, NumSIZE);

    cout<<"insert sort: "<<endl;
    for(int i = 0; i< NumSIZE; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    cout<<"select sort: "<<endl;
    for(int i = 0; i< NumSIZE; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;
    return 0;
}






