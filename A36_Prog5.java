
import java.util.*;

class StringDemo
{
        public boolean StrPallindrome(String str)
        {
             String pString = str.replaceAll("\\s", "").toLowerCase();

        int iLength = pString.length();
        for (int i = 0; i < iLength / 2; i++)
        {
            if (pString.charAt(i) != pString.charAt(iLength - i - 1))
            {
                return false;
            }
        }
        return true;
        }

}

class A36_Prog5
{
        public static void main(String a[])
        {
                Scanner sobj = new Scanner(System.in);

                System.out.println("Enter the String :  ");
                String str = sobj.nextLine();

            
                StringDemo sdobj = new StringDemo();
                boolean result = sdobj.StrPallindrome(str); 

                System.out.println("String is : "+result);
        }
}