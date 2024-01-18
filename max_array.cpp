#include <iostream>
using namespace std;


int getMin(int arr[] , int size){

    int min = INT32_MAX;

    for(int i = 0 ; i < size ; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;

}


int getMax( int arr[] , int size ){
    
    int max = INT32_MIN;

    for(int i = 0 ; i < size ; i++){

        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}




int main(){
    int n;
    cin>>n;

    int num[100];

    for(int i = 0 ; i < n ; i++ ){
        cin>>num[i];

    }

    cout<< "The maximum number in the array is " << getMax(num , n) << endl;
    cout<< "The minimum number in the array is " << getMin(num , n) << endl;

    return 0;


}