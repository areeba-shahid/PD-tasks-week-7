#include<iostream>
using namespace std;
bool prime(int num){
if(num <= 1){
return false;
}
if(num == 2){
    return true;
}
for(int i = 2 ;  i < num ; i++){
     if(num % i == 0){
     return false;
}
}
return true;
}

main(){
int num;
cout<<"Enter the number: ";
cin>>num;
cout<<prime(num);

}