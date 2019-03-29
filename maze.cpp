//
//  maze.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/8.
//  Copyright © 2019年 王久亮. All rights reserved.
//

//#include <cstdio>
//#include <queue>
//
//using namespace std;
//
//const int maxn = 100;
//int n, m;
//int maze[maxn][maxn] = {0};
//bool vis[maxn][maxn] = {false};
//int DX[4] = {-1, 1, 0, 0};
//int DY[4] = {0, 0, -1, 1};
//
//struct node {
//    int x, y;
//};
//
//bool isNeedVisit(int x, int y) {
//    if (x >= n || x < 0 || y >= n || y < 0) {
//        return false;
//    }
//    if (maze[x][y] == 0 || vis[x][y] == true) {
//        return false;
//    }
//    return true;
//}
//
//void BFS(int x, int y) {
//    node N1;
//    N1.x = x;
//    N1.y = y;
//    
//    queue<node> Q;
//    Q.push(N1);
//    vis[x][y] = true;
//    while (!Q.empty()) {
//        node top = Q.front();
//        Q.pop();
//        for (int i = 0; i < 4; ++i) {
//            int newX = top.x + DX[i];
//            int newY = top.y + DY[i];
//            if (isNeedVisit(newX, newY)) {
//                N1.x = newX;
//                N1.y = newY;
//                Q.push(N1);
//                vis[newX][newY] = true;
//            }
//        }
//    }
//}

//int main() {
//    while (scanf("%d%d", &m, &n) == 2) {
//        for (int x = 0; x < n; ++x) {
//            for (int y = 0; y < m; ++y) {
//                scanf("%d", &maze[x][y]);
//            }
//        }
//        
//        int ans = 0;
//        for (int x = 0; x < n; ++x) {
//            for (int y = 0; y < m; ++y) {
//                if (maze[x][y] == 1 && vis[x][y] == false) {
//                    ++ans;
//                    BFS(x, y);
//                }
//            }
//        }
//        printf("%d\n", ans);
//    }
//    return 0;
//}


