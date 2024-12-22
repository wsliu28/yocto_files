#include <stdio.h>

char *in_sentance=NULL;

extern void print_out(char *in_string);

int main()
{
    printf("Please input what you say\n");
    scanf("%s", in_sentance);
    print_out(in_sentance)
   
    return 0;
}