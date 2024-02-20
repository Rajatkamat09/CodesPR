
import java.util.*;

class ArrayDemo
{
    public void Display (int Arr[])
    {
        for (int i = 0; i < Arr.length; i++)
        {
            if ((Arr[i] % 11) == 0)
            {
                System.out.println("Multiples of 11 are : "+Arr[i]);
            }
        }
    }

}

class A33_Prog5
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
