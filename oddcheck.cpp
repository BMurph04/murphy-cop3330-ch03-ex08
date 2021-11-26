#include "oddcheck.h"
using namespace std;

int main(void){
    cout << "Please input a number to check whether it is even or odd." << endl;
    cin >> num;

    if(num%2 == 0){ //Divides number by 2 to see if remainder is 0 or 1
        cout << "The number " << num << " is an even number." << endl;
    }
    else{
        cout << "The number " << num << " is an odd number." << endl;
    }
}