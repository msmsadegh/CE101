#include <stdio.h>
#define MAX 200
int main()
{
    int count = 0, c = 0, i = 0, num[50], sum[MAX], sumdigit = 0, index = 0;
    int carry = 0, k = 0, j = 0;
    for(i = 0; i < MAX ; i++)
    {
        sum[i] = 0;		    //Initialise all elements tp zero.
    }
    while(count < 100)		//loop to get hundred numbers.
    {
        while((c = getchar()) != '\n' && c != EOF && k < 50) //Each time the 50-digit number is
        {							                        //stored in num.
            num[k] = c - '0';
            k++;
        }
        for(index = 199, j = 49; index >= 0 && j >= 0; index--, j--)
        {
            sumdigit = sum[index] + num[j];
            if(sumdigit < 10)                               //if the sum is less than 10 carry is zero.
            {
                sum[index] = sumdigit + carry;
                carry = 0;
            }
            if(sumdigit >= 10)                              //is the sum is greater than 10 carry is one.
            {
                sum[index] = sumdigit%10 + carry;
                carry = 1;
            }
        }
        sum[index] += carry;
        count++;
        k = 0;
        carry = 0;
    }
    for(i = 0; i < MAX; i++)                                //This loop excludes left zeros from sum array.
        if(sum[i] != 0)
            break;
    for(j = i; j < i+9; j++)                                //This loop prints the first ten digit, because
        printf("%d", sum[j]);                               //is a two digit number we print from i to i + 9.
}
//This code is written by MUSTAFA SADIQI.
