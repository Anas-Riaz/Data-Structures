#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i =0 ; i< n; i++){
        cin >> arr[i];
    }

    int counter= 1;
    while(counter < n){
        cout << "in while "<< endl;
        for(int i  = 0; i< n- counter; i++){
        cout << "in for "<< endl;    
            if(arr[i]> arr[i+1]){
                cout << "swaping "<< endl;
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i] = temp ; 
            }
        }
        counter++ ;
    }
    for(int j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    
    return 0;
}