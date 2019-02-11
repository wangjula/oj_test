//
//  main.cpp
//  oj_test
//
//  Created by 王久亮 on 2018/12/30.
//  Copyright © 2018年 王久亮. All rights reserved.
//

#include <iostream>
#include <cstdio>

/**
 * 二叉树结点
 */
struct BTNode {
    char data;
    BTNode *lchild, *rchild;
    BTNode(char da, BTNode * lc = nullptr, BTNode * rc = nullptr) {
        data = da;
        lchild = lc;
        rchild = rc;
    }
};

void preOrder(BTNode * root, void (* visit)(BTNode * p)) {
    if (root != nullptr) {
        visit(root);
        preOrder(root -> lchild, visit);
        preOrder(root -> rchild, visit);
    }
}

void inOrder(BTNode * root, void (* visit)(BTNode * p)) {
    if (root != nullptr) {
        inOrder(root -> lchild, visit);
        visit(root);
        inOrder(root -> rchild, visit);
    }
}

void postOrder(BTNode * root, void (* visit)(BTNode *p)) {
    if (root != nullptr) {
        postOrder(root -> lchild, visit);
        postOrder(root -> rchild, visit);
        visit(root);
    }
}

void preOrder2(BTNode * root, void (* visit)(BTNode * p)) {
    if (root != nullptr) {
        BTNode * stack[100];
        int top = -1;
        
        BTNode * q = root;
        while (top != -1 || q != nullptr) {
            while (q != nullptr) {             //结点沿左子女访问，并入栈
                visit(q);
                stack[++ top] = q;
                q = q -> lchild;
            }
            
            if (top != -1) {                   //转向右子女
                q = stack[top --];
                q = q -> rchild;
            }
        }
    }
}

void inOrder2(BTNode *root, void (* visit)(BTNode *p)) {
    if (root != nullptr) {
        BTNode * stack[100];
        int top = -1;
        
        BTNode * q = root;
        while (top != -1 || q != nullptr) {
            while (q != nullptr) {             //依次将左子女入栈
                stack[++ top] = q;
                q = q -> lchild;
            }
            if (top != -1) {                   //取出一个无左子女的结点访问，并转向右子女
                q = stack[top --];
                visit(q);
                q = q -> rchild;
            }
        }
    }
}

//int main() {
//    using namespace std;
//    
//    return 0;
//}
