using System;

class Program
{
    const double PI = 3.14;

    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8; // Для корректного вывода русских символов
        Console.WriteLine("Число пи равно " + PI);
    }
}
