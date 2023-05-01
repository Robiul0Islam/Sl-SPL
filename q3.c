#include<stdint.h>
#include<string.h>
int main(){
    char str[1000];
    gets(str);
    int sum=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>=48&&str[i]<=57){
            sum=sum+(str[i]-48);
        }
    }
    
    printf("%d",sum);
    return 0;
}