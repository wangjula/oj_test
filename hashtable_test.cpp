//
//  hashtable_test.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/11.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <stdio.h>

const int TABLE_SIZE = 10010;

static bool hashTable[TABLE_SIZE] = {false};

static int hashTable2[TABLE_SIZE] = {0};

int hashTable3[26 * 26 * 26 + 10] = {0};

void isDigitExist() {
    int n, m, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        hashTable[x] = true;
    }
    
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &x);
        if (hashTable[x]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

void countDigitRepeat() {
    int n, m, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        ++hashTable2[x];
    }
    
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &x);
        printf("%d\n", hashTable2[x]);
    }
}

int hashFunc(char str[], int n) {
    int id = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            id = id * 26 + (str[i] - 'A');
        }
    }
    return id;
}

void countStrRepeat() {
    int n, m;
    char temp[4];
    
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", temp);
        ++hashTable3[hashFunc(temp, 3)];
    }
    
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%s", temp);
        printf("%d\n", hashTable3[hashFunc(temp, 3)]);
    }
}

//int main() {
//    countStrRepeat();
//    return 0;
//}
