#include<iostream>
using namespace std;

int main(){
    int s;
    cin >> s;
    int arr[s];
    for(int i=0; i<s ;i++){
        cin >> arr[i]; 
    }

    for(int i=0; i<s-1; i++){
        for(int j=i+1; j<s; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp ;
            }
        }
    }

    for(int k=0;k<s;k++){
        cout << arr[k] << " ";
    }
    return 0 ;
}