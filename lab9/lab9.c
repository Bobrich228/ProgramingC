#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
char primer[50], primer_without[50],number_ch[50], temp[50];
int i,j=0,number,sign=1;
double sum=0;

printf("Enter your example: ");
fgets(primer, sizeof(primer), stdin);
for (i=0; i<strlen(primer);i++){
    if (!(isdigit(primer[i]) || (primer[i]=='+') || (primer[i]=='-') || (primer[i]==' ') || (primer[i]=='.') || (primer[i]=='\n'))){
        printf("inappropriate input!\n");
        printf("%d",primer[i]);
        return 1;
    }
    if ((primer[i]!=' ') && (primer[i]!='\n')){
        primer_without[j]=primer[i];
        j++;
    }
}

primer_without[j]='\0';


if (primer_without[0]=='-'){sign=-1;}


j=0;
for (i=0;i<strlen(primer_without);i++){
    if (isdigit(primer_without[i]) || (primer_without[i]=='.')){
    temp[j++]=primer_without[i];
    } else {
        if (j>0){
            temp[j]='\0';
            sum+=sign*atof(temp);
            j=0;
        }

        if (primer_without[i]=='-' && primer_without[i+1]=='-'){
            sign=1;
            i++;
        } else if (primer_without[i]=='-' && primer_without[i+1]=='+'){
            sign=-1;
            i++;
        } else if(primer_without[i]=='+' && primer_without[i+1]=='-'){
            sign=-1;
            i++;
        } else if (primer_without[i]=='+' && primer_without[i+1]=='+'){
            sign=1;
            i++;
        } else if(primer_without[i]=='-'){
            sign=-1;
        } else {
            sign=1;
        }
        }
    }
if (j>0){
    temp[j]='\0';
    sum+=sign*atof(temp);
    j=0;}
printf("%f",sum);
}
