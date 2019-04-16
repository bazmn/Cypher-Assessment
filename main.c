#include <stdio.h>
#include <stdlib.h>

int i; 
int key = 5; // how much the array will move

int main()
{
    char A2Z[] = "ABCDEFGHIJKLMNOPQRSTUVQXYZ"; //first array
for (i = 0; A2Z[i] != '\0'; i++) // starting a counter for how ever large A2Z is
{
    printf("%c, %d, --> %c, %d\n", A2Z[i] , A2Z[i], A2Z[i]+key , A2Z[i]+key); // displays what is happeing in the workings of the code
    printf("%s\n", A2Z);
    A2Z[i] = A2Z[i] + key; //adds the key to the char in the array at [i]
    if(A2Z[i] > 'Z'){ // if statement regarding looping (if it goes past z it will go back to a)
        A2Z[i]= A2Z[i] - 26;
    }
    if(A2Z[i] = ' '){ // attempting to get it to recognise spaces.
        A2Z[i]= 32;
}

printf("%s\n", A2Z);

}
}
    
