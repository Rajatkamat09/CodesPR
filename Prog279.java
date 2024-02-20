import java.util.*;

class Prog279
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0X00004000;
        int iResult = 0;

        iResult = iNo ^ iMask ;

       return iResult;
    }
    public static void main (String a[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo = 0;
        int iRet = 0;
        
        System.out.println("Enter the number");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);
        
        System.out.println("Updated number is"+iRet);
        
    }
}