import java.util.*;

class Prog261
{
    public static void main (String a[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo= 0;
        int iDigit = 0;

        System.out.println("Enter the Number: ");;
        iNo = sobj.nextInt();
        
        while(iNo != 0)
        {
            iDigit = iNo % 2;
            iNo= iNo/2;
            System.out.print(iDigit);
        }
        System.out.println();
    }
}