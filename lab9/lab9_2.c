#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
char primer[50], primer_without[50],number_ch[50];
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
    
    
    if ( (primer[i]=='+' || primer[i]=='-')&&(isdigit(primer[i+1])) ){
        primer_without[j]=primer[i];
        j++;
        primer_without[j]=' ';
        j++;
       
    }
    else if( (primer[i+1]=='+' || primer[i+1]=='-')&&(isdigit(primer[i]))){
		primer_without[j]=primer[i];
        j++;
        primer_without[j]=' ';
        j++;
	}
	else {
		primer_without[j]=primer[i];
        j++;
	}
}

primer_without[j]='\0';
char *temp=strtok(primer_without," ");
if (primer_without[0]=='-'){sign=-1;}
while (temp!=NULL){
 if (isdigit(*temp)){
	 sum=sum+atof(temp)*sign;
 }
 else if(strcmp(temp,"-")==0 || strcmp(temp,"+-")==0 || strcmp(temp,"-+")==0){sign=-1;}
 else if(strcmp(temp,"+")==0 || strcmp(temp,"++")==0 || strcmp(temp,"--")==0){sign=1;}

 temp=strtok(NULL," ");
}

j=0;

printf("%f",sum);
}
