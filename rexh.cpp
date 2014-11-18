#include "rexh.h"

int email_is_valid(char email[256])
{
    char pattern[512]="([0-9A-Za-z\\-_\\.]+)@([0-9a-z]+\\.[a-z]{2,3}(\\.[a-z]{2})?)";
    const size_t nmatch = 10;
    regmatch_t pm[10];
    int z ;
    regex_t reg;
    char lbuf[256]="set";
    char buf[256];
    strcpy(buf,email);
    regcomp(&reg,pattern,REG_EXTENDED|REG_NOSUB);


    return regexec(&reg,buf,nmatch,pm,REG_NOTBOL);
}
