#include <stdio.h>
#include <string.h>
void numbnumber(void);
int checknum();
struct number
{
    int fa, sum;
    char sumnum;
    char num[50];
}numb;




int main()
{
    int check = 0;
    printf("Input number : ");
    gets_s(numb.num);
    numb.fa = strlen(numb.num);

    check = checknum();


    if (check == numb.fa && numb.num[0] != '\0')
    {

        printf("OutPut \n ");
        numbnumber();

    }
    else
    {
        printf("Eror : Input Number !!!");
    }

}

int checknum()
{
    int check = 0;
    for (int j = 0; j < numb.fa; j++)
    {
        for (int i = 0; i < 11; i++) {
            if (numb.num[j] == ' ' && i == 10)
            {
                check++;

            }
            if (numb.num[j] == 48 + i)
            {
                check++;

            }
        }
    }
    return check;
}





void numbnumber()
{
    int  check = 0;


    for (int j = 0; j < numb.fa; j++) {

        numb.sumnum = numb.num[j];

        if (numb.num[j] != ' ' && (numb.num[j] == '0' || numb.num[j] == '1' || numb.num[j] == '2' || numb.num[j] == '3' || numb.num[j] == '4' || numb.num[j] == '5' || numb.num[j] == '6' || numb.num[j] == '7' || numb.num[j] == '8' || numb.num[j] == '9'))
        {
            numb.sum = 0;


            for (int i = 0; i < numb.fa; i++) {

                if (numb.sumnum == numb.num[i])
                {
                    numb.sum++;
                    numb.num[i] = ' ';
                }

            }
            printf(" \t Number : %c = SumNumber %d number.\n", numb.sumnum, numb.sum);
        }

    }



}