#include<iostream>
using namespace std;
series(int num){
    int sum = 0;
    for(int i = 1 ; i <= num ; i++){
           sum = i + sum;
    
    }
return sum;






}

main(){
    int num;
    cout<<"Enter the number of triangle: ";
    cin>>num;
    cout<<"Dots in the Triangle: "<<series(num);

}