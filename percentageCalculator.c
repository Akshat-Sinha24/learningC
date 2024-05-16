#include <stdio.h>

int main() {
    float eng_max;
    float eng_score;
    float eng_percent;
    
    float chem_max;
    float chem_score;
    float chem_percent;
    
    float maths_max;
    float maths_score;
    float maths_percent;
    
    float max_marks;
    float max_score;
    float final_percent;
    
    //english%
    printf("Maximum marks english: ");
    scanf("%f", &eng_max);
    
    printf("Received marks english: ");
    scanf("%f", &eng_score);
    
    eng_percent = (eng_score/eng_max)*100;
    printf("English percentage: %f ",eng_percent);
    
    //chem%
    printf("\n\nMaximum marks chemistry: ");
    scanf("%f", &chem_max);
    
    printf("Received marks chemistry: ");
    scanf("%f", &chem_score);
    
    chem_percent = (chem_score/chem_max)*100;
    printf("Chemistry percentage: %f ",chem_percent);
    
    //maths%
    printf("\n\nMaximum marks maths: ");
    scanf("%f", &maths_max);
    
    printf("Received marks maths: ");
    scanf("%f", &maths_score);
    
    maths_percent = (maths_score/maths_max)*100;
    printf("Maths percentage: %f ",maths_percent);
    
    //Final%
    max_marks= eng_max+chem_max+maths_max;
    max_score= eng_score+chem_score+maths_score;
    
    final_percent=(max_score/max_marks)*100;
    printf("\n\nFinal percentage: %f",final_percent);

 return(0);   
}