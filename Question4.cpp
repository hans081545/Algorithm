//
//  main.cpp
//  Question4
//
//  Created by Kyungmin Han on 2017. 9. 19..
//  Copyright © 2017년 han. All rights reserved.
//
// Question4
// 피보나치 수 구하기.
// ex) f(1) = 1, f(2) = 1, f(n+2) = f(n) + f(n+1)...
// 피보나치 수열의 n번째 항 f(n)을 계산하여 반환하는 함수를 작성하고, f(20), f(50)을 구하라.

#include <iostream>

using namespace std;

long fibonacci(int n);

int main(int argc, const char * argv[]) {
    
    int n=0;
    
    cout << "input : ";
    cin >> n;
    
    cout << "f(" << n << ") : " << fibonacci(n) << endl;
    
    return 0;
}

long fibonacci(int n) {
    
    if (n==1 || n==2) {
        return 1;
    }
    
    return (fibonacci(n-1) + fibonacci(n-2));
}
