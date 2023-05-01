#include<stdio.h>
struct student{
    char name[1000];
    char id[1000];
    float cg;
};
int main(){
    struct student s[2];
    for(int i=0;i<2;i++){
        fflush(stdin);
        printf("Enter the student name: ");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter the ID: ");
        gets(s[i].id);
        fflush(stdin);
        printf("Enter the CG: ");
        scanf("%f",&s[i].cg);
    }
    float maxCG=0;
    int maxCgID;
    for(int i=0;i<2;i++){
        if(s[i].cg>maxCG){
            maxCG=s[i].cg;
            maxCgID=i;

        }
    }
    printf("Best student info: \n");
    printf("%s\n",s[maxCgID].name);
    printf("%s\n",s[maxCgID].id);
    printf("%.2f",s[maxCgID].cg);
    


    return 0;
}

