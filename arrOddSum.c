// KIET Play with ODD EVEN numbers.

#include <stdio.h>
int main() 
{
    int sz(int);
    int n,a[20],b[20],flag;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
    {
        flag=0;
        if((sz(a[i])==2)&&(sz(b[i])==2))
        { 
                if((a[i]%2!=0)&&(b[i]%2==0))
                    printf("%d\n",(a[i]+b[i]));
                else if((a[i]%2==0)&&(b[i]%2!=0))
                    printf("%d\n",(a[i]-b[i]));
            flag=1;
        }
       if(((a[i]%2==0)&&(b[i]%2==0))||((a[i]%2!=0)&&(b[i]%2!=0)))
       { 
           printf("%d\n",(a[i]*b[i]));
           flag=1;
       }
        else if(flag==0) 
            printf("%d\n",0);
    }        
    return 0;
}
int sz(int x)
{
    int z=x,c=0;
    while(z>0)
    {
        c++;
        z/=10;
    }
    return c;
}
