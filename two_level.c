#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
  struct
       {
               char dname[10] , fname[10][10];
               int fct;
       }dir[10];
       int dct=0 , i , j , flag , flag1 , flag2 , ch , cont;
       char file[10] , dirname[10];

 for(i=0 ; i<10 ; i++)
 {
   dir[i].fct = 0;
 }

       do
       {
               printf("\n\nTWO LEVEL DIRECTORY\n\n");
               printf("1. Create Directory\n2. Create File\n3. Delete File\n4. Search File\n5. Display Files\n6. Main Menu\n\nEnter an option: ");
               scanf("%d" , &ch);
               switch(ch)
               {
                       case 1: printf("\nEnter the name of the directory: ");
                               scanf("%s" , dirname);
                               flag = 0;
                               for(i=0 ; i<dct ; i++)
                               {
                                       if(strcmp(dirname , dir[i].dname) == 0)
                                       {
                                               flag = 1;
                                               break;
                                       }
                               }
                               if(flag == 1)
                               {
                                       printf("\nDirectory of the same name already exists!\nAborting Directory Creation...\n");
                               }
                               else
                               {
                                       printf("\nDirectory Created!\n");
                                       strcpy(dir[i].dname , dirname);
                                       ++dct;
                               }
                               break;
                       case 2: printf("\nEnter the name of the directory: ");
                               scanf("%s" , dirname);
                               flag1 = 0;
                               for(i=0 ; i<dct ; i++)
                               {
                                       if(strcmp(dirname , dir[i].dname) == 0)
                                       {
                                               flag1 = 1;
                                               break;
                                       }
                               }
                               if(flag1 == 1)
                               {
                                       flag2 = 0;
                                       printf("\nEnter the name of the file to be created: ");
                                       scanf("%s" , file);
                                       for(j=0 ; j<dir[i].fct ; j++)
                                       {
                                               if(strcmp(file , dir[i].fname[j]) == 0)
                                               {
                                                       flag2 = 1;
                                                       break;
                                               }
                                       }
                                       if(flag2 == 1)
                                       {
                                               printf("\nFile of the same name already exists!\nAborting File Creation...\n");
                                       }
                                       else
                                       {
                                               printf("\nFile Created!\n");
                                               strcpy(dir[i].fname[dir[i].fct] , file);
                                               ++dir[i].fct;
                                       }

                               }
                               else
                               {
                                       printf("\nDirectory does not exist!!\n");
                               }
                               break;
                       case 3: printf("\nEnter the name of the directory: ");
                               scanf("%s" , dirname);
                               flag1 = 0;
                               for(i=0 ; i<dct ; i++)
                               {
                                       if(strcmp(dirname , dir[i].dname) == 0)
                                       {
                                               flag1 = 1;
                                               break;
                                       }
                               }
                               if(flag1 == 1)
                               {
                                       flag2 = 0;
                                       printf("\nEnter the name of the file to be deleted: ");
                                       scanf("%s" , file);
                                       for(j=0 ; j<dir[i].fct ; j++)
                                       {
                                               if(strcmp(file , dir[i].fname[j]) == 0)
                                               {
                                                       flag2 = 1;
                                                       break;
                                               }
                                       }
                                       if(flag2 == 1)
                                       {
           dir[i].fct--;
           strcpy(dir[i].fname[j] , dir[i].fname[dir[i].fct]);
                                               printf("\nFile successfully deleted!\n");
                                       }
                                       else
                                       {
                                               printf("\nFile not found!\n");
                                       }

                               }
                               else
                               {
                                       printf("\nDirectory does not exist!!\n");
                               }
                               break;
                       case 4: printf("\nEnter the name of the directory: ");
                               scanf("%s" , dirname);
                               flag1 = 0;
                               for(i=0 ; i<dct ; i++)
                               {
                                       if(strcmp(dirname , dir[i].dname) == 0)
                                       {
                                               flag1 = 1;
                                               break;
                                       }
                               }
                               if(flag1 == 1)
                               {
                                       flag2 = 0;
                                       printf("\nEnter the name of the file to be searched: ");
                                       scanf("%s" , file);
                                       for(j=0 ; j<dir[i].fct ; j++)
                                       {
                                               if(strcmp(file , dir[i].fname[j]) == 0)
                                               {
                                                       flag2 = 1;
                                                       break;
                                               }
                                       }
                                       if(flag2 == 1)
                                       {
                                               printf("\nFile \"%s\" was found successfully!\n" , file);
                                       }
                                       else
                                       {
                                               printf("\nFile not found!\n");
                                       }

                               }
                               else
                               {
                                       printf("\nDirectory does not exist!!\n");
                               }
                               break;
                       case 5: for(i=0 ; i<dct ; i++)
       {
         printf("\nDIRECTORY: %s\n" , dir[i].dname);
                                 if(dir[i].fct == 0)
                                         printf("\nThe directory is empty!\n");
                                 else
                                 {
                                         printf("\nThe files are: \n");
                                         for(j=0 ; j<dir[i].fct ; j++)
                                         {
                                                 printf("%s\n" , dir[i].fname[j]);
                                         }
                                 }
       }
                               break;
                       case 6: main();
                               break;
                       default:printf("\nWRONG OPTION!\n");
               }
               printf("\nDO YOU WANT TO CONTINUE? (1 FOR YES): ");
               scanf("%d" , &cont);
       }while(cont == 1);
}
