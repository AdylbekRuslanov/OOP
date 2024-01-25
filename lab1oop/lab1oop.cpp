// lab1oop.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#1

//#include <iostream>
//using namespace std;
//
//
//double power(double n, int p);
//
//
//int main() {
//    setlocale(LC_ALL ,"rus");
//    double number;
//    int exp;
//
//    cout << "Введите число = ";
//    cin >> number;
//    cout << "Введите число больше > 2 = ";
//    cin >> exp;
//    
//    if (exp < 2) {
//        cout << "Число меньше < 2" << endl;
//        exp = 2;
//    }
//
//    double result = power(number, exp);
//    cout << "Результат = " << result;
//    return 0; 
//}
//double power(double n, int p) {
//    double result = 1;
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//    return result;
//}



//№2
//#include <iostream>
//using namespace std;
//
//
//double power(char n, int p);
//double power(short int n, int p);
//double power(long int n, int p);
//double power(float n, int p);
//
//
//int main() {
//    cout << "power('S', 2): " << power('S', 2) << endl; // with char 
//    cout << "power(100, 2): " << power(static_cast<short int>(100), 2) << endl; //short int
//    cout << "power(1000L, 2): " << power(static_cast <long int>(1000L), 2) << endl; //long int 
//    cout << "power(1.1f, 2): " << power(static_cast <float>(1.1f), 2) << endl; // float 
//
//    return 0;
//}
//
//double power(char n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; ++i) {
//        result *= static_cast<int>(n);
//    }
//    return result;
//}
//
//double power(short int n, int p) {
//    double result = 1;
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//    return result;
//}
//
//double power(long int n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; ++i) {
//        result *= static_cast<double>(n);
//    }
//    return result;
//}
//
//double power(float n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; ++i) {
//        result *= static_cast<double>(n);
//    }
//    return result;
//}

//3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    string lastName;
    int age;
    int specialty;
    double salary;
};

// Функция для ввода информации по заводам и подсчета слесарей и токарей
void processFactories(vector<vector<Employee>>& factories, int& totalLocksmiths, int& totalTurners) {
    int numFactories;

    cout << "Введите количество заводов: ";
    cin >> numFactories;

    totalLocksmiths = 0;
    totalTurners = 0;

    for (int i = 0; i < numFactories; ++i) {
        int numEmployees;

        cout << "Введите количество работников " << i + 1 << ": ";
        cin >> numEmployees;

        vector<Employee> employees;

        // Ввод информации о каждом работнике
        for (int j = 0; j < numEmployees; ++j) {
            Employee employee;

            cout << "Фамилия работника " << j + 1 << ": ";
            cin >> employee.lastName;

            cout << "Возраст работника " << j + 1 << ": ";
            cin >> employee.age;

            cout << "Специальность работника Слесарь = 1, Токарь = 2; j = " << j + 1 << ": ";
            cin >> employee.specialty;

            cout << "Средний оклад работника " << j + 1 << ": ";
            cin >> employee.salary;

            if (employee.specialty == 1) {
                totalLocksmiths++;
            }
            else if (employee.specialty == 2) {
                totalTurners++;
            }

            // Добавление работника в вектор
            employees.push_back(employee);
        }

        factories.push_back(employees);
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    vector<vector<Employee>> factories;
  
    int totalLocksmiths, totalTurners;

    
    processFactories(factories, totalLocksmiths, totalTurners);

    cout << "Количество слесарев: " << totalLocksmiths << endl;
    cout << "Количество токарев: " << totalTurners << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
