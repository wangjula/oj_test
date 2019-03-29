//
//  n_queens_pro.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/19.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <cstdlib>

const int maxn = 11;

static int n = 0;
static int count = 0;
static int P[maxn];
static bool hashTable[maxn] = {false};

//行号1-n,列号P[1-n]，填充保证行列号不重复
void generateP1(int index) {
    if (index == n + 1) {
        bool flag = true;
        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                if (abs(i - j) == abs(P[i] - P[j])) {    //如果在一条对角线上。i行号，P[i]是列号
                    flag = false;
                }
            }
        }
        if (flag == true) {
            ++count;
        }
        return;
    }
    
    for (int i = 1; i <= n; ++i) {
        if (hashTable[i] == false) {
            P[index] = i;
            hashTable[i] = true;
            
            generateP1(index + 1);
            hashTable[i] = false;
        }
    }
}

//带回溯的算法
void generateP2(int index) {
    if (index == n + 1) {   //带回溯保证不符合要求的不会填充满n个
        ++count;
        return;
    }
    
    for (int i = 1; i <= n; ++i) {    //总共有n!种组合
        if (hashTable[i] == false) {
            bool flag = true;
            for (int pre = 1; pre < index; ++pre) {         //只检验1-（index-1）都合格
                if (abs(index - pre) == abs(i - P[pre])) {  //如果已经出现了2个皇后在对角线上，直接认为该排列不合格
                    flag = false;
                    break;
                }
            }
            
            if (flag == true) {
                P[index] = i;
                hashTable[i] = true;
                
                generateP2(index + 1);
                hashTable[i] = false;
            }
        }
    }
}

//int main() {
//    scanf("%d", &n);
//    generateP2(1);
//    printf("%d\n", count);
//    return 0;
//}
