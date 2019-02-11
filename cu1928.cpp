//
//  cu1928.cpp
//  oj_test
//
//  处理日期
//
//  Created by 王久亮 on 2019/2/8.
//  Copyright © 2019年 王久亮. All rights reserved.
//

//#include <cstdio>
//
//const int month[13][2] = {  //平年，闰年每个月的天数
//    {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30},
//    {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}
//};
//
//bool isLeapYear(int y) {
//    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
//}

//int main() {
//    int time1, yyyy1, mm1, dd1;     //time = yyyymmdd
//    int time2, yyyy2, mm2, dd2;
//
//    scanf("%d%d", &time1, &time2);
//    if (time1 > time2) {
//        int temp = time1;
//        time1 = time2;
//        time2 = temp;
//    }
//
//    yyyy1 = time1 / 10000;
//    mm1 = time1 % 10000 / 100;
//    dd1 = time1 % 100;
//    yyyy2 = time2 / 10000;
//    mm2 = time2 % 10000 / 100;
//    dd2 = time2 % 100;
//
//    int result = 1;      //通过对time1加天数，直到到达time2来计算相隔天数
//    while (yyyy1 < yyyy2 || mm1 < mm2 || dd1 < dd2) {
//        ++dd1;
//        if (dd1 == month[mm1][isLeapYear(yyyy1)] + 1) { //处理月份超出
//            ++mm1;
//            dd1 = 1;
//        }
//
//        if (mm1 == 13) {                                //处理年份超出
//            ++yyyy1;
//            mm1 = 1;
//        }
//        ++result;
//    }
//    printf("%d\n", result);
//
//    return 0;
//}
