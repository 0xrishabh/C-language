#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char create(){
    char NAME[20];
    int AGE;
    int ROLLNO;

    printf("ENTER NAME = ");
    scanf("%s",NAME);

    printf("ENTER AGE = ");
    scanf("%d",&AGE);

    printf("ENTER ROLLNO = ");
    scanf("%d",&ROLLNO);
    /* this is where data is entered in the database file */
    FILE * fpointer = fopen("database.txt","a+");
        fprintf(fpointer,"\t\t%s  \t",NAME);
        fprintf(fpointer,"%d  \t\t",AGE);
        fprintf(fpointer,"%d  \t\t",ROLLNO);
        fprintf(fpointer,"\n");
        fprintf(fpointer,"\t\t__________________________________________________________");
        fprintf(fpointer,"\n\n");
    fclose(fpointer);

}
void show(){
    char str[255];
    FILE * fpointer = fopen("database.txt","r");
    printf("\n");
    while (fgets(str, 255, fpointer) != NULL)
        printf("%s", str);

    fclose(fpointer);
}

int main(){
    char command[10];
    int flag = 1;
    char CREATE[] = "CREATE";
    printf("This is a database\n");
    while(flag==1){
        printf("\nEnter CREATE SHOW EXIT to perform action on database\n");
        scanf("%s",command);
        if(!(strcmp(command, "CREATE"))){
            create();
        }
        else if(!(strcmp(command, "SHOW"))){
            show();
            printf("\n");
        }
        else if(!(strcmp(command, "EXIT"))){
            printf("exit_it();");
            break;
        }
        else{
            printf("WRONG COMMAND !!\n");
            break;
        }
    }
}
