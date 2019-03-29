//
//  maxsubseqsum.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/12.
//  Copyright © 2019年 王久亮. All rights reserved.
//

/**
 * 最大连续子序列和问题
 */

//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//static const int maxn = 100 + 10;
//
//int A[maxn], dp[maxn]; //令dp[i]为以A[i]结尾的最大连续连续子序列和
//
//int main() {
//    int n;
//    while (scanf("%d", &n) == 1 && n) {
//        for (int i = 0; i < n; ++i) {
//            scanf("%d", &A[i]);
//        }
//        
//        dp[0] = A[0];                            //边界
//        for (int i = 1; i < n; ++i) {
//            dp[i] = max(A[i], A[i] + dp[i - 1]); //状态转移方程
//        }
//        
//        int k = 0;
//        for (int i = 1; i < n; ++i) {
//            if (dp[k] < dp[i]) {
//                k = i;
//            }
//        }
//        printf("%d\n", dp[k]);
//    }
//    return 0;
//}
