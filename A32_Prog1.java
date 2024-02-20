
import java.util.*;

class StringDemo
{
       public int CountCapital(String str)
       {
              int iCount = 0;

              for (int i= 0;i< str.length() ; i++ )
              {
                     if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
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
              int CountCapital = sdobj.CountCapital(str);

              System.out.println("Count of the Capital letters : "+CountCapital);
             
       }

              
}
