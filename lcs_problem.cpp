//
//  lcs_problem.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/14.
//  Copyright © 2019年 王久亮. All rights reserved.
//

/**
 * 最长公共子序列
 */

//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 100 + 10;
//
//char A[maxn], B[maxn];
//
//int dp[maxn][maxn]; //串A的i位以前和串B的j位以前，两者最大公共子序列的长度
//
//int main() {
//    int m, n;
//    while (scanf("%d%d", &m, &n) == 2 && m && n) {
//        getchar();                              //混用scanf和fgets，要是用getchar吸收\n
//        
//        fgets(A + 1, maxn, stdin);
//        fgets(B + 1, maxn, stdin);
//        
//        for (int i = 0; i <= m; ++i) {
//            dp[i][0] = 0;
//        }
//        for (int i = 0; i <= n; ++i) {
//            dp[0][i] = 0;
//        }
//        
//        for (int i = 1; i <= m; ++i) {
//            for (int j = 1; j <= n; ++j) {
//                if (A[i] == B[j]) {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                } else {
//                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                }
//            }
//        }
//        printf("%d\n", dp[m - 1][n - 1]);
//    }
//    return 0;
//}

