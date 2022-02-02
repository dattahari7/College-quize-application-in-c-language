#include "initialization.h"
#include "defining_Fuction.h"
#include "htmlExam.h"
#include "clangExam.h"
#include "tallyExam.h"
// int score;
// char fullname[50], classname[5], resultyesno[3], subjectname[3][70] = {"HTML Languag", "CProgramming", "Tally ERP.9."};
// int choosesubject, i, againchoosesubject;
int main()
{
again_give_exam:
	system("cls");
	examIndex();
	personalInformation();
	printf("\n\nSelect Test Subject:\n");
	printf("\n1.HTML\n2.C Programming\n3.Tally\n");
	printf("\nEnter Your Choice(1, 2 or 3):");
again_choose_choosesubject:
	scanf(" %d", &choosesubject);
	if (choosesubject == 1)
	{
		htmlExam();
		result();
		takeExamAgain();
	}
	else if (choosesubject == 2)
	{
		clangExam();
		result();
		takeExamAgain();
	}
	else if (choosesubject == 3)
	{
		tallyExam();
		result();
		takeExamAgain();
	}
	else
	{
		printf("\nOhhhh!!! You Choose Invalide Choice....\n");
		printf("\nChoose Valide Choice(From Option 1 To 3):");
		goto again_choose_choosesubject;
	}
	getch();
	return 0;
}

// void takeExamAgain()
// {
// 	printf("\n\n\t\tDo you want to give exam again ?(yes/no or y/n):");
// 	scanf(" %c", &resultyesno);
// 	if (resultyesno == "yes" || resultyesno == "y")
// 	{
// 		goto again_give_exam;
// 	}
// 	else
// 	{
// 		printf("\n\n\t\tThank You :).......");
// 	}
// }
