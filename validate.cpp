#define DIVISION_MIN 4
#define P_OK 0
#define P_INVALID 15

#include <iostream>
#include <string>
#include <cctype>

bool validate(std::string buff01)
{

    using namespace std;

    bool res;

    int x;
    int v;
    int z;

    string st;

    z=0;

    x=0;
    while( x<buff01.length()  )
    {
        st=buff01[x];
        v=stoi(st);

        z=z+(v*v);

        st=buff01[x+1];
        v=stoi(st);
        z=z+(v);

        x++;
        x++;
    };

    if( (z%10) == 0 )
    {
        res=true;
    }else
    {
        res=false;
    };

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
