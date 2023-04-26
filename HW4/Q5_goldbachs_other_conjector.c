#include<stdio.h>
int is_prime(int);
int main()
{
    int a=3,i,j,f=0;
    while(f==0)
    {
        if (is_prime(a)==0) //checking if our odd number is prime or not
        {
            f=1;//first we consider false is true:) and a is the exeption
            for(i=2;i<a;i++)
            {
                if(is_prime(i)==1) //cheking i a is prime
                {
                    for(j=1;j<a;j++)
                    {
                        if(a==i+2*j*j)
                        {
                            f=0;//if the number is not the exeption f=0
                        }
                    }
                }
            }
            if(f==1) //if at the end the f wont be 0 we have found the exeption
                printf("& finally:%d",a);
        }
        a+=2;//going to the next odd number
        if(f==1)
            break;
    }

}
int is_prime(int a)//a function to check if a number is prime or not
{
    int i;
    if(a==2)
        return 1;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}

