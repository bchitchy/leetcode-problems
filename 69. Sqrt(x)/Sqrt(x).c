int mySqrt(int x) {
    double num = 0;
    while(num*num  < x)
    {   
        num++;
    }

    if(num * num > x)return --num;
    else return num;
}
