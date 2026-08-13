int mySqrt(int x) {
   double temp = 0;
   double sqrt = x / 2;
   while(sqrt != temp)
   {
    temp = sqrt;
    sqrt = (x/temp + temp)/2;
   }
   double p;
   if(x > 1)
   {
p = sqrt;
   }
   else
   {
    p = x;
   }
   return p;
}