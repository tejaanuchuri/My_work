#include<stdio.h>
int main()
{
    int t,i,n,k,j,count,flag;
    scanf("%d",&t);
    //max(n1,(n2*k2),n3) ha three lo max value ni consider chesukovalee
    //t*(n1+(n2*k2)+n3) = 100 * (1000 + (1000*1000000000)+(1000)) = 100 * (1000000000000) = 100000000000 = 10p 14;
    // one second is equal to 10 power 9
	// but ne code 10 power 14 so 10 power 9 datindhi kabbati nidhi time out error vasthundhi    
    for(i=1;i<=t;i++)	// here t number of case here (t = 100) (max) ----> t=100
    {
        flag=0;
        scanf("%d %d",&n,&k);
        int p[n],s[n],min[n];
        for(j=1;j<=n;j++)		//here 1 - n means n value max (n=1000)	---->n1 =1000
        {
            scanf("%d",&p[j]);
            s[j]=p[j];
        }
        for(j=1;j<=n;j++)		//                                      ----->n2=1000
        {
            count=0;
            int temp=p[j];
            while(p[j]+temp<=k)						//e loop aythe   	------>k2 10p9		
			// p[j] min value is 1 constrain lo chudu and ha loop max k value varuku velthadhi  (k-max -value-10p9)
            //while(1<=100000000) //manam worst case ni consider cheyalee sis ha loop max varuku ani find cheyalee
			{
                p[j]=p[j]+temp;
                count++;
                if(p[j]==k)
                {
                flag++;
                break;
                }
            }
            min[j]=count;
        }
        if(flag==0)
        {
            printf("-1\n");
        }
        else
        {
        int m=n,index;
        for(j=1;j<=n;j++)				// ----------------> n3 = 1000
        {
            if(min[j]<m && min[j]>=1)
            {
            m=min[j];
            index=j;    
            }
        }
        printf("%d\n",s[index]);
        }
    }
    return 0;
}
//whatsapp chudu
