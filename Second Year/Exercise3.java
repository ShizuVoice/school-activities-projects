public class Exercise3
{
    public static void main(String[] args)
    {
        int user = 43;

        if (user <= 18)
        {
            System.out.println("User is less than or equal to 18 years old.");
        }
        else if (user > 18 && user < 40)
        {
            System.out.println("User is between 19 and 49 years old.");
        }
        else if (user == 45 || user == 50)
        {
            System.out.println("User either 45 or 50 years old.");
        }
        else
        {
            System.out.println("User is more than 40 years old.");
        }
    }
}