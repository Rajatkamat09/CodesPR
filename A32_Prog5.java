
import java.util.*;

class StringDemo
{
    public void Reverse(String str)
    {
        char cArr[] = str.tocArr();
        int iStt = 0;
        int iRev = cArr.length -1;

        while (iStt < iRev)
        {
            char temp = cArr[iStt];
            cArr[iStt] = cArr[iRev];
            cArr[iRev] = temp;
            
            iStt++;
            iRev--;
        }
        System.out.println("Reversed String is  : " + iRev);
    
    }

}

class A32_Prog5
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
    

    }

}
