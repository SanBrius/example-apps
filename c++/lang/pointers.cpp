#include <iostream>

using namespace std;

void simplePointers()
{
    int val = 5;
    int *valRef = &val;

    cout << "referece: " << valRef << endl;
    cout << "value: " << *valRef << endl;    
}

void arrayPointers() 
{
    int arr[] = { 1, 5, 8 };
    cout << "Dereference array: " << *arr << endl;
    cout << "Add 1 to dereferenced val: " << *arr + 1 << endl;
    cout << "Add 1 and dereference: " << *(arr + 1) << endl;
    cout << "Second element reference: " << &arr[1] << endl;
    cout << "Array pointer + 1: " << arr + 1 << endl;
}

void functionPtrAndRef(int *a, int &b)
{
    cout << "Function pointer value: " << a << endl;
    cout << "Function reference value: " << &b << endl;
}

int* referenceReturning(int &a) 
{
    return &a;
}

int add(int x, int y)
{
    return x + y;
}

int functionPointer(int (*addPointer)(int, int), int x, int y)
{
    return addPointer(x, y);
}

int main() 
{
    simplePointers();
    cout << endl;

    arrayPointers();
    cout << endl;

    int val = 5;
    int *a = &val;
    functionPtrAndRef(a, *a);

    cout << "Pointer returned from function: " << referenceReturning(*a) << endl;

    cout << "Function pointer: " << functionPointer(add, 2, 6) << endl;
}

