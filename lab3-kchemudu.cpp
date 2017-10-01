//Krishna Sai C
//Lab3
#include <iostream>
#include <iomanip>
#include <cfloat>

using namespace std;

short sum_Short(short n)
{
    short sum = 0;
    short i = 1;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    return sum;
}
long sum_Long(long n)
{
    long sum = 0;
    long i = 1;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    return sum;
}
float product_float(long n)
{
    float product = 1;
    long i = 1;
    while(i<=n)
    {
        product = product * i;
        i++;
    }
    return product;
}
double product_double(long n)
{
    double product = 1;
    long i = 1;
    while(i<=n)
    {
        product = product * i;
        i++;
    }
    return product;
}
float f0(int n)
{
    float sum = 0;
    float i = 1;
    while(i<=n)
    {
        float one_over_n = 1/(float)n;
        sum = sum + one_over_n;
        i++;
    }
    return sum - 1;
}
double f1(int n)
{
    double sum = 0;
    double i = 1;
    while(i<=n)
    {
        double one_over_n = (1/(double)n);
        sum = sum + one_over_n;
        //cout<<sum<<endl;
        i++;
    }
    return sum - 1;
}

int main()
{
   //Ans 1: The n value is 255 and the sum is 32,640.
   short n = 255;
   cout<<"The sum of the first "<<n<<" numbers is: "<<sum_Short(n)<<endl;
   //Ans 2: The overflow error occurs at 256 for short. The overflow is detected when the sum is negative.
   n = 256;
   cout<<"The sum of the first "<<n<<" numbers is: "<<sum_Short(n)<<endl;
   //Ans 3: The n  value is 9,594,478 and the sum is 2,139,299,545.In this case too, the overflow is detected when the sum turns negative.
   long x = 9594478;
   cout<<"The sum of the first "<<x<<" numbers is: "<<sum_Long(x)<<endl;
   //The overflow error occurs at 9,594,479 for long
   x = 9594479;
   cout<<"The sum of the first "<<x<<" numbers is: "<<sum_Long(x)<<endl;
   //Ans 4: The overflow is detected when the product returns 'inf'.
   long p = 34;
   cout<<"The product of the first "<<p<<" numbers is: "<<product_float(p)<<endl;
   // The overflow is caused by value of 35
   p = 35;
   cout<<"The product of the first "<<p<<" numbers is: "<<product_float(p)<<endl;
   //Ans 5: In this case too, the overflow is detected when the product returned is 'inf'.
   long m= 170;
   cout<<"The product of the first "<<m<<" numbers is: "<<product_double(m)<<endl;
   // The overflow is caused by value of 171
   m = 171;
   cout<<"The product of the first "<<m<<" numbers is: "<<product_double(m)<<endl;

   //Ans 6: The expected value of the sigma (i = 1 to i =n)[1/n] - 1.0 is zero.
   long o= 9;
   cout<<"The sum of reciprocals of first "<<o<<" numbers subtracted by one is (float): "<<f0(o)<<endl;
   // Since, the computer cannot store the decimal exactly in binary, there are some approximations.
   // When the ratio is stored in float, the value of the function is zero till 9. Once n equals 10, the value is no more zero.
   // This is because as the n value increases, the number of copies added increases. This in turn adds up the error in all the copies
   // until it is no more closest to zero.
   o = 10;
   cout<<"The sum of reciprocals of first "<<o<<" numbers subtracted by one is (float): "<<f0(o)<<endl;

   long q= 5;
   cout<<"The sum of reciprocals of first "<<q<<" numbers subtracted by one is (double): "<<f1(q)<<endl;
   // When the ratio is stored in a double, the precision increases. Therefore the computer can find more doubles in binary closer to the overall error
   // than zero. Hence, we see the function f1() showing error earlier at a value of 6 than f0().
   q = 6;
   cout<<"The sum of reciprocals of first "<<q<<" numbers subtracted by one is (double): "<<f1(q)<<endl;

   for(float i = 3.4; i< 4.4; i += 0.2)
   {
       //cout<<setprecision(18);
       //cout<<fixed;
       cout<<"i = "<< i<<endl;
   }
   //Ans 7: We see the loop printing 4.4 here, because when we declare float i = 3.4, we are assigning a double to a float data type.
   //Since, the computer cannot store the decimal exactly in binary, there are some approximations. When i set precision to
   //18, we see that the last decimal is 4.399999618530273438 instead of 4.4. As a result the loop prints 4.4.
   for(double i = 3.4; i<4.4; i += 0.2)
   {
       //cout<<setprecision(18);
       //cout<<fixed;
       cout<<"i = "<< i<<endl;
   }
   //Ans 8: Since the data type double has takes up more memory it is able to store the value with more accuracy, and precision. Therefore,
   //the value of it in binary is more closer to the actual value than when it was stored in float.
   //Since 4.4 is stored as 4.400000000000000355 which is greater than 4.4, 4.4 was not printed out.

}

