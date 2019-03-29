//
//  OilDeposits.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/7.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <cstring>

//种子填充，涂色法
//static const int maxn = 32;
//
//char fil[maxn][maxn];
//int vst[maxn][maxn];
//int m, n;
//
//void DFS(int r, int c, int cnt) {
//    if (r < 0 || r >= m || c < 0 || c >= n) {
//        return;
//    }
//    
//    if (vst[r][c] > 0 || fil[r][c] != '@') {
//        return;
//    }
//    
//    vst[r][c] = cnt;
//    for (int dr = -1; dr <= 1; ++dr) {
//        for (int dc = -1; dc <= 1; ++dc) {
//            if (dr != 0 || dc != 0) {
//                DFS(r + dr, c + dc, cnt);      //不改变cnt值，相邻无@时才返回
//            }
//        }
//    }
//}

//int main() {
//    while (scanf("%d%d", &m, &n) == 2 && m && n) {
//        for (int i = 0; i < m; ++i) {
//            scanf("%s", fil[i]);
//        }
//        memset(vst, 0, sizeof(vst));
//        
//        int cnt = 0;
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                if (vst[i][j] == 0 && fil[i][j] == '@') {
//                    DFS(i, j, ++cnt);
//                }
//            }
//        }
//        printf("%d\n", cnt);
//    }
//}


