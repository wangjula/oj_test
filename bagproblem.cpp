//
//  BagProblem.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/7.
//  Copyright © 2019年 王久亮. All rights reserved.
//

/**
 * 背包问题
 */
//#include <cstdio>
//#include <vector>
//
//using namespace std;
//
//const int maxn = 30;
//
//vector<int> ans, temp;
//int maxValue = -1, maxV, n;
//int w[maxn], c[maxn];
//
//void DFS(int k, int sumW, int sumC, int n) {
//    if (k == n) {
//        if (sumC > maxValue) {
//            ans = temp;
//            maxValue = sumC;
//        }
//        return;
//    }
//
//    ++k;
//    if (sumW + w[k] <= maxV && sumC + c[k] > sumC) {
//        temp.push_back(k);
//        DFS(k, sumW + w[k], sumC + c[k], n);
//        temp.pop_back();
//    }
//    DFS(k, sumW, sumC, n);
//}
//
//int main() {
//    while (scanf("%d%d", &n, &maxV) == 2 && n && maxV) {
//        for (int i = 1; i <= n; ++i) {
//            scanf("%d", &w[i]);
//        }
//        for (int i = 1; i <= n; ++i) {
//            scanf("%d", &c[i]);
//        }
//
//        DFS(0, 0, 0, n);
//
//        for (int i = 0; i < ans.size(); ++i) {
//            if (i < ans.size() - 1) {
//               printf("%d ", ans[i]);
//            } else {
//                printf("%d\n", ans[i]);
//            }
//        }
//        printf("%d\n", maxValue);
//    }
//    return 0;
//}
