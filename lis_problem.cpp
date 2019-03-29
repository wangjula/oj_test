//
//  lis_problem.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/14.
//  Copyright © 2019年 王久亮. All rights reserved.
//

/**
 * 最长不下降子序列问题（可以不连续）
 */
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 100 + 10;
//
//int dp[maxn], A[maxn];      //dp[i]表示以A[i]结尾的最长不下降子序列长度
//
//int main() {
//    int n;
//    while (scanf("%d", &n) == 1 && n) {
//        for (int i = 0; i < n; ++i) {
//            scanf("%d", &A[i]);
//        }
//        
//        dp[0] = 1;
//        for (int i = 1; i < n; ++i) {
//            dp[i] = 1;
//            for (int j = 0; j < i; ++j) {
//                if (A[j] <= A[i] && dp[i] < dp[j] + 1) {
//                    dp[i] = dp[j] + 1;
//                }
//            }
//        }
//        
//        int k = 0;
//        for (int i = 1; i < n; ++i) {
//            if (dp[i] > dp[k]) {
//                k = i;
//            }
//        }
//        printf("%d\n", dp[k]);
//    }
//}

