import java.util.Scanner;

public class CS2
{
    public static void main(String[] args)
    {
        System.out.print("\033\143"); // Clears the terminal/console
        String lastname, firstname, middlename; // Variables used for the name for better formatting
        String address, cpno, id; // Other info of the employee
        double bsalary, honorarium, allowance; // Needed variables for numerical input
        double deduction, nsalary, gsalary;
        double tax = 0.1, pagibig = 100, sss = 0;

        Scanner input = new Scanner(System.in);

        System.out.println("+-----------------------------------------+");
        System.out.println("+      Pay Slip System v2 by SilentVOEZ   +");
        System.out.println("+-----------------------------------------+");
        System.out.println();
        System.out.println("====== Employee Info ======");
        System.out.print("Last Name: ");
        lastname = input.nextLine();
        System.out.print("First Name: ");
        firstname = input.nextLine();
        System.out.print("Middle Name (leave blank if none): ");
        middlename = input.nextLine();
        System.out.print("Address: ");
        address = input.nextLine();
        System.out.print("Cellphone Number: ");
        cpno = input.nextLine();
        System.out.print("Employee ID: ");
        id = input.nextLine();
        System.out.println();
        System.out.println("====== Salary Info ======");
        System.out.print("Basic Salary: ");
        bsalary = input.nextDouble();
        System.out.print("Honorarium (Tip): ");
        honorarium = input.nextDouble();
        System.out.print("Allowance: ");
        allowance = input.nextDouble();
        input.close();

        // First Calculation
        gsalary = bsalary + honorarium + allowance;

        // SSS Calculation
        if (gsalary < 10249.99)
        {
            sss = 1310;
        }
        else if (gsalary >= 10250 && gsalary <= 10749.99)
        {
            sss = 1375;
        }
        else if (gsalary >= 10750 && gsalary <= 11249.99)
        {
            sss = 1440;
        }
        else if (gsalary >= 11250 && gsalary <= 11749.99)
        {
            sss = 1505;
        }
        else if (gsalary >= 11750 && gsalary <= 12249.99)
        {
            sss = 1570;
        }
        else if (gsalary >= 12250 && gsalary <= 12749.99)
        {
            sss = 1635;
        }
        else if (gsalary >= 12750 && gsalary <= 13249.99)
        {
            sss = 1700;
        }
        else if (gsalary >= 13250 && gsalary <= 13749.99)
        {
            sss = 1765;
        }
        else if (gsalary >= 13750 && gsalary <= 14249.99)
        {
            sss = 1830;
        }
        else if (gsalary >= 14250 && gsalary <= 147249.99)
        {
            sss = 1895;
        }
        else if (gsalary >= 14750 && gsalary <= 15249.99)
        {
            sss = 1980;
        }
        else if (gsalary >= 15250 && gsalary <= 15749.99)
        {
            sss = 2045;
        }
        else if (gsalary >= 15750 && gsalary <= 16249.99)
        {
            sss = 2110;
        }
        else if (gsalary >= 16250 && gsalary <= 16749.99)
        {
            sss = 2175;
        }
        else if (gsalary >= 16750 && gsalary <= 17249.99)
        {
            sss = 2240;
        }
        else if (gsalary >= 17250 && gsalary <= 17749.99)
        {
            sss = 2305;
        }
        else if (gsalary >= 17750 && gsalary <= 18249.99)
        {
            sss = 2370;
        }
        else if (gsalary >= 18250 && gsalary <= 18749.99)
        {
            sss = 2435;
        }
        else if (gsalary >= 18750 && gsalary <= 19249.99)
        {
            sss = 2500;
        }
        else if (gsalary >= 19250 && gsalary <= 19749.99)
        {
            sss = 2565;
        }
        else if (gsalary >= 19750 && gsalary <= 20249.99)
        {
            sss = 2630;
        }
        else
        {
            sss = 2695;
        }

        // Second Calculation
        deduction = ((gsalary * tax) + pagibig + sss);
        nsalary = gsalary - deduction;

        // Output
        System.out.print("\033\143"); // Clears the terminal/console
        System.out.println("+------------------------------+");
        System.out.println("+       Pay Slip Details       +");
        System.out.println("+------------------------------+");
        System.out.println();
        System.out.println("====== Employee Info ======");
        System.out.println("Name: " + lastname + ", " + firstname + " " + middlename);
        System.out.println("Address: " + address);
        System.out.println("Cellphone Number: " + cpno);
        System.out.println("Employee ID: " + id);
        System.out.println();
        System.out.println("====== Salary Details ======");
        System.out.println("Basic Salary: " + bsalary);
        System.out.println("Honorarium (Tip): " + honorarium);
        System.out.println("Allowance: " + allowance);
        System.out.println("GROSS SALARY: " + gsalary);
        System.out.println();
        System.out.println("====== Deductions ======");
        System.out.println("Tax: " + (gsalary * tax));
        System.out.println("Pagibig: " + pagibig);
        System.out.println("SSS: " + sss);
        System.out.println("Total Deduction: " + deduction);
        System.out.println();
        System.out.println("NET SALARY: " + nsalary);
        
    }
}