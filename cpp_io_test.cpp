//
//  cpp_io_test.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/7.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <iostream>

void display(char * str);
void multiInput();
void condInput();
void countInput();

using namespace std;

//int main() {
////    char str[5];
////    cin.getline(str, 5); //限制输入长度，5-1 个字符
////    display(str);
//    
//    countInput();
//    return 0;
//}

void display(char * str) {
    for (int i = 0; i < strlen(str); ++i) {
        cout << str[i];
    }
    cout << endl;
}

void multiInput() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }
}

void condInput() {
    int a, b;
    while (scanf("%d %d", &a, &b)) {
        if (!a || !b) {
            break;
        }
        printf("a,b != 0 and a + b = %d\n", a + b);
    }
}

void countInput() {
    int n;
    scanf("%d", &n);
    
    int a, b;
    while (n--) {
        scanf("%d %d", &a, &b);
        printf("a + b = %d\n", a + b);
    }
}


