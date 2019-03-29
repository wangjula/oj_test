//
//  pb1023.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/21.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>

//贪心策略：局部选最优解，使得最终总的解最优
//int main() {
//    int num[10];                   //存0-9的个数
//    for (int i = 0; i < 10; ++i) {
//        scanf("%d", &num[i]);
//    }
//    
//    for (int i = 1; i < 10; ++i) { //输出第一个数字
//        if (num[i] > 0) {
//            printf("%d", i);
//            --num[i];
//            break;
//        }
//    }
//    
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < num[i]; ++j) {
//            printf("%d", i);
//        }
//    }
//    printf("\n");
//    
//    return 0;
//}
