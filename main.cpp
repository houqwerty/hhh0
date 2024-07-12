#include <iostream>
#include "include/a.h"
int main() {
#ifdef DEBUG
    printf("1\n");
#endif
    print();
    return 0;
}
