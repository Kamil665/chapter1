using System;

class Program {
    static void Main() {       
        int Farengheit = 450;
        Console.WriteLine($"Градусов по Фаренгейту: {Farengheit}");
        
        double Celsium = (Farengheit - 32) / 1.8;
        
        Console.WriteLine($"Градусов по Цельсию: {Celsium}");
    }
}
