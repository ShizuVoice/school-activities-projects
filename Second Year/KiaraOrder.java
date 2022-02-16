// Case Study for Food Delivery Monitoring System
// SilentVOEZ - BSIT 2A

import java.io.*;
import java.util.*;


public class KiaraOrder
{
    private int orderno;
    private String name;
    private String address;
    private String items;
    private double amount;
    private double tip;
    private double change;
    private String delivery;
    private String cnumber;

    public KiaraOrder(int orderno, String name, String address, String items, String delivery, String cnumber, double amount, double tip, double change)
    {
        this.orderno = orderno;
        this.name = name;
        this.address = address;
        this.items = items;
        this.amount = amount;
        this.tip = tip;
        this.change = change;
        this.delivery = delivery;
        this.cnumber = cnumber;
    }

    public String toString()
    {
        return "Order No: " + orderno + "\n\tName: " + name + "\n\tAddress: " + address + "\n\tItems: " + items + "\n\tDeliveryman: " + delivery + "\n\tDeliveryman Contant #: " + cnumber + "\n\tTotal Amount (with delivery): " + amount + "\n\tTip: " + tip + "\n\tChange: " + change;
    }

    public static void main(String[] args) throws IOException
    {
        ArrayList<KiaraOrder> queuelist = new ArrayList<KiaraOrder>();
        Scanner input = new Scanner(System.in);

        char[] exitPass = new char[]{'k','i','k','k','e','r','i','k','i'};
        char[] bufferPass = null;

        int i = 0;
        int cmenu = 3;
        int orderno = 0;
        int choice = 0;
        int quantity = 0;
        int size = 0;
        int code = 0;
        String delivery = "";
        String cnumber = "";
        double total = 0;
        double tip = 0;
        double change = 0;
        double price = 0;
        String items = "";

        do
        {
            clear();
            border();
            menu();
            try
            {
                System.out.print("Choose a number: ");
                cmenu = Integer.parseInt(input.nextLine());
            }
            catch(NumberFormatException e)
            {
                continue;
            }

            if(cmenu==1)
            {
                do
                {
                    clear();
                    border();
                    menu1();
                    foodlist();
                    if(items.isEmpty())
                    {
                        ;
                    }
                    else
                    {
                        System.out.println("Item added to list");
                        System.out.println("Items: " + items);
                        System.out.println();
                    }
                    try
                    {
                        System.out.print("Select an item: ");
                        choice = Integer.parseInt(input.nextLine());
                    }
                    catch(NumberFormatException e)
                    {
                        System.out.println("Invalid action!");
                        continue;
                    }

                    if(choice == 0)
                    {
                        ;
                    }
                    else
                    {
                        try
                        {
                            System.out.print("Enter quantity: ");
                            quantity = Integer.parseInt(input.nextLine());
                        }
                        catch(NumberFormatException e)
                        {
                            System.out.println("Invalid action!");
                            continue;
                        }
                    }

                    if(choice == 1)
                    {
                        price = 76;
                        items = items + quantity + " x Fried Chicken, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 2)
                    {
                        price = 64;
                        items = items + quantity + " x Chicken Drumstick, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 3)
                    {
                        price = 64;
                        items = items + quantity + " x Chicken Nuggets, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 4)
                    {
                        price = 63;
                        items = items + quantity + " x Hamburger, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 5)
                    {
                        price = 84;
                        items = items + quantity + " x Combo Hamburger, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 6)
                    {
                        price = 125;
                        items = items + quantity + " x Special Hamburger, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 7)
                    {
                        price = 77;
                        items = items + quantity + " x Chicken Burger, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 8)
                    {
                        price = 78;
                        items = items + quantity + " x Chicken Fillet, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 9)
                    {
                        price = 450;
                        items = items + quantity + " x Kiara's Drumstick Bucket, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 10)
                    {
                        price = 57;
                        items = items + quantity + " x Curly Fries, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 11)
                    {
                        price = 62;
                        items = items + quantity + " x Cheese Curly Fries, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 12)
                    {
                        price = 54;
                        items = items + quantity + " x Spaghetti, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 13)
                    {
                        price = 54;
                        items = items + quantity + " x Carbonara, ";
                        total = total + (price * quantity);
                    }
                    else if(choice == 14)
                    {
                        System.out.print("Select size (0 for medium, 1 for large): ");
                        do
                        {
                            try
                            {
                                size = Integer.parseInt(input.nextLine());
                                if(size == 0)
                                {
                                    price = 35;
                                    items = items + quantity + " x Coca Cola (M), ";
                                    total = total + (price * quantity);
                                }
                                else if(size == 1)
                                {
                                    price = 45;
                                    items = items + quantity + " x Coca Cola (L), ";
                                    total = total + (price * quantity);
                                }
                                else
                                {
                                    System.out.println("Size does not exist!");
                                }
                            }
                            catch(NumberFormatException e)
                            {
                                System.out.println("Invalid option!");
                            }
                        }
                        while(size>=2);
                    }
                    else if(choice == 15)
                    {
                        System.out.print("Select size (0 for medium, 1 for large): ");
                        do
                        {
                            try
                            {
                                size = Integer.parseInt(input.nextLine());
                                if(size == 0)
                                {
                                    price = 35;
                                    items = items + quantity + " x Pepsi (M), ";
                                    total = total + (price * quantity);
                                }
                                else if(size == 1)
                                {
                                    price = 45;
                                    items = items + quantity + " x Pepsi (L), ";
                                    total = total + (price * quantity);
                                }
                                else
                                {
                                    System.out.println("Size does not exist!");
                                }
                            }
                            catch(NumberFormatException e)
                            {
                                System.out.println("Invalid option!");
                            }
                        }
                        while(size>=2);
                    }
                    else if(choice == 16)
                    {
                        System.out.print("Select size (0 for medium, 1 for large): ");
                        do
                        {
                            try
                            {
                                size = Integer.parseInt(input.nextLine());
                                if(size == 0)
                                {
                                    price = 35;
                                    items = items + quantity + " x Sprite (M), ";
                                    total = total + (price * quantity);
                                }
                                else if(size == 1)
                                {
                                    price = 45;
                                    items = items + quantity + " x Sprite (L), ";
                                    total = total + (price * quantity);
                                }
                                else
                                {
                                    System.out.println("Size does not exist!");
                                }
                            }
                            catch(NumberFormatException e)
                            {
                                System.out.println("Invalid option!");
                            }
                        }
                        while(size>=2);
                    }
                    else if(choice == 17)
                    {
                        System.out.print("Select size (0 for medium, 1 for large): ");
                        do
                        {
                            try
                            {
                                size = Integer.parseInt(input.nextLine());
                                if(size == 0)
                                {
                                    price = 35;
                                    items = items + quantity + " x Iced Tea (M), ";
                                    total = total + (price * quantity);
                                }
                                else if(size == 1)
                                {
                                    price = 45;
                                    items = items + quantity + " x Iced Tea (L), ";
                                    total = total + (price * quantity);
                                }
                                else
                                {
                                    System.out.println("Size does not exist!");
                                }
                            }
                            catch(NumberFormatException e)
                            {
                                System.out.println("Invalid option!");
                            }
                        }
                        while(size>=2);
                    }
                    else if(choice == 18)
                    {
                        System.out.print("Select size (0 for medium, 1 for large): ");
                        do
                        {
                            try
                            {
                                size = Integer.parseInt(input.nextLine());
                                if(size == 0)
                                {
                                    price = 35;
                                    items = items + quantity + " x Water (M), ";
                                    total = total + (price * quantity);
                                }
                                else if(size == 1)
                                {
                                    price = 45;
                                    items = items + quantity + " x Water (L), ";
                                    total = total + (price * quantity);
                                }
                                else
                                {
                                    ;
                                }
                            }
                            catch(NumberFormatException e)
                            {
                                ;
                            }
                        }
                        while(size>=2);
                    }
                    else if(choice == 0)
                    {
                        ;
                    }
                }
                while(choice > 0);
                do
                {
                    clear();
                    border();
                    menu1();
                    deliveryman();
                    System.out.println();
                    System.out.print("Choose a deliveryman code: ");
                    try
                    {
                        code = Integer.parseInt(input.nextLine());
                        if(code == 1)
                        {
                            delivery = "[1] KFP-Kiara";
                            cnumber = "0906 123 4567";
                        }
                        else if(code == 2)
                        {
                            delivery = "[2] KFP-Calli";
                            cnumber = "0906 987 6543";
                        }
                        else if(code == 3)
                        {
                            delivery = "[3] KFP-Gura";
                            cnumber = "0906 111 2222";
                        }
                        else if(code == 4)
                        {
                            delivery = "[4] KFP-Ina";
                            cnumber = "0906 914 0000";
                        }
                        else if(code == 5)
                        {
                            delivery = "[5] KFP-Ame";
                            cnumber = "0906 727 1337";
                        }
                        else
                        {
                            ;
                        }
                    }
                    catch(NumberFormatException e)
                    {
                        ;
                    }
                }
                while(code>=6 || code==0);
                clear();
                border();
                menu1();
                System.out.print("Name: ");
                String name = input.nextLine();

                System.out.print("Address: ");
                String address = input.nextLine();

                System.out.print("Items: " + items);
                System.out.println();

                System.out.println("Deliveryman: " + delivery);
                System.out.println("Deliveryman Contact #: " + cnumber);

                total = total + 45;
                System.out.print("Total Amount (with delivery): " + total);
                System.out.println();

                for(i = 3; i > 0; --i)
                {
                    try
                    {
                        System.out.print("Customer's tip: ");
                        tip = Integer.parseInt(input.nextLine());
                        if(tip < total)
                        {
                            System.out.println("Tip is not enough for payment.");
                        }
                        else
                        {
                            break;
                        }
                    }
                    catch(Exception e)
                    {
                        continue;
                    }
                }

                if(i > 0)
                {
                    change = tip - total;
                    System.out.print("Change: " + change);

                    ++orderno;

                    KiaraOrder list = new KiaraOrder(orderno, name, address, items, delivery, cnumber, total, tip, change);

                    queuelist.add(list);

                    System.out.println();
                    System.out.println();
                    System.out.println("Order added successfully!");
                }
                else
                {
                    System.out.println();
                    System.out.println();
                    System.out.println("Too many attempts. Order canceled.");
                }

                try
                {
                    Thread.sleep(3000);
                    name = "";
                    address = "";
                    items = "";
                    total = 0;
                    tip = 0;
                    change = 0;
                    choice = 0;
                    quantity = 0;
                    size = 0;
                    price = 0;
                    // This is to "initialize" the data on each variable.
                }
                catch(Exception e)
                {
                    
                }
            }
            else if(cmenu==2)
            {
                clear();
                border();
                menu2();
                FileWriter fw = new FileWriter("output.dat");
                PrintWriter pout = new PrintWriter(fw);
                for(KiaraOrder list: queuelist)
                {
                    System.out.println(list);
                    pout.println(list);
                }
                pout.flush();
                System.out.println();
                System.out.println("Output data saved to a .dat file");
                System.out.println("Press Enter to go back to menu...");
                input.nextLine();
            }
            else if(cmenu==3)
            {
                Console syscon = System.console();
                System.out.println();
                System.out.println("Before proceeding to exit, plase print out the order");
                System.out.println("list by going to menu 2. Press enter to go back to menu.");
                System.out.println();
                System.out.print("Enter the exit password: ");
                bufferPass = syscon.readPassword();

                if(Arrays.equals(bufferPass, exitPass))
                {
                    cmenu = 4;
                }
                else
                {
                    System.out.println("Wrong password. Software will not exit.");
                    System.out.println("Press Enter to continue...");
                    input.nextLine();
                }
                
            }
            else
            {
                cmenu = 3;
            }
        }
        while(cmenu<4);
        clear();
        System.out.println("Goodbye!");
        input.close();
    }

    public static void menu()
    {
        System.out.println("-------------");
        System.out.println("| Main Menu |");
        System.out.println("-------------");
        System.out.println();
        System.out.println("[1] Add order delivery to queue");
        System.out.println("[2] List all order/Print order list to file");
        System.out.println("[3] Exit");
        System.out.println();
    }

    public static void border()
    {
        System.out.println("--------------------------------------------------");
        System.out.println("|    Kiara Fried Phoenix Fast Food Restaurant    |");
        System.out.println("|        Food Delivery Monitoring System         |");
        System.out.println("--------------------------------------------------");
        System.out.println();
    }

    public static void menu1()
    {
        System.out.println("-------------");
        System.out.println("| Add Order |");
        System.out.println("-------------");
        System.out.println();
    }

    public static void menu2()
    {
        System.out.println("--------------");
        System.out.println("| Order List |");
        System.out.println("--------------");
        System.out.println();
    }

    public static void clear()
    {
        try
        {
            String operatingSystem = System.getProperty("os.name");

            if(operatingSystem.contains("Windows"))
            {
                ProcessBuilder pb = new ProcessBuilder("cmd", "/c", "cls");
                Process startProcess = pb.inheritIO().start();
                startProcess.waitFor();
            }
            else
            {
                ProcessBuilder pb = new ProcessBuilder("clear");
                Process startProcess = pb.inheritIO().start();
                startProcess.waitFor();
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }

    public static void foodlist()
    {
        System.out.println("[1] Fried Chicken - P76               [10] Curly Fries - P57");
        System.out.println("[2] Chicken Drumstick - P64           [11] Cheese Curly Fries - P62");
        System.out.println("[3] Chicken Nuggets - P64             [12] Spaghetti - P54");
        System.out.println("[4] Hamburger - P63                   [13] Carbonara - P54");
        System.out.println("[5] Combo Hamburger - P84             [14] Coca Cola - P35.medium / P45.large");
        System.out.println("[6] Special Hamburger - P125          [15] Pepsi - P35.medium / P45.large");
        System.out.println("[7] Chicken Burger - P77              [16] Sprite - P35.medium / P45.large");
        System.out.println("[8] Chicken Fillet - P78              [17] Iced Tea - P35.medium / P45.large");
        System.out.println("[9] Kiara's Drumstick Bucket - P450   [18] Water - P15.medium / P25.large");
        System.out.println();
        System.out.println("[0] Continue to next step");
        System.out.println();
    }

    public static void deliveryman()
    {
        System.out.println("[1] KFP-Kiara");
        System.out.println("[2] KFP-Calli");
        System.out.println("[3] KFP-Gura");
        System.out.println("[4] KFP-Ina");
        System.out.println("[5] KFP-Amelia");
    }
}