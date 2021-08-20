int DigitCount(int n)
{
    if(n==0)
        return 0;
    return 1 + DigitCount(n/10);
}
