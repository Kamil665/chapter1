using System;

class Program
{
    static void Main()
    {
        // Установка кодировки для корректного вывода русских символов в консоли
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.InputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введите число: ");
        string input = Console.ReadLine();

        if (int.TryParse(input, out int num))
        {
            Console.WriteLine($"{num} - вот какое число Вы ввели");
        }
        else
        {
            Console.WriteLine("Ошибка: введено не число.");
        }
    }
}
