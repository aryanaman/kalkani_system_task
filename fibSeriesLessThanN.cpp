#include <iostream>
using namespace std;

int main() {
    long long int n, firstNum = 0, secondNum = 1, fibTerm = 0;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Fibonacci Series less than "<< n << " : ";

    for (long long int i = 0; i <= n; i++) {
        // Prints the first two terms.
        if(i == 0 ) {
            cout << firstNum << ", ";
            continue;
        }
        if(i == 1) {
            cout << secondNum<< ", ";
            continue;
        }
        fibTerm = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = fibTerm;
        
        if(fibTerm <= n){
             cout << fibTerm << ", ";
        }
        else{
            break;
        }
       
        i=fibTerm;
    }
    return 0;
}