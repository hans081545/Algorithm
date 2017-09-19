//
//  main.cpp
//  Question4
//
//  Created by Kyungmin Han on 2017. 9. 19..
//  Copyright © 2017년 han. All rights reserved.
//
// Question3
// 피보나치 수 구하기.
// ex) f(1) = 1, f(2) = 1, f(n+2) = f(n) + f(n+1)...
// 피보나치 수열의 n번째 항 f(n)을 계산하여 반환하는 함수를 작성하고, f(20), f(50)을 구하라.

#include <iostream>

using namespace std;

void fibonacci(long param1, long param2, int currentIndex, int max);

int main(int argc, const char * argv[]) {
    
    int max=0;
    int currentIndex=3;
    long f1=1, f2=1;
    
    cout << "input : ";
    cin >> max;
    
    cout << "f(1) : " << f1 << ", f(2) : " << f2;
    
    if (max > 2) {
        fibonacci(f1, f1+f2, currentIndex, max);
    }
    cout << endl;
    
    return 0;
}

void fibonacci(long param1, long param2, int currentIndex, int max) {
    
    cout << ", f(" << currentIndex << ") : ";
    cout << param2;
    
    int increageIndex = currentIndex+1;
    
    if (increageIndex <= max) {
        fibonacci(param2, param1+param2, increageIndex, max);
    }
}
