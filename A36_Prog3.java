
import java.util.*;

class StringDemo
{
        public boolean StrCmpX(String src , String dest , int iCnt)
        {
            
            if(iCnt == src.length() || (iCnt <= dest.length()))
            {
                 return true;
            }
            else
            {
                return false;
            }
        }

}

class A36_Prog3
{
        public static void main(String a[])
        {
                Scanner sobj = new Scanner(System.in);

                System.out.println("Enter the 1st String :  ");
                String str1 = sobj.nextLine();

                System.out.println("Enter the 2nd String : ");
                String str2 = sobj.nextLine();

                 System.out.println("Enter the Value of N in Numbers : ");
                int iNum = sobj.nextInt();
            
                StringDemo sdobj = new StringDemo();
                boolean result = sdobj.StrCmpX(str1, str2,iNum); 

                System.out.println("String is : "+result);
        }
}