#include<stdio.h>
#include<string.h>

struct Myword
{
    char word[100];
    int wordlen;
};

int main(){
    struct Myword m[1000];
    FILE *fp1,*fp2;
    fp1=fopen("newFile.txt","r");
    int len;
    int i=0;
    while (!feof(fp1))
    {
        fscanf(fp1,"%s",m[i].word);
        len=strlen(m[i].word);
        m[i].wordlen=len;
        i++;
    }
    fclose(fp2);
    int maxIndex;

    int max=m[0].wordlen;
    for(int k=0;k<i;k++){
        if(m[k].wordlen>max){
            max=m[k].wordlen;
            maxIndex=k;
        }
    }

    fp2=fopen("Output2.txt","a");
    fprintf(fp2,"%d\n",m[maxIndex].wordlen);
    fprintf(fp2,"%s",m[maxIndex].word);

    fclose(fp2);

    
}
