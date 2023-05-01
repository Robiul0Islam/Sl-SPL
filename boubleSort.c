
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int len=strlen(str);
    int flag=0;
    int j=len-1;
    for(int i=0;i<len;i++){
        if(str[i]!=str[j]){
            flag=1;
            break;

            
        }
        j--;
    }
    if(flag==1){
        printf("Not Pal");

    }
    else{
        printf("yes pal");
    }

    

    return 0;
}