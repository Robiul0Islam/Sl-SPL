#include<stdio.h>

struct match
{
    int run;
    int wct;
    float point;
    
};


struct player
{
    char name[1000];
    char cntry[1000];
    //float total point;
    struct match m[3];
};

int main(){
    struct player p[2];
    printf("Enter the info: ");
    for(int i=0;i<2;i++){
        printf("Enter the player name: ");
        fflush(stdin);
        gets(p[i].name);
        printf("Enter the player country name: ");
        fflush(stdin);
        gets(p[i].cntry);
        for(int j=0;j<3;j++){
            printf("Match number %d",j+1);
            printf(" Enter the run: ");
            scanf("%d",&p[i].m[j].run);
        }
        for(int j=0;j<3;j++){
            printf("Match number %d",j+1);
            printf(" Enter the wicket: ");
            scanf("%d",&p[i].m[j].wct);
        }
        
        for(int j=0;j<3;j++){
            float sum=0;
            sum=p[i].m[j].wct*12;
            if(p[i].m[j].run<=25){
                sum=sum+5;
            }
            else if(p[i].m[j].run<=50){
                sum=sum+10;
            }
            else if(p[i].m[j].run<=75){
                sum=sum+15;
            }
            else if(p[i].m[j].run>75){
                sum=sum+20;
            }
            p[i].m[j].point=sum;
        }
        
    }

    for(int j=0;j<3;j++){
        printf("Match number: %d",j+1);
        for(int i=0;i<2;i++){
            printf("%s : %.2f\n",p[i].name,p[i].m[j].point);
            

        }
    }
}



