#include "initialization.h"
#include "defining_Fuction.h"

void tallyExam()
{
    printf("\n\n\t\t\t!!Are You redy Press Enter....!!");
    if (getch() == 13)
    {
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
    }
    else
    {
        printf("Be ready and try letter....")
    }
}
