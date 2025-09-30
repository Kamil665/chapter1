#include <iostream>
#include <cmath>
#include <stdexcept>
#include <limits>
using namespace std;

struct CalculationResult {
  double value;
  bool is_valid;
  string error_message;
};

class InputValidator {
private:
   static constexpr double EPSILON = 1e-12;
public:
   static bool isZero(double x) {
    return fabs(x) < EPSILON;
   } 
   static bool isNegative(double x) {
    return x < -EPSILON;
   }
};

class ComplexFunctionCalculator {
private:
   double x, y;

   double calculateInnerSqrt() const {
    double inner_expression = x * x + 10.0;
    if (InputValidator::isNegative(inner_expression)) {
      throw domain_error("Выражение x^2 + 10 отрицательное");
    }
    return sqrt(inner_expression);
   }

   double calculateDenominatorPart() const {
    double inner_sqrt = calculateInnerSqrt();
    if (InputValidator::isZero(inner_sqrt)) {
      throw domain_error("Внутрений корень равен нулю");
    }
    return 1.0 / inner_sqrt;
   }

   double calculateMainDenominator() const {
    double denominator_part = calculateDenominatorPart();
    double main_denominator_expr = y + denominator_part;

    if (InputValidator::isNegative(main_denominator_expr)) {
      throw domain_error("Выражение отрицательное");
    }
    if (InputValidator::isZero(main_denominator_expr)) {
      throw domain_error("Выражение равно нулю");
    }
    return main_denominator_expr;
   }

   double calculateNumeratorPart() const {
    if (InputValidator::isZero(x)) {
      throw domain_error("x равен нулю - деление на ноль");
    }
    return (2.0 + y) / (x * x);
   }

   double calculateMainNumerator() const {
    double numerator_part = calculateNumeratorPart();
    return x + numerator_part;
   }

public:
   ComplexFunctionCalculator(double x_val, double y_val) : x(x_val), y(y_val) {}

   CalculationResult calculateZ() {
    CalculationResult result;
    result.is_valid = false;

    try {
      double main_numerator = calculateMainNumerator();
      double main_denominator = calculateMainDenominator();

      if (InputValidator::isZero(main_denominator)) {
        throw domain_error("Главный знаменатель равен нулю");
      }

      result.value = main_numerator / main_denominator;
      result.is_valid = true;
      result.error_message = "";
    }
    catch (const exception& e) {
      result.error_message = e.what();
    }
    return result;
   }

   CalculationResult calculateQ() {
    CalculationResult result;

    if (isnan(x) || isinf(x)) {
      result.is_valid = false;
      result.error_message = "x имеет недопустимое значение для sin(x)";
      return result;
    }

    double sin_component;
    try {
      sin_component = 2.8 * sin(x);
      if (isnan(sin_component) || isinf(sin_component)) {
        throw runtime_error("Переполнение при вычислении sin(x)");
      }
    }
    catch (...) {
        result.is_valid = false;
        result.error_message = "Ошибка при вычислении sin(x)";
        return result;
    }

    double abs_component;
    try {
        abs_component = abs(y);
        if (isnan(abs_component) || isinf(abs_component)) {
            throw runtime_error("Переполнение при вычислении |y|");
        }
     }
    catch (...) {
        result.is_valid = false;
        result.error_message = "Ошибка при вычислении |y|";
        return result;
     }

    result.value = sin_component + abs_component;

    if (isnan(result.value) || isinf(result.value)) {
        result.is_valid = false;
        result.error_message = "Финальный результат имеет недопустимое значение";
    } else {
        result.is_valid = true;
        result.error_message = "";
    }
    return result;
  }
};

bool safeInput(double& value, const string& prompt) {
    cout << prompt;
    cin >> value;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "RU");
    
    cout << "=== СЛОЖНАЯ ПРОГРАММА ВЫЧИСЛЕНИЯ ФУНКЦИЙ ===" << endl;
    cout << "Функция z = (x + (2 + y)/x^2) / (y + 1/sqrt(x^2 + 10))" << endl;
    cout << "Функция q = 2.8 * sin(x) + |y|" << endl;

    double x, y;

    cout << "\n";

    if (!safeInput(x, "Введите значение x: ")) {
        cout << "\n";
        cout << "Ошибка: введено неккоректное значение x!" << endl;
        return 1;
    }
    if (!safeInput(y, "Введите значение y: ")) {
        cout << "\n";
        cout << "Ошибка: введено неккоректное значение y!" << endl;
        return 1;
    }

    cout << "\n=== ВЫЧИСЛЕНИЯ ===" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "\n";

    ComplexFunctionCalculator calculator(x, y);

    CalculationResult z_result = calculator.calculateZ();
    cout << "Результат вычисления z:" << endl;
    if (z_result.is_valid) {
        cout << "z = " << z_result.value << endl;

        if (isnan(z_result.value)) {
            cout << "Предупреждение: z = NaN" << endl;
        } else if (isinf(z_result.value)) {
            cout << "Предупреждение: z = infinity" << endl;
        }
    } else {
        cout << "Ошибка: " << z_result.error_message << endl;
    }

    cout << endl;

    CalculationResult q_result = calculator.calculateQ();
    cout << "Результат вычисления q:" << endl;
    if (q_result.is_valid) {
        cout << "q = " << q_result.value << endl;

        if (isnan(q_result.value)) {
            cout << "Предупреждение: q = NaN" << endl;
        } else if (isinf(q_result.value)) {
            cout << "Предупреждение: q = infinity" << endl;
        }
    } else {
        cout << "Ошибка: " << q_result.error_message << endl;
    }

    cout << "\n=== АНАЛИЗ ЗАВЕРШЁН ===" << endl;

    return 0;
}
