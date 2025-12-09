#include<iostream>
using namespace std;

int main(){
    
    int a = 0;
    int even = 0;
    int odd = 0;
    
    cout << "Enter an integer: ";
        cin >> a;
        while(a != 0){
            if(a%2 == 0){
                even++ ;
            }
            else{
                odd++ ;
            }

            cout << "Enter an integer: ";
            cin >> a;
        }
        
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd ;
    return 0;
}