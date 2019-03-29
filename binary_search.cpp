//
//  binary_search.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/22.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>

int binarySearch(int A[], int low, int high, int x) {
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (A[mid] == x) {
            return mid;
        } else if (A[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

//计算L
//其中[L, R)表示元素X重复的区间
int low_bound(int A[], int low, int high, int x) {
    int mid;
    while (low < high) {
        mid = (low + high) / 2;
        if (A[mid] >= x) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;              //夹出来的位置
}

//计算R
//其中[L, R)表示元素X重复的区间
int upper_bound(int A[], int low, int high, int x) {
    int mid;
    while (low < high) {
        mid = (low + high) / 2;
        if (A[mid] > x) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;              //夹出来的位置
}

//int main() {
//    int A[5] = {1 , 3, 3, 3, 8};
//    printf("%d\n", binarySearch(A, 0, 4, 3));
//    printf("%d %d\n", low_bound(A, 0, 4, 3), upper_bound(A, 0, 4, 3));
//    return 0;
//}
