#include <stdio.h>

int main() {
    float mm1;
    float rm1;
    float percentage1;
    
    float mm2;
    float rm2;
    float percentage2;
    
    float mm3;
    float rm3;
    float percentage3;
    
    float ov1;
    float ov2;
    float percentage4;
    
    //subject1
    printf("maximum marks subject1: ");
    scanf("%d", &mm1);
    
    printf("received marks subject1: ");
    scanf("%d", &rm1);
    
    percentage1 = (rm1/mm1)*100;
    printf("subject1 percentage: %f ",percentage1);
    
    //subject2
    printf("\n\nmaximum marks subject2: ");
    scanf("%d", &mm2);
    
    printf("received marks subject2: ");
    scanf("%d", &rm2);
    
    percentage2 = (rm2/mm2)*100;
    printf("subject2 percentage: %f ",percentage2);
    
    //subject3
    printf("\n\nmaximum marks subject3: ");
    scanf("%d", &mm3);
    
    printf("received marks subject3: ");
    scanf("%d", &rm3);
    
    percentage3 = (rm3/mm3)*100;
    printf("subject3 percentage: %f ",percentage3);
    
    //overall
    ov1= mm1+mm2+mm3;
    ov2= rm1+rm2+rm3;
    
    percentage4=(ov2/ov1)*100;
    printf("\n\noverall percentage: %f",percentage4);

 return(0);   
}