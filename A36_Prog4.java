
import java.util.*;

class StringDemo
{
        public String StrRevTogX(String src)
        {
            StringBuilder reversed  = new StringBuilder(src).reverse();

            for(int i = 0; i< reversed.length() ;i++)
            {
                char cChar = reversed.charAt(i);

                if(Character.isUpperCase(cChar))
                {
                    reversed.setCharAt(i, Character.toLowerCase(cChar));
                }
                else
                {
                    reversed.setCharAt(i , Character.toUpperCase(cChar));
                }
            }
            return reversed.toString();
        }

}

class A36_Prog4
{
        public static void main(String a[])
        {
                Scanner sobj = new Scanner(System.in);

                System.out.println("Enter the String :  ");
                String str = sobj.nextLine();

            
                StringDemo sdobj = new StringDemo();
                String result = sdobj.StrRevTogX(str); 

                System.out.println("String is : "+result);
        }
}