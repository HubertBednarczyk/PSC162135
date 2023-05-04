#include <stdio.h>
#include <stdlib.h>

struct trojkat {
    double a;
    double b;
    double c;
};

double obwod(struct trojkat t) {
    return t.a + t.b + t.c;
}

int main() {
    struct trojkat t1 = {3, 4, 5};
    printf("Obwdd trojkata o bokach %f, %f i %f wynosi %f.\n", t1.a, t1.b, t1.c, obwod(t1));

    return 0;
}
