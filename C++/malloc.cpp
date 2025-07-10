#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/*int main(){
    int *p;
    p = (int *)malloc(sizeof(int));
    *p =  40;
    printf("%d\n", *p);
    free(p);
    return 0;
}*/

//Dynamic allocation
int main(){
    int *p;
    p=((int *)malloc(sizeof(int) *5));
    p = new int;
    *p =  40;
    printf("%d\n", *p);
    delete p;
    return 0;
}
