//
//  stl_test.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/2/22.
//  Copyright © 2019年 王久亮. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <set>
#include <map>

using namespace std;

void test_vector() {
    vector<int> vi;
    for (int i = 1; i <= 5; ++i) {          //尾部插入
        vi.push_back(i);
    }
    
    vi.insert(vi.begin() + 2, -1);          //在iterator位置插入
    
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");
    
    vi.erase(vi.begin() + 1);              //删除iterator处的元素
    vi.erase(vi.begin() + 1, vi.begin() + 3); //删除区间内的元素
    
    vi.pop_back();                         //删除尾部元素
    for (int i = 0; i < vi.size(); ++i) {
        printf("%d ", vi[i]);
    }
    printf("\n");
    
    vi.clear();                            //删除全部元素
    printf("%zu\n", vi.size());
}

void test_set() {
    set<int> st;                           //set自动增序排列
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    
    for (set<int>::iterator it = st.begin(); it != st.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");
}

void test_map() {
    map<char, int> mp;
    mp['c'] = 1;
    mp['c'] = 2;
    mp['b'] = 2;
    
    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        printf("%c %d\n", it -> first, it -> second);
    }
    printf("\n");
}

//int main() {
////    test_vector();
////    test_set();
//    test_map();
//    return 0;
//}
