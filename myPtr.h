//
// Created by zamfi on 1/9/21.
//

#ifndef MYPOINTER_MYPTR_H
#define MYPOINTER_MYPTR_H
#include <iostream>

template <typename T>
class myPtr {
    T *ptr;
public :
    explicit myPtr(T* param_myPtr) : ptr(param_myPtr) {}
    myPtr(const T value);
    myPtr();
    ~myPtr();
    T* operator = ( T* pointer);
//    T* operator = (const T& pointer);
    T& operator* ();
    T* operator -> ();
    void Print ();
    T* GetPointer();

};
template<typename T>
myPtr<T>::myPtr(const T value) {
    ptr = new T (value);
}

template<typename T>
T& myPtr<T>::operator*() {
    return *ptr;
}

template<typename T>
myPtr<T>::~myPtr() {
    delete ptr;
}

template<typename T>
T *myPtr<T>::operator->() {
    return ptr;
}

template<typename T>
T *myPtr<T>::GetPointer() {
    return ptr;
}

template<typename T>
myPtr<T>::myPtr() {
    this->ptr = new T();
}

template<typename T>
T *myPtr<T>::operator=(T *pointer) {
    delete ptr;
    ptr = pointer;
    return ptr;
}

template<typename T>
void myPtr<T>::Print() {
    std::cout << "Print from myPtr class" << '\n';
}

/*template<typename T>
T *myPtr<T>::operator=(const T &pointer) {

    ptr = &pointer;
    return ptr;
}*/


#endif //MYPOINTER_MYPTR_H
