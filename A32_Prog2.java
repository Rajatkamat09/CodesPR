
import java.util.*;

class StringDemo
{
       public int CountSmall(String str)
       {
              int iCount = 0;

              for (int i= 0;i< str.length() ; i++ )
              {
                     if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'a'))
                     {
                            iCount++;
                     }
              }
              return iCount;
              
       }
       }


class A32_Prog1
{
       public static void main(String a[])
       {
              Scanner sobj = new Scanner (System.in);

              System.out.println("Enter the String : ");
              String str = sobj.nextLine();

              StringDemo sdobj = new StringDemo();
              int CountSmall = sdobj.CountSmall(str);

              System.out.println("Count of the Small letters : "+CountSmall);
             
       }

              
}
