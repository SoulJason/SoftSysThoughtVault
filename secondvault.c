#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include <time.h>

#include <dirent.h>


int main( ) {

   char c[2];
   printf("\n  :::::::::::::::::::::::: Welcome to ThoughtVault ::::::::::::::::::::::::  ");
   printf("\n  ::::::::::::::::::::::::::: Enter L to login ::::::::::::::::::::::::::::  ");



   scanf("%s", c);



   if (strcmp(c, "l") == 0) {
     while (1) {
     printf("\n  ::::::::::::::::::::::::::: ThoughtVault Menu  :::::::::::::::::::::::::::  ");
     printf("\n                     Type and enter q to return to menu  ");
     printf("\n  :::::::::::::::::::: [1] Open New Or Existing Entry ::::::::::::::::::::::  ");
     printf("\n  :::::::::::::::::::::[2] View Entries               ::::::::::::::::::::::  ");
     printf("\n  :::::::::::::::::::::[3] Delete Entry               ::::::::::::::::::::::  ");

     char input[2];


     scanf("%s", input);
     int c1 = strcmp(input,"1");
     int c2 = strcmp(input,"2");
     int c3 = strcmp(input,"3");

     int cq = strcmp(input,"q");

     if (c1 == 0)
		   {

        printf("\n           Name your journal entry, and add .txt at the end of it!!");
        time_t t = time(NULL);

        struct tm tm = *localtime(&t);

        printf("\n                    Time right now: %d-%02d-%02d %02d:%02d:%02d\n\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

        char file_name[30];
        scanf("%s", file_name);
        if (strcmp(file_name,"q")==0) {
          printf("\n\n\n\n\n\n\n" );
          continue;
        }



        char dest[256];
        strcpy(dest, "gedit ");

        strncat(dest, file_name, strlen(file_name));

        system(dest);




      }


      else if (c2 == 0)
        {
          printf("View Entry");
          system("ls | grep \".txt\"");
          printf("\n\n\n\n\n\n\n" );


        }
      else if (c3 == 0)
        {
          printf("\n\n     To delete an entry, type the entire .txt file name, ex. happy.txt\n\n\n\n\n");
          char file_name[30];
          scanf("%s", file_name);
          if (strcmp(file_name,"q")==0) {
            printf("\n\n\n\n\n\n\n" );
            continue;
          }
          char remove[50] = "rm -rf \0";
          strcat(remove ,file_name);
          system(remove);


      }
}


   }



   return 0;
}
