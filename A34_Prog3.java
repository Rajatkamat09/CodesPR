
import java.util.*;

class Digit
{
    public int CountRange(int iNO)
    {
        int iDigit = 0;
        while (iNO != 0)
        {
            if (((iNO % 10 )>3 ) && ((iNO % 10 )< 7 ))
            {
                iDigit++;
            }
            iNO = iNO /10;
        }
        return iDigit;
    }
}

class A34_Prog3
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int  iNO = sobj.nextInt();
        
        Digit dobj = new Digit();
        int countRange = dobj.CountRange(iNO);

        System.out.println("Elements between 3 and 7 are : "+countRange);
    }

}
