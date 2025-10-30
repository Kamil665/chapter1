import java.util.Scanner;

public class MyClass {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Введите температуру в градусах Цельсия: ");
        double celcius = scanner.nextDouble();
        
        double farenghait = celcius * 1.8 + 32;
        
        double kelvin = celcius + 273.15;
        
        System.out.println("\nРезультаты перевода:");
        System.out.printf("Цельсий: %.2f °C\n", celcius);
        System.out.printf("Фаренгейт: %.2f °F\n", farenghait);
        System.out.printf("Кельвин: %.2f °K\n", kelvin);
        
        scanner.close();
    }
}
