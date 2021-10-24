#include <iostream>
using namespace std;
void main()
{
    int a=2;
    switch(a) {
        case 1: 
            a=a+2;
        case 2: 
            a=a-2;
        default: 
            a++;

    }
    cout<<a; 

}