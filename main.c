#include <stdio.h>

int main(){
    
    /*Will be used for storing the user's choice on 
    rotation/substitution cipher and either encryption or decryption of text*/
    int programchoice;
    
    //Declares the max length of text that the program will process
    char str[1000];
    
    //Menu for user to choose from
    printf("To encrypt with a rotation cipher press 1 then ENTER\n");
    printf("To decrypt with a rotation cipher press 2 then ENTER\n");
    printf("To encrypt with a substitution cipher press 3 then ENTER\n");
    printf("To decrypt with a substitution cipher press 4 then ENTER\n");
    
    //Stores user's choice at "programchoice"
    scanf("%d", &programchoice);
    
    printf("Please enter text\t");
    scanf("%[^\n]%*c", str);
   // printf("%d", str);
   
   printf("The text is %s \n", str);
    
   /* switch(x){
        case 1:
            for(programchoice = 1);
        
        
        
    }*/
    
    
   return 0; 
}