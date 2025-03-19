#define SIZE_CARD 16

#include <iostream>
#include <string>

bool validate(std::string buff01)
{

    using namespace std;

    bool res;

    int card[SIZE_CARD];

    int x;
    int v;

    int i;
    int j;
    int k;

    string st;

    x=0;
    while(x<SIZE_CARD)
    {
        st[0]=buff01[x];
        st[1]='\0';
        card[x]=stoi(st);

        x++;
    };

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

    if( (k%10) == 0)
    {
        res=true;
    }else
    {
        res=false;
    }

    return res;

};

int main(int argc, char * argv[])
{
    using namespace std;

    int x;
    int y;

    string buff01;

    if(argc>1)
    {

        x=1;

        while(x<argc)
        {
            buff01.clear();

            y=0;
            while(y<4)
            {
                buff01+=string(argv[x+y] );
                y++;
            };

            if( (validate(buff01 ) ) == true )
            {
                cout<<argv[x]<<" ";
                cout<<argv[x+1]<<" ";
                cout<<argv[x+2]<<" ";
                cout<<argv[x+3]<<" ";
                cout<<endl;
            }else
            {

            };

            x=x+4;

        };
        
    }else
    {

    };

    return 0;

}
