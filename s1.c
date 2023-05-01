#include<stdio.h>
struct student{
        int id;
        float cg;
        char name[100];
    };


int main(){
    int n;
    printf("Enter the student number: ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        printf("Enter the student name: ");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter the student ID: ");
        scanf("%d",&s[i].id);
        printf("Enter the CG: ");
        scanf("%f", &s[i].cg);

    }

    for(int i=0;i<n;i++){
        puts(s[i].name);
        printf("%d\n",s[i].id);
        printf("%.2f\n\n",s[i].cg);
    }


    return 0;


}
