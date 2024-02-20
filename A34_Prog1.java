
import java.util.*;

class Digit
{
    public int CountEven(int iNO)
    {
        int iDigit = 0;
        while (iNO != 0)
        {
            if (((iNO % 10 )% 2 ) == 0)
            {
                iDigit++;
            }
            iNO = iNO /10;
        }
        return iDigit;
    }
}

class A34_Prog1
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int  iNO = sobj.nextInt();
        
        Digit dobj = new Digit();
        int countEven = dobj.CountEven(iNO);

        System.out.println("Even Elements are : "+countEven);
    }

}
