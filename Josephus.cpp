//
//  Josephus.cpp
//  oj_test
//
//  Created by 王久亮 on 2019/3/7.
//  Copyright © 2019年 王久亮. All rights reserved.
//

//#include <cstdio>
//#include <list>

//using namespace std;

//int main() {
//    int N, K, M;
//    scanf("%d%d%d", &N, &K, &M);
//    
//    list<int> li;
//    for (int i = 1; i <= N; ++i) {
//        li.push_back(i);
//    }
//    
//    int lastOut = 0;
//    for (list<int>::iterator it = li.begin(); it != li.end(); ) {
//        if (K++ % M == 0) {
//            lastOut = *it;
//            it = li.erase(it);
//            printf("%d\n", lastOut);
//        } else {
//            ++it;
//        }
//        if (it == li.end()) {
//            it = li.begin();
//        }
//    }
//    printf("%d\n", lastOut);
//    
//    return 0;
//}
