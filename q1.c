#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000];
    gets(ch);
    int sum=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>=48&&ch[i]<=57){
        
            sum=sum+ch[i]-48;
        }
    }

    printf("%d",sum);


    return 0;
}

