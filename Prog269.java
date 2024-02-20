import java.util.*;

class Prog269
{
    public static void main (String a[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo= 0;
        int iMask = 0X00000004;
        int iResult = 0;

        System.out.println("Enter the Number: ");;
        iNo = sobj.nextInt();

        iResult = iNo & iMask ;

        if(iResult == iMask)
        {
            System.out.println("3rd bit is ON");
        }
        else
        {
            System.out.println("3rd bit is OFF");
        }
        
        
    }
}