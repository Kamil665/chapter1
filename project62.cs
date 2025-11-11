using System;

class Program
{
    public void A(double a)
    {
        double a2 = a * a;          
        double a3 = a2 * a;         
        double a5 = a2 * a3;    
        double a10 = a5 * a5;       

        Console.WriteLine("а) a^3 и a^10 за четыре операции:");
        Console.WriteLine($"a^3 = {a3}");
        Console.WriteLine($"a^10 = {a10}");
    }

    public void B(double a)
    {
        double a2 = a * a;          
        double a4 = a2 * a2;    
        double a5 = a4 * a;         
        double a10 = a5 * a5;       
        double a20 = a10 * a10;     

        Console.WriteLine("б) a^4 и a^20 за пять операций:");
        Console.WriteLine($"a^4 = {a4}");
        Console.WriteLine($"a^20 = {a20}");
    }

    public void C(double a)
    {
        double a2 = a * a;          
        double a3 = a2 * a;     
        double a4 = a3 * a;         
        double a5 = a4 * a;         
        double a13 = a5 * a4 * a4;  

        Console.WriteLine("в) a^5 и a^13 за пять операций:");
        Console.WriteLine($"a^5 = {a5}");
        Console.WriteLine($"a^13 = {a13}");
    }

    public void D(double a)
    {
        double a2 = a * a;          
        double a3 = a2 * a;         
        double a5 = a3 * a2;        
        double a8 = a5 * a3;    
        double a19 = a8 * a8 * a3;  

        Console.WriteLine("г) a^5 и a^19 за пять операций:");
        Console.WriteLine($"a^5 = {a5}");
        Console.WriteLine($"a^19 = {a19}");
    }

    public void E(double a)
    {
        double a2 = a * a;          
        double a4 = a2 * a2;        
        double a5 = a4 * a;         
        double a8 = a4 * a4;        
        double a16 = a8 * a8;       
        double a17 = a16 * a;       

        Console.WriteLine("д) a^2, a^5 и a^17 за шесть операций:");
        Console.WriteLine($"a^2 = {a2}");
        Console.WriteLine($"a^5 = {a5}");
        Console.WriteLine($"a^17 = {a17}");
    }

    public void F(double a)
    {
        double a2 = a * a;          
        double a4 = a2 * a2;        
        double a8 = a4 * a4;        
        double a12 = a8 * a4;       
        double a28 = a12 * a12 * a * a; 

        Console.WriteLine("е) a^4, a^12 и a^28 за шесть операций:");
        Console.WriteLine($"a^4 = {a4}");
        Console.WriteLine($"a^12 = {a12}");
        Console.WriteLine($"a^28 = {a28}");
    }

    static void Main()
    {
        Console.Write("Введите значение a: ");
        double a = Convert.ToDouble(Console.ReadLine());
        
         Console.WriteLine();
         Console.WriteLine();
        
        Program p = new Program();
        p.A(a);
        Console.WriteLine();
        p.B(a);
        Console.WriteLine();
        p.C(a);
        Console.WriteLine();
        p.D(a);
        Console.WriteLine();
        p.E(a);
        Console.WriteLine();
        p.F(a);
    }
}
