#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int x = 10, y = 20;
    cout<<"Before: x=%d, y=%d\n" ;
    swap(&x, &y);
    cout<<"After:  x=%d, y=%d\n";
}
