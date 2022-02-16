import java.util.Scanner;

public class CS1
{
    public static void main(String[] args)
    {
        String lastname, firstname, middlename; // Variables used for the name for better formatting
        String address, cpno, id; // Other info of the employee
        double bsalary, honorarium, allowance; // Needed variables for numerical input
        double deduction, nsalary, gsalary;
        double tax = 0.1, pagibig = 100, sss = 0.05;

        Scanner input = new Scanner(System.in);

        System.out.println("+----- Pay Slip System -----+");
        System.out.println();
        System.out.println("++ Employee Info ++");
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
        System.out.println("++ Salary Info ++");
        System.out.print("Basic Salary: ");
        bsalary = input.nextDouble();
        System.out.print("Honorarium (Tip): ");
        honorarium = input.nextDouble();
        System.out.print("Allowance: ");
        allowance = input.nextDouble();
        input.close();

        // Calculation
        gsalary = bsalary + honorarium + allowance;
        deduction = ((gsalary * tax) + pagibig + (bsalary * sss));
        nsalary = gsalary - deduction;

        // Output
        System.out.println();
        System.out.println("+----- Pay Slip Details -----+");
        System.out.println("++ Employee Info ++");
        System.out.println("Name: " + lastname + ", " + firstname + " " + middlename);
        System.out.println("Address: " + address);
        System.out.println("Cellphone Number: " + cpno);
        System.out.println("Employee ID: " + id);
        System.out.println();
        System.out.println("++ Salary Details ++");
        System.out.println("Basic Salary: " + bsalary);
        System.out.println("Honorarium (Tip): " + honorarium);
        System.out.println("Allowance: " + allowance);
        System.out.println("GROSS SALARY: " + gsalary);
        System.out.println();
        System.out.println("++ Deductions ++");
        System.out.println("Tax: " + (gsalary * tax));
        System.out.println("Pagibig: " + pagibig);
        System.out.println("SSS: " + (bsalary * sss));
        System.out.println("Total Deduction: " + deduction);
        System.out.println();
        System.out.println("NET SALARY: " + nsalary);
        
    }
}