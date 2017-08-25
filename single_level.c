#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
        struct
        {
                char dname[10] , fname[10][10];
                int fct;
        }dir;
        int i , flag , ch , cont;
        char file[10];
        dir.fct = 0;

        printf("\nEnter the name of the directory: ");
        scanf("%s" , dir.dname);

        do
        {
                printf("\n\nSINGLE LEVEL DIRECTORY\n\n");
                printf("1. Create File\n2. Delete File\n3. Search File\n4. Display Files\n\nEnter your choice: ");
                scanf("%d" , &ch);
                switch(ch)
                {
                        case 1: printf("\nEnter file name: ");
                                scanf("%s" , file);
                                flag = 0;
                                for(i=0 ; i<dir.fct ; i++)
                                {
                                        if(strcmp(file , dir.fname[i]) == 0)
                                        {
                                                flag = 1;
                                                break;
                                        }
                                }
                                if(flag == 1)
                                {
                                        printf("\nFile of the same name already exists!\nAborting File Creation...\n");
                                }
                                else
                                {
                                        printf("\nFile Created!\n");
                                        strcpy(dir.fname[dir.fct] , file);
                                        ++dir.fct;
                                }
                                break;
                        case 2: printf("\nEnter the name of the file to be deleted: ");
                                scanf("%s" , file);
                                flag = 0;
                                for(i=0 ; i<dir.fct ; i++)
                                {
                                        if(strcmp(file , dir.fname[i]) == 0)
                                        {
                                                flag = 1;
                                                break;
                                        }
                                }
                                if(flag == 1)
                                {
                                        printf("\nThe file was deleted successfully!\n");
                                        strcpy(dir.fname[i] , dir.fname[dir.fct-1]);
                                        --dir.fct;
                                }
                                else
                                        printf("\nThe file was not found!\n");
                                break;
                        case 3: printf("\nEnter the name of the file to be searched: ");
                                scanf("%s" , file);
                                flag = 0;
                                for(i=0 ; i<dir.fct ; i++)
                                {
                                        if(strcmp(file , dir.fname[i]) == 0)
                                        {
                                                flag = 1;
                                                break;
                                        }
                                }
                                if(flag == 1)
                                {
                                        printf("\nThe file \"%s\" was found successfully!\n" , dir.fname[i]);
                                }
                                else
                                        printf("\nThe file was not found!\n");

                                break;
                        case 4: printf("\nDIRECTORY: %s\n" , dir.dname);
                                if(dir.fct == 0)
                                        printf("\nThe directory is empty!\n");
                                else
                                {
                                        printf("\nThe files are: \n");
                                        for(i=0 ; i<dir.fct ; i++)
                                        {
                                                printf("%s\n" , dir.fname[i]);
                                        }
                                }
                                break;

                        default:printf("\nWRONG OPTION!\n");
                }
                printf("\nDo you want to continue? Press 1 for yes: ");
                scanf("%d" , &cont);
        }while(cont == 1);
}
