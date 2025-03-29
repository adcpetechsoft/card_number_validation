/*
    card_number_validation program
    As a submission for https://code.golf/card-number-validation#cpp

    Note: Program work well during on main system but 
    bugs and error encountered on submit.

    Created by: amd
*/

// ---------------------------------
// Preprocessor Declaration
#define SIZE_CARD 16
#define STR_SIZE 20

#define P_OK 0
#define P_ERR_VAL -10
#define P_ERR_NUM -20

#include <stdio.h>
#include <string.h>

// ---------------------------------
// validate function declaration
int validate(char buff01[STR_SIZE])
{

    // ***********************
    // Variable Declaration

    int res;

    int card[SIZE_CARD];

    int x;
    int v;

    int i;
    int j;
    int k;

    char st[5];

    // ***********************
    // Actual function

    // transfer from string to integer variables
    x=0;
    while(x<SIZE_CARD)
    {
        st[0]=buff01[x];
        st[1]=EOF;
        sscanf(st, "%i", &card[x]);

        x++;
    };


    // test and calculate the card validity
    i=0;
    j=0;
    k=0;

    x=0;
    while(x<SIZE_CARD)
    {

        v=( (card[x]) *2 );
        if(v>9)
        {
            v=v-9;
        };
        i=i+v;
        j=j+((card[x+1]));

        x++;
        x++;

    };

    k=i+j;

    // testing the result

    if( (k%10) == 0)
    {
        res=P_OK;
    }else
    {
        res=P_ERR_VAL;
    }

    return res;

};


// ---------------------------------
// Progran  Entry Point
int main(int argc, char * argv[])
{
    
    // ***********************
    // Variable Declaration

    int x;
    int y;

    char buff01[STR_SIZE];

    
    // ***********************
    // Actual Procedure

    // test for inputed arg.
    if(argc>1)
    {

        // situation if with arg input
        x=1;

        // testing for all arg input
        while(x<argc)
        {
            memset(buff01, '\0', sizeof(buff01));

            // transfer from arg to string

            snprintf(buff01, sizeof(buff01), "%s%s%s%s", argv[x], argv[x+1], argv[x+2], argv[x+3]);
            

            // test string for card validity
            // then display if valid
            if( (validate(buff01 ) ) == P_OK )
            {
                printf("%s %s %s %s\n", argv[x], argv[x+1],  argv[x+2], argv[x+3]);

            }else
            {
                // Situation if card is invalid

            };

            x++;
            x++;
            x++;
            x++;

        };
        
    }else
    {
        // if no arg input
        printf("No Card Number Input...\n");

    };

    return 0;

};
