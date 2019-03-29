//
//  devide_and_conquer.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/19.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>

const int maxn = 11;

static int n = 0;
static int P[maxn];
static bool hashTable[maxn] = {false};
//计算n!
int F(int n) {
    if (n == 0) {
        return 1;
    } else {
        return F(n - 1) * n;
    }
}

//计算斐波那契项
int Fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

//计算全排列
//假设1-(index-1)已经排好，处理第index号位
void generateP(int index) {
    if (index == n + 1) {               //边界条件
        for (int i = 1; i <= n; ++i) {
            printf("%d", P[i]);
        }
        printf("\n");
    }
    
    for (int i = 1; i <= n; ++i) {      //每趟处理以i开头的全排列
        if (hashTable[i] == false) {    //hashTable[i]用来标志i是否已经被填充
            P[index] = i;
            hashTable[i] = true;
            
            generateP(index + 1);
            hashTable[i] = false;
        }
    }
}

//int main() {
//    scanf("%d", &n);
//    generateP(1);
//    return 0;
//}
