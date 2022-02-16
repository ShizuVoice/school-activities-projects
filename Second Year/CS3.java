import java.util.Scanner;

public class CS3
{
    public static void main(String[] args)
    {
        System.out.print("\033\143"); // Clears the terminal/console
        String lastname, firstname, middlename; // Variables used for the name for better formatting
        String id, dtext = " ", ptext = " "; // Other info of the employee
        int dept = 0, pos = 0;
        double bsalary = 0, honorarium = 0, allowance = 0;
        double deduction = 0, nsalary = 0, gsalary = 0;
        double tax = 0.1, pagibig = 0, sss = 0;

        Scanner input = new Scanner(System.in);

        System.out.println("+--------------------------------------------+");
        System.out.println("+      Pay Slip System v3 by SilentVOEZ      +");
        System.out.println("+--------------------------------------------+");
        System.out.println();
        System.out.println("====== Employee Info ======");
        System.out.print("Last Name: ");
        lastname = input.nextLine();
        System.out.print("First Name: ");
        firstname = input.nextLine();
        System.out.print("Middle Name (leave blank if none): ");
        middlename = input.nextLine();
        System.out.print("Employee ID: ");
        id = input.nextLine();
        System.out.println();
        System.out.println("====== Department and Position ======");
        System.out.println();
        System.out.println("[1] Editorial Department");
        System.out.println("[2] Maintenance Department");
        System.out.print("Your department: ");
        dept = input.nextInt();

        // Display the positions of each department
        if (dept == 1)
        {
            System.out.println();
            System.out.println("====== Editorial Department ======");
            System.out.println("[3] Senior Video Editor");
            System.out.println("[4] Associate Video Editor");
            System.out.println("[5] Assistant Video Editor");
            System.out.println("[6] Sound Designer");
            System.out.println("[7] Assistant Sound Designer");
        }
        else if (dept == 2)
        {
            System.out.println();
            System.out.println("====== Maintenance Department ======");
            System.out.println("[8] Sound Technician");
            System.out.println("[9] Camera Technician");
            System.out.println("[10] Lighting Technician");
            System.out.println("[11] Computer Technician");
        }
        else
        {
            System.out.println("Invalid code, please try again.");
            input.nextLine();
            System.exit(0);
        }

        System.out.print("Your position: ");
        pos = input.nextInt();
        input.close();

        // Variable value gets assigned here
        if (dept == 1 && pos == 3) // Editorial - Senior Video Editor
        {
            dtext = "Editorial Department";
            ptext = "Senior Video Editor";
            bsalary = 14000;
            honorarium = 200;
            allowance = 2500;
        }
        else if (dept == 1 && pos == 4) // Editorial - Associate Video Editor
        {
            dtext = "Editorial Department";
            ptext = "Associate Video Editor";
            bsalary = 12745;
            honorarium = 300;
            allowance = 2700;
        }
        else if (dept == 1 && pos == 5) // Editorial - Assistant Video Editor
        {
            dtext = "Editorial Department";
            ptext = "Assistant Video Editor";
            bsalary = 11250;
            honorarium = 400;
            allowance = 2900;
        }
        else if (dept == 1 && pos == 6) // Editorial - Sound Designer
        {
            dtext = "Editorial Department";
            ptext = "Sound Designer";
            bsalary = 12200;
            honorarium = 200;
            allowance = 2500;
        }
        else if (dept == 1 && pos == 7) // Editorial - Assistant Sound Designer
        {
            dtext = "Editorial Department";
            ptext = "Assistant Sound Designer";
            bsalary = 11000;
            honorarium = 400;
            allowance = 2700;
        }
        else if (dept == 2 && pos == 8) // Maintenance - Sound Technician
        {
            dtext = "Maintenance Department";
            ptext = "Sound Technician";
            bsalary = 12100;
            honorarium = 500;
            allowance = 2500;
        }
        else if (dept == 2 && pos == 9) // Maintenance - Camera Technician
        {
            dtext = "Maintenance Department";
            ptext = "Camera Technician";
            bsalary = 13750;
            honorarium = 500;
            allowance = 2500;
        }
        else if (dept == 2 && pos == 10) // Maintenance - Lighting Technician
        {
            dtext = "Maintenance Department";
            ptext = "Lighting Technician";
            bsalary = 12500;
            honorarium = 500;
            allowance = 2500;
        }
        else if (dept == 2 && pos == 11) // Maintenance - Computer Technician
        {
            dtext = "Maintenance Department";
            ptext = "Computer Technician";
            bsalary = 13800;
            honorarium = 500;
            allowance = 2500;
        }

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

        // Pag-Ibig Calculation
        if (gsalary < 999)
        {
            pagibig = 0;
        }
        else if (gsalary >= 1000 && gsalary <= 1500)
        {
            pagibig = gsalary * 0.01;
        }
        else
        {
            pagibig = gsalary * 0.02;
        }

        // Deduction and Net Salary Calculation
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
        System.out.println("Employee ID: " + id);
        System.out.println("Department: " + dtext);
        System.out.println("Position: " + ptext);
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