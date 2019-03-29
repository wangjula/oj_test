//
//  cu1918.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/1.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
#include <map>
#include <stack>
using namespace std;

struct node {
    char op;
    double num;
    bool flag;       //true表示操作数，false表示操作符
};

string str;
stack<node> s;       //操作符栈
queue<node> q;       //后缀表达式序列
map<char, int> op;   //操作符优先级保存到map

void change() {
    node temp;
    for (int i = 0; i < str.length(); ) {
        if (str[i] >= '0' && str[i] <= '9') {
            temp.flag = true;
            temp.num = str[i++] - '0';
            while (i < str.length() && str[i] >= '0' && str[i] <= '9') {
                temp.num = temp.num * 10 + (str[i] - '0');
                ++i;
            }
            q.push(temp);
        } else {
            //只要操作符栈顶元素比op优先级高，则弹出栈顶操作符，加入后缀表达式中
            while (!s.empty() && op[str[i]] <= op[s.top().op]) {
                q.push(s.top());
                s.pop();
            }
            
            temp.flag = false;
            temp.op = str[i];
            s.push(temp);
            ++i;
        }
    }
    
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

double cal() {  //计算后缀表达式
    double temp1, temp2;
    node cur, temp;
    while (!q.empty()) {
        cur = q.front();
        q.pop();
        if (cur.flag == true) {
            s.push(cur);
        } else {
            temp2 = s.top().num;
            s.pop();
            temp1 = s.top().num;
            s.pop();
            temp.flag = true;
            
            switch (cur.op) {
                case '+':
                    temp.num = temp1 + temp2;
                    break;
                case '-':
                    temp.num = temp1 - temp2;
                    break;
                case '*':
                    temp.num = temp1 * temp2;
                    break;
                case '/':
                    temp.num = temp1 / temp2;
                    break;
                default:
                    break;
            }
            
            s.push(temp);
        }
    }
    return s.top().num;
}

//int main() {
//    op['+'] = op['-'] = 1;
//    op['*'] = op['/'] = 2;
//    while (getline(cin, str) && str != "0") {
//        for (string::iterator it = str.end(); it != str.begin(); --it) {
//            if (*it == ' ') {
//                str.erase(it);
//            }
//        }
//        
//        while (!s.empty()) {
//            s.pop();
//        }
//        change();
//        printf("%.2f\n", cal());
//    }
//    
//    return 0;
//}
