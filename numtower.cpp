//
//  NumTower.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/9.
//  Copyright © 2019年 王久亮. All rights reserved.
//
/*
 * 数塔问题
 */

//#include <cstdio>
//#include <algorithm>
//
//using namespace std;

//static const int maxn = 100 + 10;
//int t[maxn][maxn], dp[maxn][maxn];     //令dp[i][j]以A[i][j]开头到数塔底层路径上的数字的最大和

//int main() {
//    int n;
//    while (scanf("%d", &n) == 1 && n) {
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= i; ++j) {
//                scanf("%d", &t[i][j]);
//            }
//        }
//        
//        //边界，动态规划从边界开始解决问题
//        for (int j = 1; j <= n; ++j) {
//            dp[n][j] = t[n][j];
//        }
//        
//        for (int i = n - 1; i >= 1; --i) {
//            for (int j = 1; j <= i; ++j) {
//                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + t[i][j];
//            }
//        }
//        printf("%d\n", dp[1][1]);
//    }
//    return 0;
//}
