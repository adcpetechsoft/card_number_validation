#define DIVISION_MIN 4
#define P_OK 0
#define P_INVALID 15

#include <iostream>
#include <string>
#include <cctype>

bool validate(int a, int b, int c, int d)
{

    using namespace std;

    bool res;

    int x;
    int v;

    int z;

    string buff01;
    string st;

    buff01.clear();

    buff01+=to_string(a);
    buff01+=to_string(b);
    buff01+=to_string(c);
    buff01+=to_string(d);

    z=0;

    x=0;
    while( x<buff01.length())
    {
        st=buff01[x];
        v=stoi(st);

        z=z+(v*v);

        st=buff01[x+1];
        v=stoi(st);
        z=z+(v);

        x++;
        x++;
    }

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
    int num[4];

    int x;
    int y;
    int z;

    string buff01;
    string str01;

    if(argc>1)
    {
        x=0;
        y=0;

        while(x<=argc)
        {
            y=0;
            while(y<4)
            {
                buff01=argv[x+y];
                num[y]=stoi(buff01);
                y++;
            };

            if( (validate(num[0], num[1], num[2], num[3]) ) == true )
            {
                cout<<num[0]<<" ";
                cout<<num[1]<<" ";
                cout<<num[2]<<" ";
                cout<<num[3]<<endl;
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