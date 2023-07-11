#include <bits/stdc++.h>

using namespace std;

class queue{
    int n; //size of array
    int *arr;
    int front;
    int rear;
    int cnt;

    queue(){
        n = 100;
        arr = new int[n];
        front = 0;
        rear = 0;
        cnt = 0;
    }

    void push(int x){
        if(cnt == n) cout << "array is full" << endl;
        arr[rear % n] = x;
        rear++;
        cnt++;
    }

    int pop(){
        if(cnt == 0) return -1;
         int x = arr[front % n];
         front++;
         cnt--;
         return x; 
    }

    int top(){
        if(cnt == 0) return -1;
        return arr[front % n];
    }
};