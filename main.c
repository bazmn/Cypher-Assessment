#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[] = "ABCDEFGHIJKLMNOPQRSTUVQXYZ";

int i = 0; 
int key = 1;

while(i<25)
{
    //printf("%c, %d, --> %c, %d\n", array[i] , array[i], array[i]+key , array[i]+key);
    printf("%s, %d leads to %s\n", array, array[i], array+key);
    i++;
    key++;
}
}
    
