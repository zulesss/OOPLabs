#include <iostream>
#include "Error.h"
using namespace std;
const int MAX_SIZE=20;

template <class T>
class Vector {
    int size;
    T *beg;
public:
    Vector() : size(0), beg(nullptr) {}

    Vector(int s);
    Vector(int s, T* mas);
    Vector(const Vector& v);
    ~Vector();

    T& operator[](int i);
    int operator()();
    Vector<T>& operator++(); 
    Vector<T> operator++(int); 
};
template <class T>
Vector<T>::Vector(int s) {
    if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
    size = s;
    beg = new T[size];
    for (int i = 0; i < size; ++i)
        beg[i] = i + 1;
}

template <class T>
Vector<T>::Vector(const Vector<T>& v) {
    size = v.size;
    beg = new T[size];
    for (int i = 0; i < size; ++i)
        beg[i] = v.beg[i];
}

template <class T>
Vector<T>::~Vector() {
    if (beg != nullptr) delete[] beg;
}

template <class T>
Vector<T>::Vector(int s, T *mas) {
    if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
    size = s;
    beg = new T[size];
    for (int i = 0; i < size; ++i)
        beg[i] = mas[i];
}

template <class T>
T& Vector<T>::operator[](int i) {
    if (i < 0) throw error("index <0");
    if (i >= size) throw error("index>size");
    return beg[i];
}

template <class T>
int Vector<T>::operator()() {
    return size;
}

template <class T>
Vector<T>& Vector<T>::operator++() {
    if (size + 1 > MAX_SIZE) throw error("Vector length more than MAX_SIZE\n");

    T* new_beg = new T[size + 1];
    for (int i = 0; i < size; ++i) {
        new_beg[i] = beg[i];
    }
    new_beg[size] = size + 1; 
    ++size;

    delete[] beg;
    beg = new_beg;

    return *this;
}

template <class T>
Vector<T> Vector<T>::operator++(int) {
    Vector<T> temp(*this);

    if (size + 1 > MAX_SIZE) throw error("Vector length more than MAX_SIZE\n");

    T* new_beg = new T[size + 1];
    for (int i = 0; i < size; ++i) {
        new_beg[i] = beg[i];
    }
    new_beg[size] = size + 1;
    ++size;

    delete[] beg;
    beg = new_beg;

    return temp;
}