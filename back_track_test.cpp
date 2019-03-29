//
//  back_track_test.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/4.
//  Copyright © 2019年 王久亮. All rights reserved.
//


//回溯法
#include <cstdio>

static const int maxn = 20;

static int c[maxn] = {0};

static bool hashTable[maxn] = {false};

void Backtrack(int *a, int k, int len) {
    if (len == k) {
        for (int i = 1; i < len; ++i) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[len]);
        return;
    }
    
    ++k;
    for (int i = 1; i <= len; ++i) {
        if (hashTable[i] == false) {
            a[k] = c[i];
            hashTable[i] = true;
            Backtrack(a, k, len);
            hashTable[i] = false;
        }
    }
}

//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; ++i) {
//        c[i] = i;
//    }
//    
//    int a[maxn] = {0};
//    Backtrack(a, 0, n);
//}
