#include <iostream>

int main(){
    int ** a = new int *[2];
    int b = 3;
    a[0] = &b;
    a[1] = new int;
    *(a[1]) = 5;
    
    delete a[1];
    a[0] = NULL;
    a[1] = NULL;
    
    delete []a;
    a = NULL;
    
    int ** c = new int *;
    
    *c = new int;
    
    int *** d = &c;
    
    
    delete c;
    c = NULL;
    delete d;
    d = NULL;

    
    return 0;
}