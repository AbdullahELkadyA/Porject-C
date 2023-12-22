/*
 * Project C
 * Author: Abdullah Hatem Amin
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
/*Definetion section*/
/*******************************/
#define MAX_LINE_LENGTH 100
/*******************************/
//void Quiz_Questions();
/*Global declaration section*/
/*******************************/
        int Mark_Collector;
        FILE *fm;
        FILE *file;
        int found;
        char ch;
        char a[50],Compere_with_Choice;
        char line[MAX_LINE_LENGTH];
        char input[MAX_LINE_LENGTH];
 /*Main Program*/

int main()
{
    printf("===============================\n");
    printf("===============================\n");
    printf(" WELCOM TO EXAM PORTAL \n");
    printf(" YOU NEED TO ENTER YOUR ID\n");
    printf("===============================\n");
    printf("===============================\n");
    char filename[] = "ID_DB.csv";
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    printf("Enter Your ID : ");
    //system("cls");
    fgets(input, sizeof(input), stdin);
    // fgets function to read from the standard input (stdin).
    // The sizeof(input) specifies the maximum number of characters to read
    input[strcspn(input, "\n")] = '\0'; // remove the newline character
    found = 0;
    system("cls");
    do{
        found =0;
        //
    while (fgets(line, sizeof(line), file) != NULL) {
        // Remove the newline character from the line
        //line[strcspn(line, "\n")] = '\0';

        // Check if the input exists in the line
        if (strstr(line, input) != NULL) {
            printf("START TEST NOW.\n");
            Quiz_Questions(fm,ch,a,Compere_with_Choice,Mark_Collector);
            found = 1;
            break;
        }

    }

    if (!found) {
        printf("INVALID ID!!!!!!!!!\n");
        printf("Enter Your ID : ");
        fgets(input, sizeof(input), stdin);
        line[strcspn(line, "\n")] = '\0';
        Quiz_Questions(fm,ch,a,Compere_with_Choice,Mark_Collector);
        found = 1;
    }}
    while(!found);


    fclose(file);
    return 0;
}

void Quiz_Questions(FILE *fm,char ch,char a,char Compere_with_Choice,int Mark_Collector)
{
         printf("|Please Make Sure You Choose A OR B|\n");
         printf("|If you choose anther the System will reject your answer|\n");
         //printf("|IF you ready press Any key|\n");
         Mark_Collector=0;
         //scanf(" %c",&ch);
         fm=fopen("Q1.txt","r");
         //This while loop reads each character from the file
        //using the getc function until it reaches the end of the file (EOF).
        //Each character is then printed to the console using printf
        //The ch = getc(fm) statement assigns the character read by getc(fm)
        //to the variable ch. This assignment is done within the condition of the while loop.
          while((ch=getc(fm))!=EOF)
          printf("%c",ch);
          fclose(fm);
          Compere_with_Choice=getch();
         if(Compere_with_Choice=='b' || Compere_with_Choice=='B'){
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
        }
        else if(Compere_with_Choice=='a' || Compere_with_Choice=='A')
        {
                 printf("\Wrong");
        }
        else
        {
                 printf("\nNOT Valid!!");
        }
        getch();
        system("cls");
         fm=fopen("Q2.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='a' || Compere_with_Choice=='A')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
           printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
        }
        else if(Compere_with_Choice=='b' || Compere_with_Choice=='B')
        {
            printf("\nWrong!!");
        }
        getch();
        system("cls");

         fm=fopen("Q3.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='b' || Compere_with_Choice=='B')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);        }
        else if(Compere_with_Choice=='a' || Compere_with_Choice=='A')
        {
            printf("\nWrong!!");
        }
        getch();
        system("cls");
         fm=fopen("Q4.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='a' || Compere_with_Choice=='A')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);           }
        else if(Compere_with_Choice=='b' || Compere_with_Choice=='B')
        {
            printf("\nWrong!!");
        }
        getch();
        system("cls");
        fm=fopen("Q5.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='b' || Compere_with_Choice=='B')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
        }
        else if(Compere_with_Choice=='A' || Compere_with_Choice=='b')
        {
            printf("\nWrong!!");
        }
        getch();
         printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
         system("cls");
         fm=fopen("Q6.txt","r");
         while((ch=getc(fm))!=EOF)
          printf("%c",ch);
          fclose(fm);
          Compere_with_Choice=getch();
         if(Compere_with_Choice=='A' || Compere_with_Choice=='a'){

            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
        }
        else if (Compere_with_Choice=='b' || Compere_with_Choice=='B'){
                 printf("\nWrong!!");
        }
        getch();
        system("cls");

         fm=fopen("Q7.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='a' || Compere_with_Choice=='A')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
           printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
        }
        else if(Compere_with_Choice=='b' || Compere_with_Choice=='B'){

            printf("\nWrong!!");
        }
        getch();
        system("cls");
         fm=fopen("Q8.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='b' || Compere_with_Choice=='B')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
                       }
        else if (Compere_with_Choice=='a' || Compere_with_Choice=='A')
        {
            printf("\nWrong!!");
        }

        getch();
        system("cls");
        fm=fopen("Q9.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='b' || Compere_with_Choice=='B')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
        }
        else if(Compere_with_Choice=='A' || Compere_with_Choice=='a')
        {
            printf("\nWrong!!");
        }
        getch();
        system("cls");
        fm=fopen("Q10.txt","r");
         while((ch=getc(fm))!=EOF)
         printf("%c",ch);
         fclose(fm);
         Compere_with_Choice=getch();
         if(Compere_with_Choice=='a' || Compere_with_Choice=='A')

        {
            printf("\nCorrect!!");
            Mark_Collector=Mark_Collector+1;
            printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
        }
        else if(Compere_with_Choice=='b' || Compere_with_Choice=='B')
        {
            printf("\nWrong!!");
        }
        getch();
        system("cls");
        printf("THE GRADE OF STUDENT IS = %d \n",Mark_Collector);
}

