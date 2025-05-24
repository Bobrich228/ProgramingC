#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    struct humen{
        char name[20];
        char surname[20];
        int year_of_born;
        char gender[6];
        double height;
    };

int main(){
    int choise,i,j,pr_fld,scnd_fld,n=0;
    double res_pr,res_scnd;
    struct humen *mas1=NULL;
    struct humen *mas2=NULL;


    struct humen temp[1];



    printf("enter data location (1.manual entry | 2.from .txt): ");
    scanf("%d",&choise);



    if (choise==1){

        printf("enter numb");
        scanf("%d",&n);
        mas1=malloc(n*sizeof(struct humen));
        mas2=malloc(n*sizeof(struct humen));
    for (i=0;i<n;i++){
        printf("enter name: ");
        scanf("%s", &mas1[i].name);
        printf("enter surname: ");
        scanf("%s", &mas1[i].surname);
        printf("enter year of born: ");
        scanf("%d", &mas1[i].year_of_born);
        printf("enter gender: ");
        scanf("%s", &mas1[i].gender);
        printf("enter height: ");
        scanf("%lf", &mas1[i].height);
        printf("\n");
    }}
    else if (choise==2){
        FILE *f1;
        f1=fopen("data.txt","r");
        if (f1==NULL){
            printf("OPENING ERROR");
            return 1;
        }
        char name[20], surname[20], gender[6];
        int year;
        double height;
        while (fscanf(f1,"%s %s %d %s %lf",name,surname,&year,gender,&height)==5){
            n++;
        }
        rewind(f1);
        mas1=malloc(n*sizeof(struct humen));
        mas2=malloc(n*sizeof(struct humen));

        for (i=0;i<n;i++){
            fscanf(f1, "%s%s%d%s%lf",mas1[i].name,mas1[i].surname,&mas1[i].year_of_born,mas1[i].gender,&mas1[i].height);
        }
        fclose(f1);
    }
    else {printf("WRONG CHOISE");exit(1);}


    while (choise!=0){
    choise=0;
    printf("\nChiose primary field for sort (1. Name | 2. Surname | 3. year of born | 4. Gender | 5. Height): \n");
    scanf("%d",&pr_fld);
    printf("Chiose secondary field for sort (1. Name | 2. Surname | 3. year of born | 4. Gender | 5. Height): \n");
    scanf("%d",&scnd_fld);
    if (pr_fld==scnd_fld){
        printf("The choise is the same, try another one\n");
        choise++;
    }}

    for (i=0;i<n;i++){
        mas2[i]=mas1[i];
    }


    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            switch(pr_fld){
                case 1: res_pr=strcmp(mas2[j].name,mas2[j+1].name); break;
                case 2: res_pr=strcmp(mas2[j].surname,mas2[j+1].surname);break;
                case 3: res_pr=mas2[j].year_of_born-mas2[j+1].year_of_born;break;
                case 4: res_pr=strcmp(mas2[j].gender,mas2[j+1].gender);break;
                case 5: res_pr=mas2[j].height-mas2[j+1].height;break;
            }

            switch(scnd_fld){
                case 1: res_scnd=strcmp(mas2[j].name,mas2[j+1].name);break;
                case 2: res_scnd=strcmp(mas2[j].surname,mas2[j+1].surname);break;
                case 3: res_scnd=mas2[j].year_of_born-mas2[j+1].year_of_born;break;
                case 4: res_scnd=strcmp(mas2[j].gender,mas2[j+1].gender);break;
                case 5: res_scnd=mas2[j].height-mas2[j+1].height;break;
            }

            if (res_pr>0){
                temp[0]=mas2[j];
                mas2[j]=mas2[j+1];
                mas2[j+1]=temp[0];
            }
            else if(res_pr==0){
                if(res_scnd<0){
                    temp[0]=mas2[j];
                    mas2[j]=mas2[j+1];
                    mas2[j+1]=temp[0];
                }
            }

        }

    }
    printf("unsorted\n");
    for (i=0;i<n;i++){
        printf(" %s %s %d %s %lf \n",mas1[i].name,mas1[i].surname,mas1[i].year_of_born,mas1[i].gender,mas1[i].height);
    }

    printf("\nsorted\n");
    for (i=0;i<n;i++){
    printf(" %s %s %d %s %lf \n",mas2[i].name,mas2[i].surname,mas2[i].year_of_born,mas2[i].gender,mas2[i].height);
    }
}
