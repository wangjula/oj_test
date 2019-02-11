//
//  sort_test.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/9.
//  Copyright © 2019年 王久亮. All rights reserved.
//

//#include <cstdio>
//#include <algorithm>
//
//void printArr(int arr[], int n) {
//    for (int i = 0; i < n; ++i) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//void selectSort(int R[], int n) {
//    int i, j, k;
//    int temp;
//    for (i = 0; i < n - 1; ++i) {
//        k = i;
//        for (j = i + 1; j < n; ++j) {
//            if (R[j] < R[k]) {           //R[k]表示当前最小
//                k = j;
//            }
//        }
//        
//        if (k != i) {
//            temp = R[i];
//            R[i] = R[k];
//            R[k] = temp;
//        }
//    }
//}
//
//void bubbleSort(int R[], int n) {
//    int i, j, temp;
//    bool exchange = false;
//    for (i = 1; i < n; ++i) {
//        exchange = false;
//        for (j = n - 1; j >= i; --j) {
//            if (R[j] < R[j - 1]) {
//                temp = R[j];
//                R[j] = R[j - 1];
//                R[j - 1] = temp;
//                exchange = true;
//            }
//        }
//        if (!exchange) {
//            break;
//        }
//    }
//}
//
//void insertSort(int R[], int n) {
//    int i, j, temp;
//    for (i = 1; i < n; ++i) {
//        j = i - 1;
//        temp = R[i];
//        while (j >= 0 && R[j] > temp) {   //元素依次后移
//            R[j + 1] = R[j];
//            --j;
//        }
//        R[j + 1] = temp;
//    }
//}
//
//bool cmp(int a, int b) {
//    return a > b;
//}
//
//int main() {
//    using namespace std;
//    int R[5] = {3, 23, 2, 98, 1};
//    printArr(R, 5);
//    
//    sort(R, R + 5/*, cmp*/);
//    printArr(R, 5);
//}
