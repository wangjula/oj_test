//
//  pb1032.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/8.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>

const int MAX = 100001;           //大型数组申请在静态区
int total[MAX] = {0};

//int main() {
//    int N;
//    scanf("%d", &N);
//    
//    int school, score;
//    int t = N;
//    while (t--) {
//        scanf("%d %d", &school, &score);
//        total[school] += score;
//    }
//    
//    int max = 0, key = 0;
//    for (int i = 1; i <= N; ++i) {
//        if (total[i] > max) {
//            key = i;
//            max = total[i];
//        }
//    }
//    printf("%d %d\n", key, max);
//    
//    return 0;
//}
