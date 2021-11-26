#include<iostream>
using namespace std;

int main(){
    int N;
    int a = 0;
    int b = 0;
    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        
        if(N%2 ==0){
            a = a+1;
            if(N == 0){
                a = a-1;

            }
        }
        
        else{
            b = b+1;
        }
        


    }
    cout << "#Even numbers = " << a ;
    cout << "\n#Odd numbers = " << b ;
    return 0;
}
