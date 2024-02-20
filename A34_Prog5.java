
import java.util.*;

class Digit
{
    public int CountDiff(int iNO)
    {
        int iDigit = 0;
        int iEven = 0 , iOdd = 0;
        int iDiff = 0;

        while (iNO != 0)
        {
            iDigit = iNO % 10 ;
            if ((iDigit % 2) == 0)
            {
                iEven = iEven + iDigit;
            }
            else if ((iDigit % 2) != 0)
            {
                iOdd = iOdd + iDigit;
            }
            iNO = iNO /10;
        }
        return iDiff = iEven - iOdd;
    }
}

class A34_Prog5
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int  iNO = sobj.nextInt();
        
        Digit dobj = new Digit();
        int diff = dobj.CountDiff(iNO);

        System.out.println("Multiplication of Digits are : "+diff);
    }

}
