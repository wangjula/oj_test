//
//  binary_tree_test.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/4.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

struct node {
    char data;
    node *lc, *rc;
    node(char ch) : data(ch), rc(nullptr), lc(nullptr){};
};

void createT(node *&root, char str[], int i, int len) {
    if (len > 0) {
        root = new node(str[i]);
        int newL = (len - 1) / 2;
        createT(root -> rc, str, i + 1, newL);
        createT(root -> lc, str, i + 1 + newL, newL);
    }
}

void outputT(node * root) {
    if (root != nullptr) {
        outputT(root -> lc);
        if (root -> data != '#') {
            printf("%c", root -> data);
        }
        outputT(root -> rc);
    }
}

void clear(node * root) {
    if (root != nullptr) {
        clear(root -> lc);
        clear(root -> rc);
        delete root;
    }
}

void postOrder(node * root, void (* visit)(node * p)) {
    if (root != nullptr) {
        node * p = root;
        stack<node *> S;
        while (!S.empty() || p != nullptr) {
            while (p != nullptr) {
                S.push(p);       /*前序遍历则循环内visit(p)，再加入栈*/
                p = p -> lc;
            }
            
            if (!S.empty()) {
                p = S.top();
                S.pop();
                visit(p);        /*前序只转移到右子树，不访问*/
                p = p -> rc;
            }
        }
        
    }
}

//int main() {
//    char str[40];
//    while (scanf("%s", str) != EOF) {
//        node *root;
//        createT(root, str, 0, (int) strlen(str));
//        outputT(root);
//        printf("\n");
//        clear(root);
//    }
//    
//    return 0;
//}
