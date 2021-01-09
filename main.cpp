#include <iostream>
#include "myPtr.h"
class Entity {
public:
    void Print (){
        std::cout << "Hello " << std::endl;
    }
};
int main() {

    myPtr<int> ptr (10);
    std::cout << *ptr << '\n';

    myPtr<Entity> ptrEntity ;
    ptrEntity->Print();

     int *x = new int(100);
    myPtr<int> ptr2 (x) ;
    std::cout << *ptr2 << std::endl;

    return 0;

}
