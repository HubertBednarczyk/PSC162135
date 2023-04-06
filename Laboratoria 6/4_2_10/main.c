#include <stdio.h>
#include <stdlib.h>
//a)
int max(int n, int *tab){
    int temp = *tab;
    for(int i=1;i<n;i++){
        if(temp < *(tab+i)){
            temp = *(tab+i);
        }
    }
    return temp;
}

//b)
int min(int n, int *tab){
    int temp = *tab;
    for(int i =1;i<n;i++){
        if(temp > *(tab+i)){
            temp = *(tab+i);
        }
    }
    return temp;
}

//c)
int index2(int n, int *tab){
    for(int i =0;i<n;i++){
        if(*(tab+i)==n){
            return i;
        }
    }
    return -1;
}

//d)
int indexmin(int n, int *tab){
    int min = tab[0];
    int min_index = 0;
    for(int i=0;i<n;i++){
        if(*(tab+i) < min){
            min = *(tab+i);
            min_index =i;
        }
    }
    return min_index;
}

//e)
int abs_maxwartosc(int n, int *tab){
    int max = abs(tab[0]);
    for(int i =0;i<n;i++){
        if(abs(*(tab+i)) > max){
            max=abs(*(tab+i));
        }
    }
    return max;
}

//f)
int abs_indexabs(int n, int *tab){
    int max = abs(tab[0]);
    int max_index = 0;
    for(int i =1;i<n;i++){
        if(abs(*(tab+i)) > max){
            max = abs(*(tab+i));
            max_index = i;
        }
    }
    return max_index;
}

int main()
{
    int n = 5;
    int tab[] = {5,4,3,-22,6};
    printf("Max wartosc: %d\n",max(n,tab));
    printf("Min wartosc: %d\n",min(n,tab));
    printf("Index liczby 5: %d\n", index2(3,tab));
    printf("Min index tab: %d\n",indexmin(n,tab));
    printf("Max wartosc abs tab: %d\n",abs_maxwartosc(n,tab));
    printf("Index najwiekszego abs: %d\n",abs_indexabs(n,tab));
    return 0;
}
