#include "header.h"
#include "try_move.h"

int main() {
    Holder a;
    Holder b;

    swap(a, b);
    std::cout << "---------" << std::endl;
    swap_move(a, b);

    return 0;
}

