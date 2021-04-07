# Thought Vault, a quick online Journal <br>
## Team Members: Jason Lin


The goal of my project was to create a basic terminal journal that could allow for easy creation and organization of short journal entries comprised of text files. My learning
goals stayed the same from my update, I hoped to learn how to learn how to find the tools/information I needed to build out functionality and to just do basic programming in C. 
Resources I used were mostly direct sites that I got from google regarding the use cases of functions so I don't recall any direct resources that I found as memorable. I was able to 
build a functional version of the journal that i envisioned, and it works through user input and the terminal similar to a text based adventure game. 

```
printf("\n  :::::::::::::::::::::::: Welcome to ThoughtVault ::::::::::::::::::::::::  ");
```
The main display the user interacts with are printed statements that appear depending on your input like this.
```
char input[2];
scanf("%s", input);
int c1 = strcmp(input,"1");
```
I took user input like this, and would use if statements like if (c1==0) { to simulate intertactions with menu options.

One design decision I made was to make creating and editing journal entries the same option. I decided on this because I realized the way I programmed creating a journal entry could
work exactly the same way as editing it, which was to just insert the title of the journal name file you wanted. If it didn't already exist, it would be created, otherwise you would 
edit an existing file.
```
char dest[256];
        strcpy(dest, "gedit ");

        strncat(dest, file_name, strlen(file_name));

        system(dest);
  ```
  Str functions and system were crucial to me completing the program the way I did it because the program allowed users to insert any titles they wanted for their journal names. This meant
  I would need to ensure they all were saved as their proper names and would open up the appropriate text files which system allowed me to do. 
  ```
  printf("View Entry");
          system("ls | grep \".txt\"");
  ```
  I even used system to list every journal entry within the parent directory using grep and ls. 
  When reflecting on the outcome of my project, I was able to hit my lower bounds of my proposal and hit the points where it needed to be to function. I did achieve my learning goals, though
  I definitely could have pushed the boundry a bit more if I was able to pace myself better.
