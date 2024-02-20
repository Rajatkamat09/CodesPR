
import java.util.*;

class StringDemo
{
        public String StrNCatX(String src , String dest, int iCnt)
        {
                if (iCnt > dest.length())
                {
        
                        return src +" "+ dest;
                } 
                else {
        
                        return src +" "+dest.substring(0, iCnt);
                        }
        }
}

class A36_Prog1
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
                String result = sdobj.StrNCatX(str1, str2, iNum); 

                System.out.println("String is : "+result);
        }
}