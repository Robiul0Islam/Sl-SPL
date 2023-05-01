#include<stdio.h>
#include<string.h>
struct person
{
    char name[100];
    int age;
};
int main(){
    struct person p[100];
    FILE *fp1,*fp2;

    fp1=fopen("newFile.txt","r");
    int i=0;
    while (!feof(fp1))
    {
        fscanf(fp1,"%s",p[i].name);
        fscanf(fp1,"%d",&p[i].age);
        i++;
    }

    fclose(fp1);

    char temName[100];
    int temAge;

    for(int j=0;j<i;j++){
        for(int m=0;m<i-1;m++){
            if(p[m].age>p[j].age){   //34 67 45 23
                temAge=p[j].age;
                p[j].age=p[m].age;
                p[m].age=temAge;

                strcpy(temName,p[j].name);
                strcpy(p[j].name,p[m].name);
                strcpy(p[m].name,temName);
            }
        }
    }

    fp2=fopen("Output.txt","a");
    for(int k=0;k<i;k++){
        fprintf(fp2,"%s ",p[k].name);
        fprintf(fp2,"%d\n",p[k].age);
    }
    fclose(fp2);
    


}
