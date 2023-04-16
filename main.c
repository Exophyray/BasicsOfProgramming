#include "libs/data_structures/vector/vector.h"

void test() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack_notEmptyVector();
}

int main() {
    vector v = createVector(12);
    deleteVector(&v);

    return 0;
}