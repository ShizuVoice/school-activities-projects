import java.util.Scanner;

public class Exercise5
{
    public static void main(String[] args)
    {
        String color;
        Scanner input = new Scanner(System.in);

        System.out.println("Choose a color: Black, White, Red, Blue");
        color = input.next();
        input.close();

        if(color.equalsIgnoreCase("black"))
        {
            System.out.println("You must be a Goth!");
        }
        else if(color.equalsIgnoreCase("white"))
        {
            System.out.println("You are a very pure person.");
        }
        else if(color.equalsIgnoreCase("red"))
        {
            System.out.println("You are fun and outgoing.");
        }
        else if(color.equalsIgnoreCase("blue"))
        {
            System.out.println("You're not a Chelsea fan, are you?");
        }
        else
        {
            System.out.println("Sorry, that's not in the listed colors.");
        }
    }
}