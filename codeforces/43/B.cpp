#include<stdio.h>
#include<string.h>
int main()
{
    int i,sma[30],cap[30],p=0;
    char s[203],ans[203],temp;
    for(i=1;i<=26;i++)
    {
        sma[i]=0;
        cap[i]=0;
    }
    //scanf("%c",&temp);
	fgets(s,200,stdin);
    scanf("%[^\n]",ans);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
            continue;
        else if(s[i]>='a' && s[i]<='z')
            sma[s[i]-96]++;
        else
            cap[s[i]-64]++;
    }
    for(i=0;i<strlen(ans);i++)
    {
        if(ans[i]==' ')
            continue;
        else if(ans[i]>='a' && ans[i]<='z')
        {
            if(sma[ans[i]-96]>0)
               sma[ans[i]-96]--;
            else
            {
                p=1;
                break;
            }
        }
        else
        {
            if(cap[ans[i]-64]>0)
               cap[ans[i]-64]--;
            else
            {
                p=1;
                break;
            }
        }
    }
    if(p==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
