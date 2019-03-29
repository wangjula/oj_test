//
//  cattle_problem.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/8.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <queue>
#include <stack>

using namespace std;

const int maxT = 100000;
const int INF = 0x3f3f3f3f;

int d[maxT];      //d[i]表示从s出发到达t的最少步数
int path[maxT];

void printP(int s, int t) {
    stack<int> S;
    S.push(t);
    while (path[t] != -1) {
        S.push(path[t]);
        t = path[t];
    }
    
    size_t i = S.size();
    while (!S.empty()) {
        printf("%d", S.top());
        S.pop();
        --i;
        if (i > 0) {
            printf("->");
        }
    }
    printf("\n");
}

int BFS(int s, int t) {
    queue<int> Q;
    Q.push(s);
    memset(d, 0x3f3f3f3f, sizeof(d));
    d[s] = 0;
    path[s] = -1;
    while (!Q.empty()) {
        int fr = Q.front();
        if (fr - 1 >= 0 && d[fr - 1] >= INF) {
            Q.push(fr - 1);
            d[fr - 1] = d[fr] + 1;
            path[fr - 1] = fr;
        }
        if (d[fr + 1] >= INF) {
            Q.push(fr + 1);
            d[fr + 1] = d[fr] + 1;
            path[fr + 1] = fr;
        }
        if (fr * 2 <= maxT && d[fr * 2] >= INF) {
            Q.push(fr * 2);
            d[fr * 2] = d[fr] + 1;
            path[fr * 2] = fr;
        }
        Q.pop();
    }
    printP(s, t);
    return d[t];
}

//int main() {
//    int s, t;
//    while (scanf("%d%d", &s, &t) == 2) {
//        printf("%d\n", BFS(s, t));
//    }
//}



