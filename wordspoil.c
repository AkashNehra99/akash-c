// Program to find the number of words consists in a given String. 

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i,count=0;
 
     scanf("%[^\n]s", str);
    for (i = 0; str[i]!='\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
            count++;    
    }
    printf("%d\n",count+1);
    return 0;
}
