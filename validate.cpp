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

#include <iostream>
#include <string>

// ---------------------------------
// validate function declaration
bool validate(std::string buff01)
{

    // ***********************
    // Variable Declaration
    using namespace std;

    bool res;

    int card[SIZE_CARD];

    int x;
    int v;

    int i;
    int j;
    int k;

    string st;

    // ***********************
    // Actual function

    // transfer from string to integer variables
    x=0;
    while(x<SIZE_CARD)
    {
        st[0]=buff01[x];
        st[1]='\0';
        card[x]=stoi(st);

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
        res=true;
    }else
    {
        res=false;
    }

    return res;

};


// ---------------------------------
// Progran  Entry Point
int main(int argc, char * argv[])
{
    
     // ***********************
    // Variable Declaration
    using namespace std;

    int x;
    int y;

    string buff01;

    
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
            buff01.clear();

            // transfer from arg to string
            y=0;
            while(y<4)
            {
                buff01+=string(argv[x+y] );
                y++;
            };

            // test string for card validity
            // then display if valid
            if( (validate(buff01 ) ) == true )
            {
                cout<<argv[x]<<" ";
                cout<<argv[x+1]<<" ";
                cout<<argv[x+2]<<" ";
                cout<<argv[x+3]<<" ";
                cout<<endl;
            }else
            {
                // Situation if card is invalid

            };

            x=x+4;

        };
        
    }else
    {
        // if no arg input
        cout<<"No Card Number Input..."<<endl;

    };

    return 0;

};
