#include <stdio.h>
#include <string.h>

void koko(void);
void specialcharacters(void);


struct nub_specialcharacters
{
    int special , avg ;
    char sumcharacters;
    char characters[50];

}nub;



int main()
{
    koko();
    printf("Input number: ");
    gets_s(nub.characters);

    nub.special = strlen(nub.characters);
    koko();
    printf(" OutPut \n ");
    specialcharacters();

}





void koko()
{
    printf("\n\n\t\t");
}






void specialcharacters()
{
    for (int j = 0; j < nub.special ; j++) {

        nub.sumcharacters = nub.characters[j];

        if (nub.characters[j] != ' ')
        {
            nub.avg = 0;


            for (int i = 0; i < nub.special ; i++) {

                if (nub.sumcharacters == nub.characters[i])
                {
                    nub.avg++;
                    nub.characters[i] = ' ';
                }
                
            }
            koko();
            printf(" \t Specialcharacters : %c   \n", nub.sumcharacters);
            koko();
            printf(" \t With all characters %d body.\n",nub.avg);
            koko();
            printf(" \t------------------------------------------\n");

        }


    }


}

