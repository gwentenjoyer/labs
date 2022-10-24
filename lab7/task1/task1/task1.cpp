#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
double average(T arr[], int capacity) {
    double avg = 0;
    for (int i = 0; i < capacity; i++) {
        avg += arr[i];
    }
    return avg / capacity;
}

template <typename T>
T amax(T arr[], int capacity) {
    T res = arr[0];
    for (int i = 1; i <= capacity; i++) {
        if (res < arr[i]) {
            res = arr[i];
        }
    }
    return res;
}

template <class T>
class Nums {
private:
    T* arr;
    int capacity;
public:
    Nums() : capacity(0), arr(nullptr) {}
    Nums(int nCap, T *a = 0) {
        arr = new T[nCap];
        capacity = nCap;
        if (a) {
            for (int i = 0; i < nCap; i++) {
                this->arr[i] = a[i];
            }
        }
    }
    ~Nums() {
        if (arr)
            delete[] arr;
    }
    void setCapacity(int nCap) {
        this->capacity = nCap;
    }

    int copyArray(T* array, int len) {
        if (this->capacity <= 0) {
            return EXIT_FAILURE;
        }
        if (this->arr) {
            delete[] this->arr;
        }
        for (int i = 0; i < len; i++) {
            this->arr[i] = array[i];
        }
        return EXIT_SUCCESS;
    }

    int setArray(T* array) {
        if (this->capacity <= 0) {
            return EXIT_FAILURE;
        }
        if (this->arr) {
            delete[] this->arr;
        }
        this->arr = array;
        return EXIT_SUCCESS;
    }

    int setArray() {
        if (this->capacity <= 0) {
            return EXIT_FAILURE;
        }
        if (this->arr) {
            delete[] this->arr;
            this->capacity = 0;
        }
        for (int i = 0; i < this->capacity; i++) {
            cout << "Enter element: ";
            cin >> arr[i];
        }
        return EXIT_SUCCESS;
    }
    double average(T arr[], int capacity) {
        double avg = 0;
        for (int i = 0; i < capacity; i++) {
            avg += arr[i];
        }
        return avg / capacity;
    }
    T* getArr() const {
        return this->arr;
    }
    
    void printArray() const {
        int i;
        for (i = 0; i < this->capacity - 1; i++) {
            cout << this->arr[i] << ", ";
        }
        cout << this->arr[i];
        cout << endl;
    }

};

int main()
{
    /****************** task 1 /******************/

    int ai[] = {4, 5, 6, 2};
    long al[] = { 10, 20, 30, 40 };
    double ad[] = { 32.2, 35.7, 22.3 };
    char ch[] = { 'a', 'b', 'c' }; // 97 98 99
    cout << "Average of array is " << average(ai, sizeof(ai) / sizeof(int)) << endl;
    cout << "Average of array is " << average(al, sizeof(al) / sizeof(long)) << endl;
    cout << "Average of array is " << average(ad, sizeof(ad) / sizeof(double)) << endl;
    cout << "Average of array is " << average(ch, sizeof(ch) / sizeof(char)) << endl;

    /****************** task 1 /******************/


    /****************** task 2 /******************/

    cout << endl << "MAX value of array is " << amax(ai, sizeof(ai) / sizeof(int)) << endl;
    cout << "MAX value of array is " << amax(al, sizeof(al) / sizeof(long)) << endl;
    cout << "MAX value of array is " << amax(ad, sizeof(ad) / sizeof(double)) << endl;
    cout << "MAX value of array is " << amax(ch, sizeof(ch) / sizeof(char)) << endl;

    /****************** task 2 /******************/


    /****************** task 3 /******************/

    cout << endl;

    int lenArrInt = sizeof(ai) / sizeof(int);
    int lenArrchar = sizeof(ch) / sizeof(char);

    Nums<int> arrInt(lenArrInt, ai);
    Nums<char> arrChar(lenArrchar, ch);

    arrInt.printArray();
    cout << average(arrInt.getArr(), lenArrInt) << endl;
    cout << amax(arrInt.getArr(), lenArrInt) << endl << endl;

    arrChar.printArray();
    cout << (char)average(arrChar.getArr(), lenArrchar) << endl;
    cout << amax(arrChar.getArr(), lenArrchar) << endl;

    /****************** task 3 /******************/

    return 0;
}
