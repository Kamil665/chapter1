using System;

class Program
{
    static void Main()
    {
        int A, B, C, D;

        string[] inputs = Console.ReadLine().Split(' ');
        A = int.Parse(inputs[0]);
        B = int.Parse(inputs[1]);
        C = int.Parse(inputs[2]);
        D = int.Parse(inputs[3]);

        Console.WriteLine($"{A} {B} {C} {D}");
    }
}
