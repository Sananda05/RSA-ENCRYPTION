#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int gcd(int a,int b)
{
    int temp;
    while(1)
    {
        temp=a%b;
        if(temp==0)
            return b;
        a=b;
        b=temp;
    }
}
int main()
{

    int p,q,N,totient,e=2,d=0,count,m[100],j,value,en,f,len,k,result,option,x;
    char msg[100],data[100];
    printf("Enter the first prime number\n");
    scanf("%d",&p);
    printf("Enter the second prime number\n");
    scanf("%d",&q);

    N=(p*q);

    totient=((p-1)*(q-1));

    while(e<totient)
    {
        count=gcd(e,totient);
        if(count==1)
            break;
        else
            e++;

    }
    printf("%d\n",e);

    for(f=1;f<totient;f++){

        d=((f*e)%totient);
    if(d==1)
        break;
    }
    printf("%d",f);

    printf("Enter a message\n");
    fflush(stdin);
    scanf("%s",msg);

    printf("1.Encrypt\n2.Decrypt\n");
    scanf("%d",&option);

    if(option==1)
    {
        int i;
        for(i=0; msg[i]!=NULL; i++)
        {
            len=strlen(msg);
            for(j=0; j<len; j++)
            {
                value=((msg[j]-65)+1);

                en=pow(value,e);

                result=((en%N)+64);

                data[j]=result;
            }

        }
        for(j=0; j<len; j++)
        {
            printf("%c",data[j]);
        }
    }
    if(option==2)
    {
        int i;
        for(i=0; msg[i]!=NULL; i++)
        {
            len=strlen(msg);
            for(j=0; j<len; j++)
            {
                value=((msg[j]-65)+1);

                en=pow(value,f);

                result=((en%N)+64);

                data[j]=result;
            }

        }
        for(j=0; j<len; j++)
        {
            printf("%c",data[j]);
        }
    }
    getch();
}



