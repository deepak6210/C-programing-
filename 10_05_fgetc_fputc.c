#include<stdio.h>
int main(){
     FILE *ptr;
     ptr = fopen("getcdemo.txt", "r");
    //  char c = fgetc(ptr);
    //  printf("The value of my charcter is %c\n" , fgetc(ptr));
    //  printf("The value of my charcter is %c\n" , fgetc(ptr));
    //  printf("The value of my charcter is %c\n" , fgetc(ptr));
    //  printf("The value of my charcter is %c\n" , fgetc(ptr));
    //  printf("The value of my charcter is %c\n" , fgetc(ptr));

     ptr = fopen("putcdemo.txt", "w");
     putc('c',ptr);
     fclose(ptr);

    return 0;

}