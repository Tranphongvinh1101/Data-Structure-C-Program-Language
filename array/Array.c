#include <stdio.h>

// Create functions to insert, remove, add one element in array

void Add(int arr[], int* n, int Value){
    arr[*n] = Value;
    (*n)++;
}

void Insert(int arr[], int* n, int pos, int Value){
    for(int i = *(n); i >= pos; i--){
        arr[i + 1] = arr[i];
    }
    arr[pos] = Value;
    (*n)++;
}

void Remove(int arr[], int* n, int pos){
    for(int i = pos; i <= *n; i++){
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main(){
    int Array[10] = {1, 3, 6, 9};
    int ElementNum = 4;
    //Add(Array, &ElementNum, 12);
    //Remove(Array, &ElementNum, 1);
    //Insert(Array, &ElementNum, 2, 3);
    for(int i = 0; i < ElementNum; i++){
        printf("[%d]  ", *(Array + i));
    }

}



