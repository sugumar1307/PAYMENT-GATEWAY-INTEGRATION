for(i=1;i<=n;i++)
{
    for(j=1;j<n;j++)
    {
        if(i==j)
        {
            if(i<m)
            {
                printf("%d",(n-i+1));
            }
            else
            {
                printf("%d",i);
            }
        }
        else if(i+j==n+1)
        {
            if(i<m)
            {
                printf("");
            }
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}