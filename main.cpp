#include <iostream>
#include <fstream>

using namespace std;
ifstream in("parcare.in");
ofstream out("parcare.out");

/*
January - 31 days
February - 28 days in a common year and 29 days in Leap Years
March - 31 days
April - 30 days
May - 31 days
June - 30 days
July - 31 days
August - 31 days
September - 30 days
October - 31 days
November - 30 days
December - 31 days
*/

int main()
{
    long long int zi,li,hi,mi;
    long long int zf,lf,hf,mf;
    long long int t,cer,dur,pret;
    in>>zi>>li>>hi>>mi;
    in>>zf>>lf>>hf>>mf;
    in>>t;
    in>>cer;

    if(mi>mf)
    {
        mf=mf+60;
        hf--;
    }
    if(hi>hf)
    {
        hf=hf+24;
        zf--;
    }
    if(zi>zf)
    {
        if(lf==1)
            zf=zf+31;
        else if(lf==2)
            zf=zf+31;
        else if(lf==3)
            zf=zf+28;
        else if(lf==4)
            zf=zf+31;
        else if(lf==5)
            zf=zf+30;
        else if(lf==6)
            zf=zf+31;
        else if(lf==7)
            zf=zf+30;
        else if(lf==8)
            zf=zf+31;
        else if(lf==9)
            zf=zf+31;
        else if(lf==10)
            zf=zf+30;
        else if(lf==11)
            zf=zf+31;
        else if(lf==12)
            zf=zf+30;
        lf--;
    }
    if(cer==1)
    {
        dur=(mf-mi)+(hf-hi)*60+(zf-zi)*60*24;
        out<<dur;
    }
    else
    {
        dur=(mf-mi)+(hf-hi)*60+(zf-zi)*60*24;
        if(dur<=15)
            out<<"0";
        else
        {
            if(mf>0)
                hf++;
            hf=hf+(zf-zi)*24;
            pret=(hf-hi)*t;
            out<<pret;
        }
    }
    return 0;
}
