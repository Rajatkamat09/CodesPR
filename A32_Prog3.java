
import java.util.*;

class StringDemo
{
       public int CountDiff(String str)
       {
              int iCountC = 0;
              int iCountS = 0;
              int iDiff = 0;

              for (int i= 0;i< str.length() ; i++ )
              {
                     if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
                     {
                            iCountC++;
                     }
                     else if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
                     {
                            iCountS++;
                     }
              }
              return iDiff = iCountS - iCountC ;
              
       }
       }


class A32_Prog3
{
       public static void main(String a[])
       {
              Scanner sobj = new Scanner (System.in);

              System.out.println("Enter the String : ");
              String str = sobj.nextLine();

              StringDemo sdobj = new StringDemo();
              int CountDiff = sdobj.CountDiff(str);

              System.out.println("Count of the Diff letters : "+CountDiff);
             
       }

              
}
