int reverse(int x)
{
    long long y = x;
    long long numconstructor = 0;
    
    while(y)
    {
        numconstructor = numconstructor *10 + y%10;
        y/=10;
    }

     if (numconstructor > INT_MAX || numconstructor < INT_MIN) {
        return 0; 
    }

    return (int)numconstructor;

}
