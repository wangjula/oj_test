//
//  pb1022.cpp
//  oj_test
//
//  进制转换
//
//  Created by 王久亮 on 2019/2/9.
//  Copyright © 2019年 王久亮. All rights reserved.
//

//#include <cstdio>
//
//int main() {
//    int a, b, d;      //radix = d, d <= 10
//    scanf("%d%d%d", &a, &b, &d);
//    
//    int sum, count;
//    sum = a + b;
//    count = 0;
//    
//    int ans[31];
//    do {             //进制转换，使用数组存储
//        ans[count++] = sum % d;
//        sum /= d;
//    } while (sum != 0);
//    
//    for (int i = 0; i < count; ++i) {
//        printf("%d", ans[i]);
//    }
//    printf("\n");
//    
//    return 0;
//}
