//
//  dag_problem.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/15.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 100 + 10;

const int INF = 0x3f3f3f3f;

int G[maxn][maxn];
int path[maxn], dp[maxn];  //dp[i]表示从顶点i出发的最长路径长度

int DP(int i, int n) {
    if (dp[i] > 0) {          //在递归中指计算一次dp[i]
        return dp[i];
    }
    
    for (int j = 0; j < n; ++j) { //遍历图中顶点i的所有出边
        if (G[i][j] != INF) {     //仅出边能使路径增长，才更新dp[i]
            int temp = DP(j, n) + G[i][j];
            if (temp > dp[i]) {
                dp[i] = temp;
                path[i] = j;     //记录最长的路径
            }
        }
    }
    return dp[i];
}

void printPath(int i) {
    printf("%d", i);
    while (path[i] != -1) {
        printf("->%d", path[i]);
        i = path[i];
    }
}

int main() {
    
}
