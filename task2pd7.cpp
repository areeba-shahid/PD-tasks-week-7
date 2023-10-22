#include<iostream>
using namespace std;
int upper(int rows){
     for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
 
        }   }
int lower(int rows)

{ for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    
}


main(){
int rows = 0;
cout<<"Enter the desired number of rows: ";
cin >> rows;
rows = rows / 2;
upper(rows);
lower(rows);
}
