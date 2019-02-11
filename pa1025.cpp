//
//  pa1025.cpp
//  oj_test
//
//  计算各地区排名及总排名
//
//  Created by 王久亮 on 2019/2/9.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

struct testee {
    char register_num[15];
    int score;
    int location_num;
    int local_rank;
};

testee testees[300010];

bool cmp(testee t1, testee t2) {
    if (t1.score != t2.score) {
        return t1.score > t2.score;
    } else {
        return strcmp(t1.register_num, t2.register_num) < 0;
    }
}

void localRank(int st, int k) {
    testees[st].local_rank = 1;
    for (int i = 1; i < k; ++i) {
        if (testees[st + i - 1].score == testees[st + i].score) {
            testees[st + i].local_rank = testees[st + i - 1].local_rank;
        } else {
            testees[st + i].local_rank = i + 1;
        }
    }
}

void printRank(int num) {
    int rank = 1;
    for (int i = 0; i < num; ++i) {
        if (i > 0 && testees[i].score != testees[i - 1].score) {
            rank = i + 1;
        }
        printf("%s ", testees[i].register_num);
        printf("%d %d %d\n", rank,
               testees[i].location_num, testees[i].local_rank);
    }
}

//int main() {
//    int n, k, st_num = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &k);
//        for (int j = 0; j < k; ++j) {
//            testees[st_num].location_num = i + 1;
//            scanf("%s", testees[st_num].register_num);
//            scanf("%d", &testees[st_num].score);
//            ++st_num;
//        }
//        
//        sort(testees + st_num - k, testees + st_num, cmp);
//        localRank(st_num - k, k);
//    }
//    
//    printf("%d\n", st_num);
//    sort(testees, testees + st_num, cmp);
//    printRank(st_num);
//    
//    return 0;
//}
