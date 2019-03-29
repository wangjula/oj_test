//
//  pb1020.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/20.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;

struct mooncake {
    double store;
    double sell;
    double price;
} cake[1010];

bool cmp(mooncake a, mooncake b) {
    return a.price > b.price;
}

//int main() {
//    int n;
//    scanf("%d", &n);
//    double D;
//    scanf("%lf", &D);
//    for (int i = 0; i < n; ++i) {
//        scanf("%lf", &cake[i].store);
//    }
//    for (int i = 0; i < n; ++i) {
//        scanf("%lf", &cake[i].sell);
//        cake[i].price = cake[i].sell / cake[i].store;    //计算月饼单价
//    }
//    
//    sort(cake, cake + n, cmp);                           //月饼价格从高到低排序
//    
//    double ans = 0;
//    for (int i = 0; i < n; ++i) {                        //贪心算法：每次选单价最高的，直到消耗完毕，选择下一个；或者达到D，结束
//        if (cake[i].store <= D) {
//            D -= cake[i].store;
//            ans += cake[i].sell;
//        } else {
//            ans += cake[i].price * D;
//            break;
//        }
//    }
//    
//    printf("%.2f\n", ans);
//    return 0;
//}
