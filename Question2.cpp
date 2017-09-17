//
//  main.cpp
//  Question2
//
//  Created by Kyungmin Han on 2017. 9. 17..
//  Copyright © 2017년 han. All rights reserved.
//
//Question2
//연결리스트를 이용하여 대기번호 관리 프로그램을 구현하라.

#include <iostream>
using namespace std;

struct node {
    int num;
    node* nextNode;
};

node *head = NULL;
node *tail = NULL;

void addNode(int num);
void deleteNode();

int main(int argc, const char * argv[]) {
    
    int insertNum;
    
    while (true) {
        
        cout << "insert number : ";
        cin >> insertNum;
        
        if (insertNum > 0) {
            addNode(insertNum);
        } else if (insertNum == 0) {
            deleteNode();
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
    
    if (head==NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->nextNode = newNode;
        tail = newNode;
    }
}

void deleteNode() {
    if (head != NULL) {
        cout << "output number : " << head->num << endl;
        head = head->nextNode;
    } else {
        cout << "queue empty" << endl;
    }
}
