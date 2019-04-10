#include <stdio.h>
#include <ctype.h>

/* int isuppercas(int c) etc etc */

#include <string.h> /*allows comparison of strings*/
//(strcmp(a,b) == 0)

int main()
{
unsigned char mess[1024];

int d[];



FILE *in;
in = fopen("in.txt", "r");

FILE *out;
out = fopen("out.txt", "w");

FILE *diction
diction = fopen("words.txt", "r");
    
    while (feof(in) == 0){
        fscanf(in, "%s", mess);
        }
    while (feof(diction) == 0){
        fscanf(diction, "%s", d);
        }
        
    if (strcmp(mess, d) == 0){
    printf("Correct key");
}

        
        
   
        
        
        
        
        
        
        
        
        
        
        
    }

    
