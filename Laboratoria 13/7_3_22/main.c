#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat {
    double bok1;
    double bok2;
    double bok3;
    double pole;
    struct trojkat* next;
};

void pole_z_glowa(struct trojkat* head) {
    struct trojkat* current = head;

    while (current != NULL) {
        double a = current->bok1;
        double b = current->bok2;
        double c = current->bok3;
        double p = (a + b + c) / 2.0;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        current->pole = area;

        current = current->next;
    }
}

void pole_bez_glowy(struct trojkat** head) {
    struct trojkat* current = *head;

    while (current != NULL) {
        double a = current->bok1;
        double b = current->bok2;
        double c = current->bok3;
        double p = (a + b + c) / 2.0;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        current->pole = area;

        current = current->next;
    }
}

int main() {
    struct trojkat* trojkat1 = (struct trojkat*)malloc(sizeof(struct trojkat));
    trojkat1->bok1 = 3.0;
    trojkat1->bok2 = 4.0;
    trojkat1->bok3 = 5.0;
    trojkat1->next = NULL;

    struct trojkat* trojkat2 = (struct trojkat*)malloc(sizeof(struct trojkat));
    trojkat2->bok1 = 7.0;
    trojkat2->bok2 = 9.0;
    trojkat2->bok3 = 12.0;
    trojkat2->next = NULL;

    struct trojkat* trojkat3 = (struct trojkat*)malloc(sizeof(struct trojkat));
    trojkat3->bok1 = 5.5;
    trojkat3->bok2 = 6.5;
    trojkat3->bok3 = 8.0;
    trojkat3->next = NULL;

    struct trojkat* head = trojkat1;
    trojkat1->next = trojkat2;
    trojkat2->next = trojkat3;

    pole_z_glowa(head);

    struct trojkat* current = head;
    while (current != NULL) {
        printf("Pole trojkata o bokach %.2f, %.2f, %.2f wynosi %.2f\n",
               current->bok1, current->bok2, current->bok3, current->pole);
        current = current->next;
    }

    current = head;
    while (current != NULL) {
        struct trojkat* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
