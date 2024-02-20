
import java.util.*;

class Digit
{
    public int CountOdd(int iNO)
    {
        int iDigit = 0;
        while (iNO != 0)
        {
            if (((iNO % 10 )% 2 ) != 0)
            {
                iDigit++;
            }
            iNO = iNO /10;
        }
        return iDigit;
    }
}

class A34_Prog2
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int  iNO = sobj.nextInt();
        
        Digit dobj = new Digit();
        int countOdd = dobj.CountOdd(iNO);

        System.out.println("Odd Elements are : "+countOdd);
    }

}
