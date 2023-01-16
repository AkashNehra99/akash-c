// Ananya preparing for GRE ,she decided to learn few new words every day . Each day she learns new words 3 times what she learnt 
// yesterday but forgot 1 word.After p number of days how many words she will learn?

#include <stdio.h>
int main() 
{
    int n[10];
    int i,sum=0;
    for(i=0;i<4;i++)
        scanf("%d",&n[i]);
    for(i=0;i<4;i++)
        sum+=n[i];
    
    printf("%d",sum);
    return 0;
}
