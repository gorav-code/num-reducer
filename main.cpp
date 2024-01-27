#include <iostream>

using namespace std;

bool checkNumber_method1(int n){
    if(n % 2 == 0){
        return true;
    }
    return false;
}

bool checkNumber_method2(int n){
    
}

int main(){
    //bool result = checkNumber_method1(7);
    bool result = checkNumber_method2(8);

    if(result){
        cout << "number is even";
    }else {
        cout << "number is odd";
    }
    return 0;
}