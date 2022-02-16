import java.util.Scanner;

public class Exercise4
{
    public static void main(String[] args)
    {
        int user_age;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the user age: ");
        user_age = input.nextInt();
        input.close();

        if (user_age > 0 && user_age <= 10)
        {
            System.out.println(user_age + " is between 0 and 10 years old.");
        }
        else if (user_age > 10 && user_age <= 20)
        {
            System.out.println(user_age + " is between 11 and 20 years old.");
        }
        else if (user_age > 20 && user_age <= 30)
        {
            System.out.println(user_age + " is between 21 and 30 years old.");
        }
        else if (user_age > 30)
        {
            System.out.println("You are 30 years old or over.");
        }
        else
        {
            System.out.println("Invalid age.");
        }
    }
}