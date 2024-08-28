#define maxval 50
#define counter 11
main()
{
    float value[maxval];
    int  i, low,hight;
    int group[counter]={0,0,0,0,0,0,0,0,0,0,0};

    /*......REDING AND COUNTING......*/
    for(i=0;i<maxval;i++)
    {
        /*......READING OF VALUES....*/
        scanf("%f",&value[i]);
        /*........COUNTING FREQUENCY OF GROUPS....*/
        ++group[(int)(value[i]) /10];

    }
    /*........PRINTING OF FREQUENCY TABLE......*/
    printf("\n");
    printf("GROUP RANGE FREQUENCY\n\n  ");
    for( i = 0 ; i < counter; i++)
    {
        low=i*10;
        if(i==10)
           hight = 100;
           else
            hight=low+9;
        printf(" %2d %3d to %3d %d\n" ,i+1, low,hight,group[i] );
    }

}
