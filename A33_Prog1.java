
import java.util.*;

class ArrayDemo
{
    public int Difference (int Arr[])
    {
        int iEven = 0 , iOdd = 0, iDiff = 0;

        for (int i = 0; i < Arr.length; i++)
        {
            if ((Arr[i] % 2) == 0)
            {
                iEven = iEven +Arr[i];
            }
            else if ((Arr[i] % 2) != 0)
            {
                iOdd = iOdd+Arr[i];    
            }
            
        }
        return iDiff = iEven - iOdd;
    
    }

}

class A33_Prog1
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of the Array : ");
        int  size = sobj.nextInt();

        int Arr[] = new int [size];

        System.out.println("Enter the Elements in Array : ");
        for (int i = 0; i < size; i++)
        {
            Arr[i] = sobj.nextInt();    
        }

        ArrayDemo adobj = new ArrayDemo();
        int difference = adobj.Difference(Arr);

        System.out.println("Difference in Summation is : "+difference);
    }

}
