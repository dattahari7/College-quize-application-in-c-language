#include "initialization.h"

void examIndex()
{
    printf("\n______________________________________________________________________");
    printf("\n|                                                                    |");
    printf("\n| MGM'S Collage of Computer Science & Information Technology, Nanded |");
    printf("\n|                                                                    |");
    printf("\n|                             MCQ'S Exam                             |");
    printf("\n|                          Total Marks: 30                           |");
    printf("\n|                        No. OF Question: 15                         |");
    printf("\n|                                                                    |");
    printf("\n| All the best :)........                                            |");
    printf("\n|____________________________________________________________________|");
}

void giveAns()
{
    printf("\nGive Ans:");
    scanf("%c", &chooseoption);
}

void personalInformation()
{
    printf("\n\n\nEnter Your Full Name:");
    gets(fullname);
    //    scanf(" %s",&fullname);
    printf("\n\nEnter Your Class(e.g. SYBCA):");
    scanf("%s", &classname);
    // printf("\n\nSelect Test Subject:\n");
    // printf("\n1.HTML\n2.C Programming\n3.Tally\n");
    // printf("\nEnter Your Choice(1, 2 or 3):");
    // scanf(" %d", &choosesubject);
}

void result()
{
    printf("\n\n\t\tDo you want to see your result(yes/no or y/n):");
    scanf("%s", &resultyesno);
    // gets(resultyesno);
    if (resultyesno == "y" || resultyesno == "yes")
    {
        system("cls");
        printf("\n\n\n\t\t\t\tYour Result:");
        printf("\n\t\t\t___________________________");
        printf("\n\t________________________________________________________________");
        printf("\n\t| Name Of Student | Class | Subject No. | Subject Name | Marks |");
        printf("\n\t|_________________|_______|_____________|______________|_______|");
        if (choosesubject == 1)
        {
            printf("\n\t| %s | %s |      %d      | %s |   %d   |", fullname, classname, choosesubject, subjectname[0], score);
        }
        else if (choosesubject == 2)
        {
            printf("\n\t| %s | %s |      %d      | %s |   %d   |", fullname, classname, choosesubject, subjectname[1], score);
        }
        else if (choosesubject == 3)
        {
            printf("\n\t| %s | %s |      %d      | %s |   %d   |", fullname, classname, choosesubject, subjectname[2], score);
        }

        printf("\n\t|_________________|_______|_____________|______________|_______|");
        printf("\n\n\n\t\t\tYou Have Tried Your Best :)......");
    }
    else if (resultyesno == "n" || resultyesno == "no")
    {
        printf("\n\n\n\t\t\tYou Have Tried Your Best :)......");
    }
    else
    {
        printf("\n\n\n\t\t\tYou Have Tried Your Best :)......");
    }
}

void takeExamAgain()
{
    printf("\n\n\t\tDo you want to give exam again ?(yes/no or y/n):");
    scanf(" %c", &resultyesno);
    if (resultyesno == "yes" || resultyesno == "y")
    {
        goto again_give_exam;
    }
    else
    {
        printf("\n\n\t\tThank You :).......");
    }
}