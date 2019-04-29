#include <stdio.h>
#include <string.h>

void rotdecipher(char *input, char *output, int rot) {
    
    for (; *input != '\0'; input++, output++) {
        int c = *input - 65; // Character A = 0, so deduct 65 from the input character.
        if (c >= 0 && c <= 26) {
            c = (c + rot) % 26;
            if (c > 25) c = c - 26;
            *output = c + 65;
        } else {
            *output = *input;
        }
    }
    *output = '\0';
}

void rotcipher(char *input, char *output, int rot) {
    for (; *input != '\0'; input++, output++) {
        int c = *input - 65;
         if (c >= 0 && c <= 26) {
                c = (c - rot) % 26;
                if (c < 0) c = c + 26;
                *output = c + 65;
            } else {
                *output = *input;
        }
    }
    *output = '\0';
}

int strpos(char *haystack, char needle)
{
    char *p = strchr(haystack, needle);
    if (p)
        return (int)(p - haystack);
    return -1;
}

void subcipher(char *cipher, char *input, char *output) {
    for (; *input != '\0'; input++, output++) {
        char c = *input;
        if (c >= 65 && c <= 90) {
            int i =  cipher[c-65];
            *output = i;
        } else {
            *output = *input;
        }
    }
    *output = '\0';
}

void unsubcipher(char *cipher, char *input, char *output) {
    for (; *input != '\0'; input++, output++) {
        char c = *input;
        if (c >= 65 && c <= 90) {
            int i =  strpos(cipher, c);
            *output = i + 65;
        } else {
            *output = *input;
        }
    }
    *ouput = '\0';
}

//void unsubcipher(

int main(int argc, const char * argv[]) {
    
    
    char input[] = "ATTACK AT SUNRISE";
    char cipherText[] = "ZSSZBJ ZS RTMQHRD";
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cipher[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char subCipherText[] = "HSTQLT UTZ DOSA QZ ZIT LIGHL";
    
    char output[1000]; // Our Maximum output size
    
    int key = 1;
    
    
    //unsubcipher(cipher, subCipherText, output);
    //printf("output:%s", output);
     
    
    //rotcipher(alphabet, output, key);
    //printf("cipherText encoded: %s\n",output);
    
    /* Encode then Decode
    rotcipher(input, output, key);
    printf("Encoded %s\n",output);*/
    
    /* Decode the encoded
    rotdecipher(output, output, key);
    printf("Decoded %s\n",output);
    */
    return 0;
    
}
