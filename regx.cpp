#include <regex.h>
#include <iostream>
#include <sys/types.h>
#include <stdio.h>
#include <cstring>
#include <sys/time.h>

using namespace std;
const int times = 1000000;

int main(int argc,char** argv)
{
    char pattern[512]="([0-9A-Za-z\\-_\\.]+)@([0-9a-z]+\\.[a-z]{2,3}(\\.[a-z]{2})?)";
    const size_t nmatch = 10;
    regmatch_t pm[10];
    int z ;
    regex_t reg;
    char lbuf[256]="set",rbuf[256];
    char buf[256] = "allen7593@gmail.com";
    printf("input strings:\n");
    timeval end,start;
    gettimeofday(&start,NULL);
    regcomp(&reg,pattern,REG_EXTENDED|REG_NOSUB);
    //for(int i = 0 ; i < times; ++i)
    {
        //for(int j = 0 ; j < 3; ++j)
        {
            z = regexec(&reg,buf,nmatch,pm,REG_NOTBOL);
            if(z==REG_NOMATCH)
                printf("no match\n");
            else
                printf("ok\n");
                
        }
    }
    gettimeofday(&end,NULL);
    uint time = (end.tv_sec-start.tv_sec)*1000000 + end.tv_usec - start.tv_usec;
    cout<<time/1000000<<" s and "<<time%1000000<<" us."<<endl;
    return 0 ;
}
