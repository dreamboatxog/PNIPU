using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;
namespace laba5
{
    class Program
    {

        public static void Create(int[] A)
        {
            bool ok;
            string temp;
            Console.Clear();
            Console.WriteLine("1.Заполнить массив случайными числами\n2.Заполнить массив вручную\n0.Назад");
            int pick;
            do
            {
                temp = Console.ReadLine();
                ok = int.TryParse(temp, out pick);
                if (!ok)
                {
                    Console.WriteLine("Ошибка. Повторите ввод переменной:");
                    ok = false;
                }
            } while (!ok);
            switch (pick)
            {
                case 1:
                    {
                        Console.Clear();
                        Random rand = new Random();
                        for (int i = 0; i < A.Length; i++)
                        {
                            A[i] = rand.Next(0, 100);
                        }
                        Console.WriteLine("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tОдномерный массив создан!");
                        Thread.Sleep(1111);
                        Console.Clear();
                    }
                    break;
                case 2:
                    {
                        int a;
                        Console.Clear();
                        Console.WriteLine("Введите элементы массива");
                        for (int i = 0; i < A.Length; i++)
                        {
                            Console.WriteLine(i+1 + ":");
                            do
                            {
                                temp = Console.ReadLine();
                                ok = int.TryParse(temp, out a);
                                if (!ok)
                                {
                                    Console.WriteLine("Ошибка. Повторите ввод переменной:");
                                    ok = false;
                                }
                            } while (!ok);
                            A[i] =a;
                        }
                        Console.Clear();
                        Console.WriteLine("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tОдномерный массив создан!");
                        Thread.Sleep(1111);
                        Console.Clear();
                    }
                    break;
                case 0:
                    break;
                default:
                    Console.WriteLine("Введите корректное значение!"); break;
            }


        }
        public static void Print(int[] A)
        {
            Console.Clear();
            do
            {
                Console.Clear();
                for (int i = 0; i <A.Length; i++)
                {
                    Console.WriteLine(i+1 + ". " + A[i] + "\t");
                }
                Console.WriteLine("Для выхода в меню нажмите Escape. ");
            } while (Console.ReadKey().Key != ConsoleKey.Escape);
            Console.Clear();
        }

        static void Task_Omass(ref int[] A)
        {
            bool ok;
            int n, k;
            string temp;
            Console.Clear();
            Console.WriteLine("Введите искомое значение n: ");
            do
            {
                temp = Console.ReadLine();
                ok = int.TryParse(temp, out n);
                if (!ok)
                {
                    Console.WriteLine("Ошибка. Повторите ввод переменной:");
                    ok = false;
                }
            } while (!ok);
            Console.WriteLine("Введите искомое значение k: ");
            do
            {
                temp = Console.ReadLine();
                ok = int.TryParse(temp, out k);
                if (!ok)
                {
                    Console.WriteLine("Ошибка. Повторите ввод переменной:");
                    ok = false;
                }
            } while (!ok); 
            if (k >= A.Length) { 
                    Console.WriteLine("Заданные значения выходят за пределы массива!");
            }
            else
            {
                int[] newMas;
                int j, i = 0;
                if (n + k - 1 >= A.Length)
                {
                    Console.WriteLine("Заданные значения выходят за пределы массива!");
                }
                else
                {
                    newMas = new int[A.Length - n];
                    for (j = 0; j < A.Length; j++)
                    {
                        if (j != k)
                        {

                            newMas[i] = A[j];
                            i++;
                        }
                        else
                        {
                            j += n - 1;
                        }

                    }
                    A = newMas;
                }
                Console.Clear();
            }
        }

        static void OMass()
        {
            bool ok;
            string temp;
            int pick;
            int[] Omass = new int[10];

            do
            {
                Console.WriteLine("1.Создать массив\n2.Напечатать массив\n3.Задание \n0.Выход");
                do
                {

                    temp = Console.ReadLine();
                    ok = int.TryParse(temp, out pick);
                    if (!ok)
                    {
                        Console.WriteLine("Ошибка. Повторите ввод переменной:");
                        ok = false;
                    }
                } while (!ok);
                switch (pick)
                {
                    case 1:
                        {
                            Create(Omass);
                            Console.Clear();
                        }
                        break;
                    case 2: Print(Omass); break;
                    case 3: Task_Omass(ref Omass); break;
                    case 0: break;
                    default:
                        Console.WriteLine("Ошибка ввода, введите корректное значение!");
                        break;
                }
            } while (pick != 0);
        }
       

        static void Print(int[,] A)
        {

            Console.Clear();
            do
            {
                Console.Clear();
               
                for (int i = 0; i < A.GetLength(0); i++)
                {
                    for (int j = 0; j < A.GetLength(1); j++)
                        Console.Write(String.Format("{0,3}", A[i, j]));
                    Console.WriteLine();
                }
                Console.WriteLine("Для выхода в меню нажмите Escape.");
            } while (Console.ReadKey().Key != ConsoleKey.Escape);
            Console.Clear();

        }
        public static void Create(int[,] A)
        {
            bool ok;
            string temp;
            Console.Clear();
            Console.WriteLine("1.Заполнить массив случайными числами\n2.Заполнить массив вручную\n0.Назад");
            int pick;
            do
            {
                temp = Console.ReadLine();
                ok = int.TryParse(temp, out pick);
                if (!ok)
                {
                    Console.WriteLine("Ошибка. Повторите ввод переменной:");
                    ok = false;
                }
            } while (!ok);
            switch (pick)
            {
                case 1:
                    {
                        Console.Clear();
                        Random rand = new Random();
                        for (int i = 0; i < A.GetLength(0); i++)
                        {
                            for (int j = 0; j < A.GetLength(1); j++)
                            {
                                A[i, j] = rand.Next(0, 100);
                            }
                        }
                        Console.WriteLine("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tОдномерный массив создан!");
                        Thread.Sleep(1111);
                        Console.Clear();
                    }
                    break;
                case 2:
                    {
                        int a;
                        Console.Clear();
                        Console.WriteLine("Введите элементы массива");
                        for (int i = 0; i < A.GetLength(0); i++)
                        {
                            for (int j = 0; j < A.GetLength(1); i++)
                            {
                                Console.WriteLine(i + 1 + ":");
                                do
                                {
                                    temp = Console.ReadLine();
                                    ok = int.TryParse(temp, out a);
                                    if (!ok)
                                    {
                                        Console.WriteLine("Ошибка. Повторите ввод переменной:");
                                        ok = false;
                                    }
                                } while (!ok);
                                A[i, j] = a;
                            }
                        }
                        Console.Clear();
                        Console.WriteLine("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tОдномерный массив создан!");
                        Thread.Sleep(1111);
                        Console.Clear();
                    }
                    break;
                case 0:
                    break;
                default:
                    Console.WriteLine("Введите корректное значение!"); break;
            }

        }

        static void DMass()
        {
            bool ok;
            string temp;
            int pick;
            int[,] Dmass = new int[10,10];

            do
            {
                Console.WriteLine("1.Создать массив\n2.Напечатать массив\n3.Задание \n0.Выход");
                do
                {

                    temp = Console.ReadLine();
                    ok = int.TryParse(temp, out pick);
                    if (!ok)
                    {
                        Console.WriteLine("Ошибка. Повторите ввод переменной:");
                        ok = false;
                    }
                } while (!ok);
                switch (pick)
                {
                    case 1:
                        {
                            Create(Dmass);
                            Console.Clear();
                        }
                        break;
                    case 2: Print(Dmass); break;
                    //case 3: Task_Omass(ref Dmass); break;
                    case 0: break;
                    default:
                        Console.WriteLine("Ошибка ввода, введите корректное значение!");
                        break;
                }
            } while (pick != 0);
        }
        static void Main(string[] args)
        {
            string temp;
            bool ok;
            int pick;
            do
            {
            Console.Clear();
            Console.WriteLine("1.Одномерный массив\n2.Двумерный массив\n3.Рваный массив\n0.Выход");
                do
                {
                    
                    temp = Console.ReadLine();
                    ok = int.TryParse(temp, out pick);
                    if (!ok)
                    {
                        Console.WriteLine("Ошибка. Повторите ввод переменной:");
                        ok = false;
                    }
                } while (!ok);
                switch(pick)
                {
                    case 1:
                    {
                        Console.Clear();
                        OMass();
                    }
                    break;
                   case 2:
                    {
                        Console.Clear();
                        DMass();
                    }
            break;
            /*case 3:
                {
                Console.Clear();
                RMass();
            }
            break;*/
                    case 0: break;
                    default:
                            Console.WriteLine("Ошибка ввода, введите корректное значение!");
                        break;
                }
            } while (pick != 0);
            //Console.WriteLine("");
            //Console.WriteLine("Заполненный массив:");
            /*int[,] arr2 = { { 2, 3, 4 }, { 2, 4, 5 } };
            int[] arr = new int[10];
            */
        }
   
    }
}
