#include <stdio.h>
#include <stdlib.h>
int i; 
int key = 15; // how much the array will move
char A2Z[] = "WX BJB & SPS, NDJ'GT IWT QTHI"; //first array


int main()
{
int dkey = 26 - key;    
switch(2) {
    case 1:{
    //printf("Enter code: ");
    //scanf("%s", &A2Z);
        for (i = 0; A2Z[i] != '\0'; i++) // starting a counter for how ever large A2Z is
        {
        //printf("%c, %d, --> %c, %d\n", A2Z[i] , A2Z[i], A2Z[i]+key , A2Z[i]+key); // displays what is happeing in the workings of the code
        //printf("%s\n", A2Z);
            if(A2Z[i] >= 97 && A2Z[i] <= 122){
                A2Z[i]= A2Z[i] - 32; // making sure all characters are upper case
           }
        
            if(A2Z[i] >= 65 && A2Z[i] <= 90){ // Only change Uppercase letter caracters to keep punctuation  
                A2Z[i] = A2Z[i] + key; //adds the key to the char in the array at [i]
    
                if(A2Z[i] > 'Z'){ // if statement regarding looping (if it goes past z it will go back to a)
                    A2Z[i]= A2Z[i] - 26;
                }
            }
        }
    printf("%s\n", A2Z);   
    
        break; // Jump out of switch()
    
    case 2:{ // Jumped to if x == 2
        //printf("Enter code: ");
        //scanf("%s", &A2Z);
        for (i = 0; A2Z[i] != '\0'; i++) // starting a counter for how ever large A2Z is
        {
            //printf("%c, %d, --> %c, %d\n", A2Z[i] , A2Z[i], A2Z[i]+key , A2Z[i]+key); // displays what is happeing in the workings of the code
            //printf("%s\n", A2Z);
            if(A2Z[i] >= 97 && A2Z[i] <= 122){
                A2Z[i]= A2Z[i] - 32; // making sure all characters are upper case
            }
            
            if(A2Z[i] >= 65 && A2Z[i] <= 90){ // Only change Uppercase letter caracters to keep punctuation  
                A2Z[i] = A2Z[i] + dkey; //adds the key to the char in the array at [i]
        
                if(A2Z[i] > 'Z'){ // if statement regarding looping (if it goes past z it will go back to a)
                    A2Z[i]= A2Z[i] - 26;
                }
            }
        }

    printf("%s\n", A2Z);
    }

        break;
    case 3: // Jumped to if x == 3
        break;
    default: return (0); // Jumped to if nothing
}
}
}



