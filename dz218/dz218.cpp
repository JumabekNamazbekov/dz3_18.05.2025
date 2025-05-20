#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
   
    int* ptr = new int;

   
    cout << "Введите число: ";
    cin >> *ptr; 

   
    *ptr = (*ptr) * (*ptr);
    cout << "Квадрат числа: " << *ptr << endl;

   
    delete ptr;

    return 0;
}