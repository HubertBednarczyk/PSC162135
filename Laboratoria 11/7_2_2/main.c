#include <stdio.h>
#include <stdlib.h>

struct trojkat {
    double a;
    double b;
    double c;
};

void przepisz(struct trojkat troj1, struct trojkat* troj2) {
    troj2->a = troj1.a;
    troj2->b = troj1.b;
    troj2->c = troj1.c;
}

int main() {
    struct trojkat t1 = {3, 4, 5};
    struct trojkat t2;
    przepisz(t1, &t2);
    printf("Trojkat 2 ma boki o dlugosciach %f, %f i %f.\n", t2.a, t2.b, t2.c);

    return 0;
}
