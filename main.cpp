#include <iostream>

void doubleMe(int *, const int);
void printMe(int *, const int);

int main() {
    const int SIZE = 10;
    int numbers[SIZE] = {23,34,45,56,67,78,89,90,12,91};
    int * newArray = nullptr;

    newArray = numbers;
    doubleMe(newArray, SIZE);
    printMe(newArray, SIZE);

    return 0;
}

void doubleMe(int * nums, const int S) {

    for(int i = 0; i < S; i++) {
        *(nums+i) = *(nums+i) *2;
    }
}

void printMe(int * nums, const int S) {

    for(int i = 0; i < S; i++) {
        std::cout << i <<" : " << *(nums+i) << std::endl;
    }
}