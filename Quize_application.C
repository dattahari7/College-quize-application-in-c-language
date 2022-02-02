#include "defining_Fuction.h"

int main()
{
again_give_exam:
	system("cls");
	examindex();
	personalinfo();
	printf("\n\nSelect Test Subject:\n");
	printf("\n1.HTML\n2.C Programming\n3.Tally\n");
	printf("\nEnter Your Choice(1, 2 or 3):");
again_choose_choosesubject:
	scanf(" %d", &choosesubject);
	if (choosesubject == 1 || choosesubject == 2 || choosesubject == 3)
	{
		goto choose_choosesubject;
	}
	else
	{
		printf("\nOhhhh!!! You Choose Invalide Choice....\n");
		printf("\nChoose Valide Choice(From Option 1 To 3):");
		goto again_choose_choosesubject;
	}
choose_choosesubject:
	switch (choosesubject)
	{
	case 1:


	case 2:
		printf("\n\n\t\t\t!!Are You redy Press Enter....!!");
		getch();
		printf("\n\n\t\t---------------------C Programming------------------\n\n");
		for (i = 1; i <= 15; i++)
		{

			switch (i)
			{
			case 1:
				printf("\nQ1.Who is father of C Language?\n");
				printf("A.Bjarne Stroustrup\t\t\t\tB.Denies Ritchie\n");
				printf("C.James A. Gosling\t\t\t\tD.Dr. E.F. Codd\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'B' || chooseoption == 'b')
					{
						score = score + 2;
					}
				}
				else
				{
				cq1:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'B' || chooseoption == 'b')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq1;
					}
				}
				break;

			case 2:
				printf("\nQ2.C Language developed at _____?\n");
				printf("A. AT & T's Bell Laboratories of USA in 1972\t\t\t\tB.AT & T's Bell Laboratories of USA in 1970\n");
				printf("C.Sun Microsystems in 1973\t\t\t\tD.Cambridge University in 1972\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				cq2:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq2;
					}
				}
				break;

			case 3:
				printf("\nQ3.C programs are converted into machine language with the help of_____.\n");
				printf("A.An Editor\t\t\t\tB.A compiler\n");
				printf("C.An operating system\t\t\t\tD.None of the above\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'B' || chooseoption == 'b')
					{
						score = score + 2;
					}
				}
				else
				{
				cq3:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'B' || chooseoption == 'b')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq3;
					}
				}
				break;

			case 4:
				printf("\nQ4.A C variable cannot start with_____.\n");
				printf("A.An alphabet\t\t\t\tB.A number\n");
				printf("C.A special symbol other than underscore\t\t\t\tD.both (b) and (c)\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				cq4:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq4;
					}
				}
				break;

			case 5:
				printf("\nQ5.Bitwise operators can operate upon?\n");
				printf("A.double and chars\t\t\t\tB.floats and doubles\n");
				printf("C.ints and floats\t\t\t\tD.ints and chars\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				cq5:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq5;
					}
				}
				break;

			case 6:
				printf("\nQ6.Which of the following is allowed in a C Arithmetic instruction?\n");
				printf("A.[]\t\t\t\tB.{}\n");
				printf("C.()\t\t\t\tD.None of the above\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'C' || chooseoption == 'c')
					{
						score = score + 2;
					}
				}
				else
				{
				cq6:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'C' || chooseoption == 'c')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq6;
					}
				}

				break;
			case 7:
				printf("\nQ7.What is right way to Initialization array?\n");
				printf("A.int num[6] = { 2, 4, 12, 5, 45, 5 } ;\t\t\t\tB.int n{} = { 2, 4, 12, 5, 45, 5 } ;\n");
				printf("C.int n{6} = { 2, 4, 12 } ;\t\t\t\tD.int n(6) = { 2, 4, 12, 5, 45, 5 } ;\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				cq7:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq7;
					}
				}
				break;

			case 8:
				printf("\nQ8.An array elements are always stored in _________ memory locations.\n");
				printf("A.Sequential\t\t\t\tB.Random\n");
				printf("C.Sequential and Random\t\t\t\tD.None of the above\n");

				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				cq8:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq8;
					}
				}
				break;

			case 9:
				printf("\nQ9.Which is the right way to declare constant in C?\n");
				printf("A.int constant var =10;\t\t\t\tB.int const var = 10;\n");
				printf("C.const int var = 10;\t\t\t\tD.B & C Both\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				cq9:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq9;
					}
				}
				break;

			case 10:
				printf("\nQ10.What is C Tokens?\n");
				printf("A.The smallest individual units of c program\t\t\t\tB.The basic element recognized by the compiler\n");
				printf("C.The largest individual units of program\t\t\t\tD.A & B Both\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				cq10:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq10;
					}
				}
				break;
			case 11:
				printf("\nQ11.In switch statement, each case instance value must be _______?\n");
				printf("A.Constant\t\t\t\tB.Variable\n");
				printf("C.Special Symbol\t\t\t\tD.None of the above\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				cq11:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq11;
					}
				}

				break;
			case 12:
				printf("\nQ12.What is the work of break keyword?\n");
				printf("A.Halt execution of program\t\t\t\tB.Restart execution of program\n");
				printf("C.Exit from loop or switch statement\t\t\t\tD.None of the above\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'C' || chooseoption == 'c')
					{
						score = score + 2;
					}
				}
				else
				{
				cq12:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'C' || chooseoption == 'c')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq12;
					}
				}
				break;
			case 13:
				printf("\nQ13.Which one of the following is not a linear data structure?\n");
				printf("A.Array\t\t\t\tB.Binary Tree\n");
				printf("C.Queue\t\t\t\tD.Stack\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'B' || chooseoption == 'b')
					{
						score = score + 2;
					}
				}
				else
				{
				cq13:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'B' || chooseoption == 'b')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq13;
					}
				}

				break;
			case 14:
				printf("\nQ14.Recursive functions are executed in a?\n");
				printf("A.First In First Out Order\t\t\t\tB.Load Balancing\n");
				printf("C.Parallel Fashion\t\t\t\tD.Last In First Out Order\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				cq14:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq14;
					}
				}

				break;
			case 15:
				printf("\nQ15.Which is the right way to declare constant in C?\n");
				printf("A.int constant var =10;\t\t\t\tB.int const var = 10;\n");
				printf("C.const int var = 10;\t\t\t\tD.B & C Both\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				cq15:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto cq15;
					}
				}

				break;
			default:
				printf("Quations End!!!!");
				break;
			}
		}
		outputtable();
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

		break;
	case 3:
		printf("\n\n\t\t\t!!Are You redy Press Enter....!!");
		getch();
		printf("\n\n\t\t-----------------Tally ERP.9---------------\n\n");
		for (i = 1; i <= 15; i++)
		{
			switch (i)
			{
			case 1:
				printf("\nQ1.Accounting is the language of_______.\n");
				printf("A.Business\t\t\t\tB.E-Commerce\n");
				printf("C.Commerce\t\t\t\tD.Economic\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				tq1:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq1;
					}
				}

				break;
			case 2:
				printf("\nQ2.Who communicated to  the user of accounting information ?\n");
				printf("A.Computer Infomation\t\t\t\tB.Internet Infomation\n");
				printf("C.Web Infomation\t\t\t\tD.Finacial Infomation\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				tq2:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'D')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq2;
					}
				}

				break;
			case 3:
				printf("\nQ3.While preparing and presenting the finacial statement what is neccessary to develop?\n");
				printf("A.GAAP\t\t\t\tB.AGAP\n");
				printf("C.GACP\t\t\t\tD.CPGA\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				tq3:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq3;
					}
				}
				break;
			case 4:
				printf("\nQ4.What is accounting standard?\n");
				printf("A.Scope Of Accounting\t\t\t\tB.Rules\n");
				printf("C.Accounting  Principles And Rules\t\t\t\tD.Accounting\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'C' || chooseoption == 'c')
					{
						score = score + 2;
					}
				}
				else
				{
				tq4:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'C' || chooseoption == 'c')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq4;
					}
				}
				break;
			case 5:
				printf("\nQ5.Who adopt the indian accounting standard?\n");
				printf("A.Companies In Africa\t\t\t\tB.Companies In Us\n");
				printf("C.Companies In India\t\t\t\tD.Companies In China\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'C' || chooseoption == 'c')
					{
						score = score + 2;
					}
				}
				else
				{
				tq5:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'C' || chooseoption == 'c')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq5;
					}
				}
				break;
			case 6:
				printf("\nQ6.What is basic policy documents of accounting standard?\n");
				printf("A.Transferency\t\t\t\tB.Relability\n");
				printf("C.Consistancy\t\t\t\tD.All of these\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				tq6:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq6;
					}
				}
				break;
			case 7:
				printf("\nQ7.How many objectives of accounting standard?\n");
				printf("A.One\t\t\t\tB.Two\n");
				printf("C.Five\t\t\t\tD.Eight\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'C' || chooseoption == 'c')
					{
						score = score + 2;
					}
				}
				else
				{
				tq7:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'C' || chooseoption == 'c')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq7;
					}
				}
				break;
			case 8:
				printf("\nQ8.Who prevent the users from reaching and misleading conclusions?\n");
				printf("A.Financial Accounting\t\t\t\tB.Finacial Statement\n");
				printf("C.Accounting Standard\t\t\t\tD.None of these\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'C' || chooseoption == 'c')
					{
						score = score + 2;
					}
				}
				else
				{
				tq8:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'C' || chooseoption == 'c')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq8;
					}
				}
				break;
			case 9:
				printf("\nQ9.What term become the basic for auditing the book of account?\n");
				printf("A.Policies\t\t\t\tB.Guidlines\n");
				printf("C.No anyone\t\t\t\tD.Both A and B\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				tq9:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq9;
					}
				}
				break;
			case 10:
				printf("\nQ10.What is accounting standards in the world of accounting?\n");
				printf("A.Rolling Autherity\t\t\t\tB.Finacial Statement\n");
				printf("C.Rolling Commerce\t\t\t\tD.Relability\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				tq10:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq10;
					}
				}
				break;
			case 11:
				printf("\nQ11.What laydown accounting standard in return format?\n");
				printf("A.Accounting Policies\t\t\t\tB.Rules\n");
				printf("C.Regulation\t\t\t\tD.All of these\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				tq11:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq11;
					}
				}
				break;
			case 12:
				printf("\nQ12.Who help to messure the performence of the managment of an entity?\n");
				printf("A.Accounting Standard\t\t\t\tB.Policies\n");
				printf("C.Rules\t\t\t\tD.Performence\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'A' || chooseoption == 'a')
					{
						score = score + 2;
					}
				}
				else
				{
				tq12:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'A' || chooseoption == 'a')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq12;
					}
				}
				break;
			case 13:
				printf("\nQ13.The process of determining the monitory worth of something is_______.\n");
				printf("A.Distance\t\t\t\tB.Differece\n");
				printf("C.Valuation\t\t\t\tD.Calculation\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'C' || chooseoption == 'c')
					{
						score = score + 2;
					}
				}
				else
				{
				tq13:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'C' || chooseoption == 'c')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq13;
					}
				}
				break;
			case 14:
				printf("\nQ14.What defines the process of valuation?\n");
				printf("A.Calculation\t\t\t\tB.Distace\n");
				printf("C.Earning\t\t\t\tD.Persent Value Of An Entity\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				tq14:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq14;
					}
				}
				break;
			case 15:
				printf("\nQ15.Value of any entity depends on this________.\n");
				printf("A.Life & Ifficiency\t\t\t\tB.Structure\n");
				printf("C.Mentenans,Location\t\t\t\tD.All of these\n");
				giveans();
				if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
				{
					if (chooseoption == 'D' || chooseoption == 'd')
					{
						score = score + 2;
					}
				}
				else
				{
				tq15:
					printf("\nOhhhh!!! You Choose Invalide Opation....\n");
					printf("\nChoose Valide opation(From Option A To D):");
					scanf(" %c", &chooseoption);
					if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
					{
						if (chooseoption == 'D' || chooseoption == 'd')
						{
							score = score + 2;
						}
					}
					else
					{
						goto tq15;
					}
				}

				break;

			default:
				printf("Quations End!!!!");
				break;
			}
		}
		outputtable();
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

		break;
	default:
		printf("\nInvalide Choice !!!");
		break;
	}
	getch();
	return 0;
}
