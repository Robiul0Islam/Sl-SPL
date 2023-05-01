#include<stdio.h>
struct triangle
{
    int id;
    float b;
    float h;
    float area;
};

int main(){
    //data type   variable name;
    struct triangle t[100];
    int n;
    printf("Enter the triangle number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        fflush(stdin);
        t[i].id=i+1;
        
        printf("Enter the base: ");
        scanf("%f",&t[i].b);
        //float base=t[i].b;
        printf("Enter the height: ");
        scanf("%f",&t[i].h);
        //float height=t[i].h;
        t[i].area=(t[i].b*t[i].h)/2;

        
        
    }
    float maxArea= t[0].area;
    int maxAreaIndex;
    for(int i=1;i<n;i++){

        if(t[i].area>maxArea){
            maxArea=t[i].area;
            maxAreaIndex=i;

        }
        // printf("Area of %d is: ",t[i].id);
        // printf("%.2f",t[i].area);
    }


    printf("The max triangle id is %d and area is %.2f",t[maxAreaIndex].id,t[maxAreaIndex].area);
}


