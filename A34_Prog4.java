
import java.util.*;

class Digit
{
    public int Multiply(int iNO)
    {
        int iDigit = 0;
        int iMulti = 1;
        while (iNO != 0)
        {
            iDigit = iNO % 10 ;
            if (iDigit != 0)
            {
                iMulti = iMulti * iDigit;
            }
            iNO = iNO /10;
        }
        return iMulti;
    }
}

class A34_Prog4
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int  iNO = sobj.nextInt();
        
        Digit dobj = new Digit();
        int multiply = dobj.Multiply(iNO);

        System.out.println("Multiplication of Digits are : "+multiply);
    }

}
