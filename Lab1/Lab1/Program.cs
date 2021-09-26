using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace Lab1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\t\t\t\t\tЛабораторная работа № 1");
            string pick;
            do
            {
                Console.WriteLine("\t\t\t\t\t\tМеню");
                Console.WriteLine("\t\t1. Задача №1 (1-3)");
                Console.WriteLine("\t\t2. Задача №1 (4)");
                Console.WriteLine("\t\t3. Задача №2");
                Console.WriteLine("\t\t4. Задача №3");
                Console.WriteLine("\t\t5. Выход");
                Console.WriteLine("Для выбора задачи введите её номер и нажмите 'Enter'");
                Console.Write("Введите пункт меню: ");
                pick = Console.ReadLine();
                switch (pick)
                {
                    case "1": Task1(); break;
                    case "2": Task2(); break;
                    case "3": Task3(); break;
                    case "4": Task4(); break;
                    case "5": break;
                    default:
                        {
                            Console.Clear();
                            Console.WriteLine("\n\n\n\n\n\n\t\t\t\t\tОшибка! Введено некорректное значение.");
                            Thread.Sleep(1111);
                            Console.Clear();
                        }; break;
                }
            } while (pick != "5");

        }
        static int Input()
        {
            string temp;
            bool ok;
            int a;
            do
            {
                temp = Console.ReadLine();
                ok = Int32.TryParse(temp, out a);
                if (!ok)
                {
                    Console.WriteLine("Ошибка. Повторите ввод переменной:");
                    ok = false;
                }
            } while (!ok);
            return a;
        }
        static float Input_Float()
        {
            string temp;
            bool ok;
            float a;
            do
            {
                temp = Console.ReadLine();
                ok = float.TryParse(temp, out a);
                if (!ok)
                {
                    Console.WriteLine("Ошибка. Повторите ввод переменной:");
                    ok = false;
                }
            } while (!ok);
            return a;
        }
        static void Task1()
        {
            do
            {
                Console.Clear();
                Console.WriteLine("1)m-++n");
                int m;
                int n;
                Console.WriteLine("Введите число m:");
                m = Input();
                Console.WriteLine("Введите число n:");
                n = Input();
                int result = m - ++n;
                Console.WriteLine("Ответ: " + result);
                Console.WriteLine("2)m++>--n");
                Console.WriteLine("Введите число m:");
                m = Input();
                Console.WriteLine("Введите число n:");
                n = Input();
                bool bool_Result = m++ < --n;
                Console.WriteLine("Ответ: " + bool_Result);
                Console.WriteLine("3)m--<++n");
                Console.WriteLine("Введите число m:");
                m = Input();
                Console.WriteLine("Введите число n:");
                n = Input();
                bool_Result = n-- > ++m;
                Console.WriteLine("Ответ: " + bool_Result);
                Console.WriteLine("\n\n\n\t\t\t\t\tНажмите Escape для выхода в меню.\n\t\t\t\t\t Любую клавишу, чтобы перезапусить.");
            } while (Console.ReadKey().Key != ConsoleKey.Escape);
            Console.Clear();
        }
        static void Task2()
        {
            do
            {
                Console.Clear();
                Console.WriteLine("4)25x^5-sqrt(x^2+x)");
                float x;
                float float_Result;
                Console.WriteLine("Введите число x:");
                x = Input_Float();
                if (x < 0 && x > -1)
                {
                    Console.WriteLine("Выражение не может быть решено с заданным значением X. Квадратный корень из отрицательного числа не существует.");
                }
                else
                {
                    float_Result = (float)((25f * Math.Pow(x, 5)) - Math.Sqrt((x * x) + x));
                    Console.WriteLine("Ответ: " + float_Result);
                }
                Console.WriteLine("\n\n\n\t\t\t\t\tНажмите Escape для выхода в меню.\n\t\t\t\t\t Любую клавишу, чтобы перезапусить.");
            } while (Console.ReadKey().Key != ConsoleKey.Escape);
            Console.Clear();
        }



        static void Task3()
        {
            do
            {
                Console.Clear();
                Console.WriteLine("Задача 2: Принадлежность точки закрашенной области.");
                float x, y;
                bool Result_Radius;
                Console.WriteLine("Введите значение X:");
                x = Input_Float();
                Console.WriteLine("Введите значение Y:");
                y = Input_Float();
                Result_Radius = (x * x + y * y <= 1) && (y <= 0);
                Console.WriteLine(Result_Radius);
                Console.WriteLine("\n\n\n\t\t\t\t\tНажмите Escape для выхода в меню.\n\t\t\t\t\t Любую клавишу, чтобы перезапусить.");
            } while (Console.ReadKey().Key != ConsoleKey.Escape);
            Console.Clear();
        }
        static void Task4()
        {
            do
            {
                Console.Clear();
                Console.WriteLine("Задача 3: ((a-b)^3-(a^3+3*a*b^2))/(-3*a^2*b-b^3)");
                float float_Result,float1,float2,float3,float4;
                double double_Result, double1, double2, double3, double4;
                float a = 100, b = 0.001F;
                double a_d = 100, b_d = 0.001;

                float1 = (float)Math.Pow((float)(a - b), 3);
                float2 = (float)((float)Math.Pow(a, 3) + (float)(3 * a * (float)Math.Pow(b, 2)));
                float3 = (float)((float)(-3 * (float)Math.Pow(a, 2) * b) - (float)Math.Pow(b, 3));
                float4 = (float)(float1 - float2);
                float_Result = (float)(float4 / float3);


                double1 = Math.Pow(a_d - b_d, 3);
                double2 = Math.Pow(a_d, 3) + (3 * a_d * Math.Pow(b_d, 2));
                double3 = (-3 * Math.Pow(a_d, 2) * b_d) - Math.Pow(b_d, 3);
                double4 = (double1 - double2);
                double_Result = (double4 / double3);
                Console.WriteLine("Ответ(float): " + float_Result);
                Console.WriteLine("Ответ(double): " + double_Result);
                Console.WriteLine("Для выхода в меню нажмите Escape. ");
            } while (Console.ReadKey().Key != ConsoleKey.Escape);
            Console.Clear();

        }
    }
}


