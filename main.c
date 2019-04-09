#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[] = "ABCDEFGHIJKLMNOPQRSTUVQXYZ";

int i = 0; 
int key = 1;
char No1 = array[0];

//printf("%s\n", array);
while(i<25)
{
    //printf("%c, %d, --> %c, %d\n", array[i] , array[i], array[i]+key , array[i]+key);
    printf("%s%c\n", array, No1);
    i++;
    //key++;
    array[i] = array[i] + key;
    No1 = array[0];
}

printf("%s\n", array);

}
    
