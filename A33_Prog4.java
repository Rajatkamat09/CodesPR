
import java.util.*;

class ArrayDemo
{
    public void Display (int Arr[])
    {
        for (int i = 0; i < Arr.length; i++)
        {
            if (((Arr[i] % 5) == 0) && (Arr[i] % 3) == 0 )
            {
                System.out.println("Element divisible by 5 and 3 are : "+Arr[i]);
            }
        }
    }

}

class A33_Prog4
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
        adobj.Display(Arr);
    }


}
