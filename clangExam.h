#include "initialization.h"
#include "defining_Fuction.h"

void clangExam()
{
    printf("\n\n\t\t\t!!Are You redy Press Enter....!!");
    if (getch() == 13)
    {
        printf("\n\n\t\t---------------------C Programming------------------\n\n");
        for (i = 1; i <= 15; i++)
        {

            switch (i)
            {
            case 1:
                printf("\nQ1.Who is father of C Language?\n");
                printf("A.Bjarne Stroustrup\t\t\t\tB.Denies Ritchie\n");
                printf("C.James A. Gosling\t\t\t\tD.Dr. E.F. Codd\n");

                giveAns();
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
    }
    else
    {
        printf("Be ready and try letter....")
    }
}
