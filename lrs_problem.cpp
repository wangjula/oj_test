//
//  lrs_problem.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/15.
//  Copyright © 2019年 王久亮. All rights reserved.
//

/**
 * 最大回文长度问题
 */
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 100 + 10;
//
//char A[maxn];
//
//int dp[maxn][maxn];
//
//int main() {
//    int n;
//    while (scanf("%d", &n) == 1 && n > 0) {
//        getchar();
//        fgets(A, maxn, stdin);
//        memset(dp, 0, sizeof(dp));
//        
//        int ans = 1;
//        for (int i = 0; i < n; ++i) {           //边界：先将回文长度为1和回文长度为2的子串标记出来
//            dp[i][i] = 1;
//            if (i < n - 1) {
//                if (A[i] == A[i + 1]) {
//                    dp[i][i + 1] = 1;
//                    ans = 2;
//                }
//            }
//        }
//        
//        for (int k = 3; k <= n; ++k) {          //k表示回文长度，通过对回文长度枚举，保证dp[i+1][j-1]一定被计算
//            for (int i = 0; i + k - 1 < n; ++i) {
//                int j = i + k - 1;
//                if (A[i] == A[j] && dp[i + 1][j - 1] == 1) {
//                    dp[i][j] = 1;
//                    ans = k;
//                }
//            }
//        }
//        printf("%d\n", ans);
//    }
//    return 0;
//}
