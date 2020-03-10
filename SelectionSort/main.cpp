#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// by Kwame Agyenim Boateng
// 10679301
void SelectionSort(int arr[], int n){
    int a,b,_min,c;
    for(a=0;a<n-1;a++){
        _min = a; // assume the first is minimum
        for(b=a+1;b<n;b++){ // loops and moves to the next index
            if(arr[b] < arr[_min]){ // compares if the next index is < the first
                _min = b; // assigns the next index < the first
            }
        }
            c = arr[a]; // performs swap
            arr[a] = arr[_min];
            arr[_min] = c;
    }

}
void PrintArray(int arr[],int ArrSize){
    for(int i = 0; i < ArrSize;i++){
        cout << arr[i] << " ";
    }
}
int main(void)
{
     int arr[] = {53,54,65,23,83,28,73,48};
     int n = sizeof(arr)/sizeof(arr[0]);
     cout << "*********Selection Sort**********" << endl;
     cout <<"Unsorted array is: ";
        for(int x=0;x<n;x++){
            cout << arr[x] << " ";
        }
    SelectionSort(arr,n);
    cout << "\nSorted array is: ";
    PrintArray(arr,n);

    return 0;
}
