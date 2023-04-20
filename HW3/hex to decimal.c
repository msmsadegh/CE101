#include <stdio.h>
#include <math.h>
void getliner(char str[])                       //Getliner function is used to fill in
{                                               //the array's empty places with hex digits.
    int c;		
    int i= 0;
    do{
    c = getchar();
        if(c == '0'|| c =='x' || c == 'X')          //Condition for Optional "0x", "0X".
            continue;
        else{
            str[i] = c;
            i++;
        }
    }while(c != '\n');
        str[i] = '\n';                              //Intentionally add newline character for
}                                               // making a terminating condition in line 22.
void htoi(char str[])               
{
    int num_digits = -1, i = 0, sum = 0, st[2000];
    while(str[i] != '\n')
    {
        num_digits++;                           //Calculated the number of digits to use it-
        i++;                                    //as the descending power of 16.
    }
    int multiplier = pow(16,num_digits);        //Used pow function defined in math.h for
    for(int counter = 0; counter <= num_digits; counter++)        //multiplying the powers of 16s to their corresponding digits.
    {

        if(str[counter] >= '0' && str[counter] <= '9')      // line 28 to 45 is the conversion process.
        {
            st[counter] = ((str[counter] - 48) * multiplier);
        }
        if(str[counter] >= 'A' && str[counter] <= 'F')
        {
			st[counter] = (str[counter] - 55) * multiplier;
        }
        if (str[counter] >= 'a' && str[counter] <= 'f')
        {
			st[counter] = (str[counter] - 87) * multiplier;
        }
        multiplier/=16;
    }
    for(int j = 0; j <= num_digits; j++)        //calculating the results of each multiplication.
    {
        sum = sum + st[j];
    }
    printf("%d",sum);
}
int main()
{
    char str[2000];
    getliner(str);
    htoi(str);
}
