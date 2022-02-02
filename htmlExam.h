#include "initialization.h"
#include "defining_Fuction.h"

void htmlExam()
{
    printf("\n\n\t\t\t!!Are You redy Press Enter....!!");
    if(getch()==13)
    {
        printf("\n\n\t\t---------------------HTML------------------\n\n");

        for (i = 1; i <= 15; i++)
        {

            switch (i)
            {
            case 1:
                printf("\nQ1.Concept of webpage was introduce by _____.\n");
                printf("A. Ken Thompson\t\t\t\tB.Denies Ritchie\n");
                printf("C.Bill Gates\t\t\t\tD.Tim Berners Lee\n");
                giveAns();
                if (chooseoption == 'A' || chooseoption == 'a' || chooseoption == 'B' || chooseoption == 'b' || chooseoption == 'C' || chooseoption == 'c' || chooseoption == 'D' || chooseoption == 'd')
                {
                    if (chooseoption == 'D' || chooseoption == 'd')
                    {
                        score = score + 2;
                    }
                }
                else
                {
                hq1:
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
                        goto hq1;
                    }
                }
                break;
            case 2:
                printf("\n\nQ2.HTML is used to design and develop_______.\n");
                printf("A.Webpages\t\t\t\tB.Motherbord\n");
                printf("C.Network\t\t\t\tD.Computer\n");

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
                hq2:
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
                        goto hq2;
                    }
                }
                break;
            case 3:
                printf("\n\nQ3.Internet is network of network of_______.\n");
                printf("A.Global Network\t\t\t\tB.Computer Network\n");
                printf("C.Local Network\t\t\t\tD.Wide Network\n");

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
                hq3:
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
                        goto hq3;
                    }
                }
                break;
            case 4:
                printf("\n\nQ4.Which page is not frequently changed ?\n");
                printf("A.Dynamic Page\t\t\t\tB.Rolling Page\n");
                printf("C.Static Page\t\t\t\tD.A4 Page\n");
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
                hq4:
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
                        goto hq4;
                    }
                }
                break;
            case 5:
                printf("\n\nQ5.Static page which code contain ?\n");
                printf("A.PYTHON\t\t\t\tB.PHP\n");
                printf("C.JAVA\t\t\t\tD.HTML\n");
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
                hq5:
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
                        goto hq5;
                    }
                }
                break;
            case 6:
                printf("\n\nQ6.Collection of Webpages releted to same domain or field and interlink called ?\n");
                printf("A.Website\t\t\t\tB.Server\n");
                printf("C.Network\t\t\t\tD.Computer\n");
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
                hq6:
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
                        goto hq6;
                    }
                }
                break;
            case 7:
                printf("\n\nQ7.Website is central location of various_______.\n");
                printf("A.Network\t\t\t\tB.Computer\n");
                printf("C.Webpage\t\t\t\tD.Server\n");
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
                hq7:
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
                        goto hq7;
                    }
                }
                break;
            case 8:
                printf("\n\nQ8.Which tag is used to display the text by removing all extra blank spaces and blank lines ?\n");
                printf("A.Paragraph Tag\t\t\t\tB.List Tag\n");
                printf("C.body Tag\t\t\t\tD.HR Tag\n");
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
                hq8:
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
                        goto hq8;
                    }
                }
                break;
            case 9:
                printf("\n\nQ9.Which tag is used to draw horizontal rule of line on webpage ?\n");
                printf("A.Paragraph Tag\t\t\t\tB.List Tag\n");
                printf("C.body Tag\t\t\t\tD.HR Tag\n");
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
                hq9:
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
                        goto hq9;
                    }
                }
                break;
            case 10:
                printf("\n\nQ10.Which tag is used to show scrolling text ?\n");
                printf("A.Underline Tag\t\t\t\tB.Smaller Tag\n");
                printf("C.List Tag\t\t\t\tD.Marquee Tag\n");
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
                hq10:
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
                        goto hq10;
                    }
                }
                break;
            case 11:
                printf("\n\nQ11.The term URL is______.\n");
                printf("A.Uniform Resource Locater\t\t\t\tB.Uniform Resource Location\n");
                printf("C.Unicqe Resourse Locater\t\t\t\tD.Unknow Resource Locater\n");
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
                hq11:
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
                        goto hq11;
                    }
                }
                break;
            case 12:
                printf("\n\nQ12.URL also called as_______.\n");
                printf("A.Server Address\t\t\t\tB.Localhost\n");
                printf("C.Web Address\t\t\t\tD.Computer Address\n");
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
                hq12:
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
                        goto hq12;
                    }
                }
                break;
            case 13:
                printf("\n\nQ13.For successful communication what factors are necessary.\n");
                printf("A.Hardware\t\t\t\tB.Software\n");
                printf("C.Protocol\t\t\t\tD.All OF These\n");
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
                hq13:
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
                        goto hq13;
                    }
                }
                break;
            case 14:
                printf("\n\nQ14.The protocol user on internet also called____.\n");
                printf("A.Internet Protocol\t\t\t\tB.Web Protocol\n");
                printf("C.Both A and B\t\t\t\tD.Webserver\n");
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
                hq14:
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
                        goto hq14;
                    }
                }
                break;
            case 15:
                printf("\n\nQ15.What is FTP ?\n");
                printf("A.Client-Server Protocol\t\t\t\tB.Sever Protocol\n");
                printf("C.Client Protocol\t\t\t\tD.HTTP Protocol\n");
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
                hq15:
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
                        goto hq15;
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
    