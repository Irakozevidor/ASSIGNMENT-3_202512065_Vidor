#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int x = 10, y = 20;
    printf("Before: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After:  x=%d, y=%d\n", x, y);
}
