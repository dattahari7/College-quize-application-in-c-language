#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int score = 0;
char fullname[50], classname[5], resultyesno[3], chooseoption, subjectname[3][70] = {"HTML Languag", "CProgramming", "Tally ERP.9."};
int choosesubject, i, againchoosesubject;

void examIndex();
void giveAns();
void personalInformation();
void result();