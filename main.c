#include <stdio.h>

int main(){
   char text[70]; //
   int key, index;
   
   printf("Type the text you would like to encrypt: \n");
   gets(text);
   printf("Enter the key you wish to use: ");
   scanf("%d", &key);
   
  return 0;
}
