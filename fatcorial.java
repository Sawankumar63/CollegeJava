import java.util.Scanner;

public class fatcorial
{
    public static void main(String[] args)
    {
        int i;
        int num;
        int fact=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your number");
        num=sc.nextInt();

        for(i=1;i<=num;i++)
        {
         fact=fact*i;

        }
        System.out.println(fact);
    }


}
