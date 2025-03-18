#define MAX_STR 20

#include <iostream>
#include <string>

bool validate(std::string cardval)
{

    using namespace std;

    bool res;

    int x;
    int v;
    int z;

    string buff01;

    z=0;
    if( (cardval.length() ) == 16)
    {
        x=0;
        while(x<cardval.length() )
        {
            buff01=cardval[x];
            z=stoi(buff01);
            z=(z*2);
            if(z>9)
            {
                z=z-9;
            };
            v=v+z;

            x++;
            buff01=cardval[x];
            z=stoi(buff01);
            v=v+z;
            
            x++;
        };

        if( (v%10) == 0 )
        {
            res=true;
        }else
        {
            res=false;
        };

    }else
    {
        res=false;
    };

    return res;
};

int main(int argc, char * argv[])
{
    using namespace std;
    int num[4];

    int x;
    int y;
    int z;

    string buff01;
    string str01;

    if(argc>1)
    {

        buff01.clear();
        str01.clear();

        x=1;
        while(x<argc)
        {
            y=0;
            while(y<4)
            {
                buff01+=string(argv[x+y]);

                y++;
            };

            

            if( (validate(buff01)) == true )
            {
                cout<<argv[x+0]<<" ";
                cout<<argv[x+1]<<" ";
                cout<<argv[x+2]<<" ";
                cout<<argv[x+3]<<endl;
            };

            x=x+4;
        };

    }else
    {

    };

    return 0;

}