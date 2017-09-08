//
//  main.cpp
//  SelectionSort
//
//  Created by Kyungmin Han on 2017. 9. 8..
//  Copyright © 2017년 han. All rights reserved.
//

#include <iostream>
using namespace std;

void printInsertNum(int insertArr[], int max);
void sort(int insertArr[], int max);

int main(int argc, const char * argv[]) {
    
    int arr[10];
    int max = 0;
    
    cout << "입력할 숫자의 개수를 입력해 주세요. : ";
    cin >> max;
    
    for (int i=0; i<max; i++) {
        cout << i+1 << " : ";
        cin >> arr[i];
    }
    
    printInsertNum(arr, max);
    sort(arr, max);
    return 0;
}

void printInsertNum (int insertArr[], int max) {
    for (int i=0; i<max; i++) {
        cout << insertArr[i] << " ";
    }
    cout << endl;
}

void sort(int insertArr[], int max) {
    
    int min;
    int temp;
    
    cout << "insert number : ";
    for (int i=0; i<max; i++) {
        cout << insertArr[i] << " ";
    }
    
    for (int i=0; i<max-1; i++) {
        min = i;
        for (int j=i+1; j<max; j++) {
            if (insertArr[min] > insertArr[j]) {
                min = j;
            }
        }
        
        temp = insertArr[min];
        insertArr[min] = insertArr[i];
        insertArr[i] = temp;
        
        //start sort log//
        cout << "\n round " << i << " : ";
        for (int j=0; j<max; j++) {
            cout << insertArr[j] << " ";
        }
        //end sort log//
    }
    
    cout << endl;
}
