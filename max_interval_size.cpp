//
//  max_interval_size.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/21.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;

struct interval {
    int x, y;
} I[1010];

bool cmp(interval a, interval b) {
    if (a.x != b.x) {
        return a.x > b.x;
    } else {
        return a.y < b.y;
    }
}

//int main() {
//    int n;
//    while (scanf("%d", &n) && n != 0) {
//        for (int i = 0; i < n; ++i) {
//            scanf("%d%d", &I[i].x, &I[i].y);
//        }
//        
//        sort(I, I + n, cmp);
//        
//        int lastX = I[0].x;            //取最右区间左端
//        int ans = 1;                   //初始选择最右侧区间
//        for (int i = 1; i < n; ++i) {  //若最右侧区间的右侧不超过lastX说明区间不重合，保证如果包含，一定会取到被包含的区间
//            if (I[i].y <= lastX) {
//                ++ans;
//                lastX = I[i].x;
//            }
//        }
//        printf("%d\n", ans);
//    }
//    
//    return 0;
//}
