using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8; 

        Console.WriteLine("Введите три целых числа через пробел:");

        string input = Console.ReadLine();
        if (input != null)
        {
            string[] parts = input.Split(new[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);

            if (parts.Length >= 3 &&
                int.TryParse(parts[0], out int A) &&
                int.TryParse(parts[1], out int B) &&
                int.TryParse(parts[2], out int C))
            {
                Console.WriteLine($"{A}  {B}  {C}");
            }
            else
            {
                Console.WriteLine("Ошибка: введите три целых числа.");
            }
        }
        else
        {
            Console.WriteLine("Ошибка ввода.");
        }
    }
}
