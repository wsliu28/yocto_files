#include <stdio.h>

char in_sentance[64];

extern void print_out(char *in_string);

int main()
{
    printf("Please input what she says\n");
    scanf("%s", in_sentance);
    print_out(in_sentance);
   
    return 0;
}
