//
//  main.cpp
//  BubbleSort
//
//  Created by Kyungmin Han on 2017. 9. 7..
//  Copyright © 2017년 han. All rights reserved.
//

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int maxNum);

int main(int argc, const char * argv[]) {
    
    int arr[10];
    int maxNum = 0;
    cout << "입력할 숫자의 개수를 입력해 주세요. (1~10) : ";
    cin >> maxNum;
    
    cout << "숫자를 입력해 주세요. : \n";
    for (int i=0; i<maxNum; i++) {
        cout << i+1 << " : ";
        cin >> arr[i];
    }
    
    bubbleSort(arr, maxNum);
    
    return 0;
}

void bubbleSort(int arr[], int maxNum) {
    
    int temp;
    bool changeFlag = false;
    
    cout << "insert number : ";
    
    for (int i=0; i<maxNum; i++) {
        cout << arr[i] << " ";
    }
    
    for (int i=0; i<maxNum; i++) {
        changeFlag = false;
        
        for (int j=0; j<maxNum-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                changeFlag = true;
            }
        }
        
        if (changeFlag == false) {
            break;
        }
        
        //start sort log//
        cout << endl;
        cout << "round " << i << ": ";
        for (int j=0; j<maxNum; j++) {
            cout << arr[j] << " ";
        }
        //end sort log//
    }
    
    cout << endl;
}
