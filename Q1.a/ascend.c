void ascend(int N,int a[])
{   int  temp;
    for(int i=0; i < N; i++)
    {

        for(int j = i+1 ; j< N; j++)
        {
            if( a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                
            }

        }
    }

}