#include <stdio.h>

int getLine(char str[],int count){
    count=0;
    while (str[count]!='\0')
    {
        count++;
    }
    count=count-1;
    return count;
}
void reverse(char str[],int count){
    int temp;
    for (int i = 0; i<(count+1)/2 ; i++)
    {
        temp=str[i];
        str[i]=str[count-i];
        str[count-i]=temp;
    }
    printf("%s",str);

}

int main(){
    int count;
    char str[10000];
    scanf("%[^\n]s",str);
    int lenght = getLine(str,count);
    reverse(str,lenght);

}