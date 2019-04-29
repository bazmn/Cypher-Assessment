#include <stdio.h>
#include <stdlib.h>
int i = 0; 
int crash = 0;
int Switch = 0;
int temp = 0;
char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//////////////////////////////// HARD CODE BELOW ////////////////////////////////////////
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int key = 2; // The Cesar Cyper key
char SubsitutionKEY[] = "LMNOPQRSTUVWXYZABCDEFGHIJK";//the substitution key (Must be capitalised)
char Input[]= "RNGCUG NGV VJKU YQTM"; //Users input to be made into a Cypher

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//////////////////////////////// HARD CODE ABOVE ////////////////////////////////////////
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int main()
{
    printf("Type 1 for Cesar Cyper Incryption\nType 2 for Cesar Cyper Decyption with known key\nType 3 for Cesar Cyper Decyption with unknown key\nType 4 for Subsitution Cyper Encyption\n");
    scanf("%d", &Switch);
    //printf("Enter code: ");
    //scanf("%c", &Input[400]);
        


    switch(Switch){
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//////////////////////////////// CESAR ENCRYPTION ////////////////// //////////////////////
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        case 1:{
            for (i = 0; Input[i] != '\0'; i++){ // starting a counter for how ever large Input is
            //printf("%c, %d, --> %c, %d\n", Input[i] , Input[i], Input[i]+key , Input[i]+key); // displays what is happeing in the workings of the code
            //printf("%s\n", Input);
                if(Input[i] >= 97 && Input[i] <= 122){
                    Input[i]= Input[i] - 32; // making sure all characters are upper case
                }
            
                if(Input[i] >= 65 && Input[i] <= 90){ // Only change Uppercase letter caracters to keep punctuation  
                    Input[i] = Input[i] + key; //adds the key to the char in the array at [i]
        
                    if(Input[i] > 'Z'){ // if statement regarding looping (if it goes past z it will go back to a)
                        Input[i]= Input[i] - 26;
                    }
                }
            }
        printf("%s\n", Input);   
        }
            break; // Jump out of switch()
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//////////////////////////////// CESAR DECRYPTION ////////////////////////////////////////
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        case 2:{ // Jumped to if x == 2
            //printf("Enter code: ");
            //scanf("%s", &Input);
            int dkey = 26 - key;
            for (i = 0; Input[i] != '\0'; i++){ // starting a counter for how ever large Input is       
                //printf("%c, %d, --> %c, %d\n", Input[i] , Input[i], Input[i]+key , Input[i]+key); // displays what is happeing in the workings of the code
                //printf("%s\n", Input);
                if(Input[i] >= 97 && Input[i] <= 122){
                    Input[i]= Input[i] - 32; // making sure all characters are upper case
                }
                
                if(Input[i] >= 65 && Input[i] <= 90){ // Only change Uppercase letter caracters to keep punctuation  
                    Input[i] = Input[i] + dkey; //adds the key to the char in the array at [i]
            
                    if(Input[i] > 'Z'){ // if statement regarding looping (if it goes past z it will go back to a)
                        Input[i]= Input[i] - 26;
                    }
                }
            }
    
        printf("%s\n", Input);
        
        }
            break;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//////////////////////////////// CESAR DECRYPTION WITH NO KEY////////////////////////
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~           
        case 3:{
            //printf("Enter code: ");
            //scanf("%s", &Input);
            for (crash = 0; crash <= 26; crash++){  
                for (i = 0; Input[i] != '\0'; i++){ // starting a counter for how ever large Input is                   
                            //printf("%c, %d, -->+%d--> %c, %d\n", Input[i] , Input[i], key, Input[i]+key , Input[i]+key); // displays what is happeing in the workings of the code
                            //printf("%s\n", Input);
                    if(Input[i] >= 97 && Input[i] <= 122){
                        Input[i]= Input[i] - 32; // making sure all characters are upper case
                    }
                    
                    if(Input[i] >= 65 && Input[i] <= 90){ // Only change Uppercase letter caracters to keep punctuation  
                        Input[i] = Input[i] + 1; //adds the key to the char in the array at [i]
                        
                        if(Input[i] > 'Z'){ // if statement regarding looping (if it goes past z it will go back to a)
                            Input[i]= Input[i] - 26;
                        }
                    }
                }
                
            printf("%s\n", Input);
            }
        }
            break;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//////////////////////////////// SUBSITUTION ENCRYPTION ////////////////////////
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~           
      
        case 4:{
            while(Input[i] != '\0'){ //While the code still has letters to convert
    
         if(Input[i] >= 97 && Input[i] <= 122){
                    Input[i]= Input[i] - 32; // making sure all characters are upper case
                }
                
        if(Input[i] < 65 || Input[i] > 90){ //if the Input isn't a capital letter then leave it be  
                Input[i] = Input[i];//move onto the next figure, leave punctuation
                i++;
            }

        
        if(Input[i] == ALPHA[temp]){ //only if the letter of code matches the letter of A2Z
                Input[i] = SubsitutionKEY[temp]; //Change the letter of the code to they key
                i++; //Move to the next letter
                temp = 0; // Reset the temp
                //printf("%s\n", code);
        }
        
        else {
            //printf("%d NOPE\n", temp);
            temp++; //If the code doesn't match the alphabet, move onto the next letter untill it does
        }

    }
    
    printf("%s", Input);
            
        }

            break;
            
        default: return (0); // Jumped to if nothing
    
    }
}
    
    
    
    
