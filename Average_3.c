#include<stdio.h>

int main()
{
    float a,b,c,d;

    scanf("%f %f %f", &a, &b, &c);

    float avg = (a*2 + b*3 + c*4 + d*1)/10;
    printf("Media: %.1f\n", avg);

    if(avg >= 7.0)
    {
        printf("Media: %.1f\n", avg);
        printf("Aluno aprovado.\n");
    }
    else if(avg > 5.0 && avg <6.9)
    {
        printf("Aluno em exame.\n");
        float e;
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);


        float final_avg;
        if(avg >=5.00){
            final_avg = (avg + e)/2;
            printf("Aluno aprovado.\n");
        }

        if(avg <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", final_avg);
    }
    else
        printf("Aluno reprovado.\n");
    return 0;
}