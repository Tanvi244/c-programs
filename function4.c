#include <stdio.h>
int Addition(int No1, int No2)
{
    int sum = 0;
    sum = No1 + No2;
    return sum;

}

int Subtraction(int Data1, int Data2)

{
    int Result = 0;
    Result = Data1 - Data2;
    return Result;
}


int Multiplication(int mul1, int mul2)

{
    int Rec = 0;
    Rec = mul1 * mul2;
    return Rec;
}

int main()
{ 
    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;

   
Ans = Addition(Value1,Value2); 
 printf("Addition is: %d\n",Ans);

 Ans = Subtraction(Value1,Value2);
  printf("Subtraction is: %d\n",Ans);

  Ans = Multiplication(Value1,Value2);
 printf("Multiplication is: %d\n",Ans);


return 0;
}