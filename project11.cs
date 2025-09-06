using System;

class Program
{
    static void Main()
    {
        int num1, num2;

        string[] inputs = Console.ReadLine().Split(' ');
        num1 = int.Parse(inputs[0]);
        num2 = int.Parse(inputs[1]);

        Console.WriteLine(); 

        Console.WriteLine(num1);
        Console.WriteLine(num2);
    }
}
