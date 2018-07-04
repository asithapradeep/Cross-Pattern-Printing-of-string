#include <stdio.h>
#include<string.h>
int main()
{
    char str[]="BHAVANI";
    int a,b,len,c,space;
    len=strlen(str);//7
    printf("Enter the amount of spacing you want");
    scanf("%d",&space);
    for(a=space,b=len,c=b-1;a!=((len/2)+space);a++,b-=2,c--){
    printf("%*.1s",a,str+(a-space));
    printf("%*.1s\n",b,str+(c));
    }
     printf("%*.1s\n",a,str+(a-space));
     for(a=a-1,b=(a+1)-space,c=b+1;a>=space;a--,b+=2,c++){
    printf("%*.1s",a,str+(a-space));
    printf("%*.1s\n",b,str+(c));
    }
    return 0;
}
