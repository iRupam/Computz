#include<stdio.h>
#include<string.h>
void main(){
    char str_input[100];
    char str_reversed[100];
    puts("Enter some string\n");
    fgets(str_input,sizeof str_input,stdin);
    int i,j;
    for(i=strlen(str_input)-1,j=0;i>=0;i--;j++)
    {
        str_reversed[j]=str_input[i];
        }
    str_reversed[j]='\0';
    puts(str_reversed);
}
