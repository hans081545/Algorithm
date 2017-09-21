//
//  main.cpp
//  Question5
//
//  Created by Kyungmin Han on 2017. 9. 20..
//  Copyright © 2017년 han. All rights reserved.
//
// Question5
// n,m을 입력받아서 n/m수분할이 모두 몇개인지 계산하는 함수를 작성하라.
// 예) input n, m: 5 3
//     total: 5

#include <iostream>

int partition(int n, int m);

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, m;
    
    cout << "input n, m: ";
    cin >> n >> m;
    
    cout << partition(n,m) << endl;
    
    return 0;
}

int partition(int n, int m) {
    
    int count = 0, i;
    
    if (n<m)
        m=n;
    if (n==0)
        return 1;
    
    for (i=1; i<=m; i++) {
        count += partition(n-i, i);
    }
    
    return count;
}
