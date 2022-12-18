
#include <iostream>
using namespace std;

//function for printing the pattern
void patternPrinting(int n){
     int row = 1;
    while(row <= n){

        //space printing
        int space = n-row;
        while(space){
            cout<<"  ";
            space--;
        }
        
        // print odd numbers
        int col =1, num = 0;
        while(col <= row){
                cout<<col+num<<" ";
            col++;
            num++;
        }
        
        //print alphabets
        int col2 =1;
        while(col2 < row){
            cout<<char(64+col2)<<" ";
            col2++;
        }
        cout<<endl;
        row = row+1;
    }
    
    int row2 =1;
        while(row2 <= n){
            
        //space print
        int space = row2;
        while(space){
            cout<<"  ";
            space--;
        }
        
        //print odd numbers
        int col =1, num=0;
        while(col < n-row2+1){
            cout<<col+num << " ";
            col++;
            num++;
        }
       //print alphabet
        int col2 =1;
        while(col2 < n-row2){
            cout<<char(64+col2)<<" ";
            col2++;
        }
        cout<<endl;
        row2 = row2+1;
    }
}

int main() {
    int n ; 
    cout<<"Please enter pattern size : ";
    cin>>n;
    cout <<endl;
    patternPrinting(n);

    return 0;
}