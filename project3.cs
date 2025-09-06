using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8; // Для корректного вывода русских символов
        Console.InputEncoding = System.Text.Encoding.UTF8;  // Для корректного ввода (если нужно)

        Console.Write("Введите число: ");
        string input = Console.ReadLine();

        if (int.TryParse(input, out int num))
        {
            Console.WriteLine("Вы ввели число " + num);
        }
        else
        {
            Console.WriteLine("Ошибка: введено не число.");
        }
    }
}

