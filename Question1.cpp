//
//  main.cpp
//  Question1
//
//  Created by Kyungmin Han on 2017. 9. 16..
//  Copyright © 2017년 han. All rights reserved.
//
//Question 1.
//이 프로그램은 대기번호(자연수)가 입력되면 큐에 저장한다.
//0이 입력되면 큐에서 가장 오래 기다린 대기번호를 꺼내어 출력한다(창구에서 일을 처리한다).
//0보다 작은 수가 입력되면 프로그램을 종료한다.
//0을 입력했을 때 큐가 비었으면 "queue empty!"를 출력하고 배열이 가득 차서 더 넣을 수가 없을 때는 "queue full"을 출력한다.
//크기가 8인 배열을 써서 대기번호 관리 프로그램을 작성하라.

#include <iostream>
using namespace std;

#define MAXNUM 8

int main(int argc, const char * argv[]) {

    int queue[MAXNUM] = {0,0,0,0,0,0,0,0};
    int front = 0;
    int rear = 0;
    int insertNum;
    
    while (true) {
        
        cout << "input number: ";
        cin >> insertNum;
        
        if (insertNum > 0) {            //enqueue
            if (queue[rear] == 0) {
                queue[rear] = insertNum;
                rear = (rear+1)%8;
            } else {
                cout << "queue full" << endl;
            }
        } else if (insertNum == 0) {    //dequeue
            if (queue[front] != 0) {
                cout << "output number: " << queue[front] << endl;
                queue[front] = 0;
                front = (front+1)%8;
            } else {
                cout << "queue empty!" << endl;
            }
        } else {                        //end
            break;
        }
    }
    return 0;
}
