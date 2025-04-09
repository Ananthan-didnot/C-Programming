#include<stdio.h>

int main(){

    FILE *fp1,*fp2,*fp3;

    fp1 = fopen("number.txt","r");
    fp2 = fopen("odd.txt","w");
    fp3 = fopen("even.txt","w");
    int num;

    while (!feof(fp1))
    {
        fscanf(fp1,"%d",&num);
        if (num%2==0)
        {
            fprintf(fp3,"%d\t",num);
        }

        else{
            fprintf(fp2,"%d\t",num);
        }
        
    }
    fclose(fp1);

    return 0;
}