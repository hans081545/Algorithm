//
//  main.cpp
//  Question3
//
//  Created by Kyungmin Han on 2017. 9. 18..
//  Copyright © 2017년 han. All rights reserved.
//
//Question3
//Question2에서 자연수 대기번호를 입력받으면 연결리스트에 저장하고,
//0이 입력되면 가장 최근에 입력된 번호를 순서대로 출력하고, 음수가 입력되면 종료하는 프로그램 작성.

#include <iostream>
using namespace std;

struct node {
    int num;
    node* nextNode;
};

node *head = NULL, *tail = NULL;

void addNode(int num);
void printNum(node *printNode);

int main(int argc, const char * argv[]) {
    
    int insertNum;
    
    while (true) {
        cout << "insert number : ";
        cin >> insertNum;
        
        if (insertNum > 0) {
            addNode(insertNum);
        } else if (insertNum == 0) {
            printNum(head);
        } else {
            break;
        }
    }
    
    return 0;
}

void addNode(int num) {
    
    node *newNode = new node;
    newNode->num = num;
    newNode->nextNode = NULL;
    
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->nextNode = newNode;
        tail = newNode;
    }
}

void printNum(node *printNode) {
    if (head != NULL) {
        if (printNode->nextNode != NULL) {
            printNum(printNode->nextNode);
        }
        cout << "output number : " << printNode->num << endl;
    } else {
        cout << "Node Empty" << endl;
    }
}
