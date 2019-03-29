////
////  select_num.cpp
////  oj_test
////
////  Created by 王久亮 on 2019/3/1.
////  Copyright © 2019年 王久亮. All rights reserved.
////
//
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//const int maxn = 100;
////在序列A中选取k个数，使得和为x，且平方和最大
//int n, k, x, maxSumSqu = -1, A[maxn];
//
////存储选数的方案
//vector<int> temp, ans;
//
//void DFS(int index, int nowK, int sum, int sumSqu) {
//    if (nowK == k && sum == x) {
//        if (sumSqu > maxSumSqu) {
//            maxSumSqu = sumSqu;
//            ans = temp;
//        }
//        return;
//    }
//    
//    if (index == n || nowK == k || sum > x) {
//        return;
//    }
//    
//    temp.push_back(A[index]);
//    DFS(index + 1, nowK + 1, sum + A[index], sumSqu + A[index] * A[index]);
//    temp.pop_back();
//    
//    DFS(index + 1, nowK, sum, sumSqu);
//}
