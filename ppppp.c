#include <stdio.h> 
int main () 
{
    int a; 
    int *p = &a;
     printf("%p\n",p); 
     p++; 
     printf("%p\n",p);
    p -= 2; 
    printf("%p\n",p);
    return 0; 
}