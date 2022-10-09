int n_digits(int n)
{
    int num =0;
    do
    {
        n= n/10;
        num=num+1;
    }
    while(n--);
    return num;

}