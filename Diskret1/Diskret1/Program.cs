using System;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;

namespace Diskret1
{
    class Program
    {
        static void Main(string[] args)
        {

            string menu;
            Console.WriteLine("\t\t\t\t\tКалькулятор множеств");
            Console.Write("\n\t\t\tВведите количество членов универсального множества: ");
            int us = Int32.Parse(Console.ReadLine());
            string[] u = new string[us];
            Console.WriteLine("\n\t\t\tВведите элементы множества через Enter");
            for (int i = 0; i < us; i++)
            {
                string k = Console.ReadLine();
                u[i] = k;
            }


            Console.Write("\n\t\t\tВведите количество элементов множества А: ");
            int asize = int.Parse(Console.ReadLine());
            string[] a = new string[asize];
            Console.WriteLine("\n\t\t\tВведите элементы множества через Enter");
            for (int i = 0; i < asize; i++)
            {
                string k = Console.ReadLine();
                a[i] = k;
            }

            Console.Write("\n\t\t\tВведите количество элементов множества B: ");
            int bsize = int.Parse(Console.ReadLine());
            string[] b = new string[bsize];
            Console.WriteLine("\n\t\t\tВведите элементы множества через Enter");
            for (int i = 0; i < bsize; i++)
            {
                string k = Console.ReadLine();
                b[i] = k;
            }

            Console.WriteLine("\n\n\n\t\t\tНажмите любую клавишу, чтобы продолжить.");

            do
            {
                Console.Clear();
                Console.WriteLine("\t\t\t\t\tВыберите, что необходимо сделать.\n1.Показать множества\n2.Выполнить объединение( A ∪ B )\n3.Выполнить пересечение( A ∩ B )\n4.Разность\n5.Симметрическая разность( A (+) B )\n6.Дополнение( ¬ A )\n7.Exit");
                menu = Console.ReadLine();

                switch (menu)
                {
                    case "1":
                        {
                            do 
                            {
                            Console.Clear();
                            Console.WriteLine("Универсум:");
                            foreach (string s in u)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("\nМножество А:");
                            foreach (string s in a)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("\nМножество Б:");
                            foreach (string s in b)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("Для выхода в меню нажмите Escape. ");
                            } while (Console.ReadKey().Key != ConsoleKey.Escape);
                            Console.Clear();
                        }
                        break;
                    case "2":
                        {
                            do
                            {
                            Console.Clear();
                            var result = a.Union(b);
                            foreach (string s in result)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("Для выхода в меню нажмите Escape. ");
                        } while (Console.ReadKey().Key != ConsoleKey.Escape) ;
                        Console.Clear();
                }
                        break;
                    case "3":
                        {
                            do
                            { 
                            Console.Clear();
                            var result = a.Intersect(b);
                            foreach (string s in result)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("Для выхода в меню нажмите Escape. ");
                            } while (Console.ReadKey().Key != ConsoleKey.Escape) ;
                            Console.Clear();
                        }
                        break;
                    case "4":
                        {
                            do
                            { 
                            Console.Clear();
                            var result = a.Except(b);
                            foreach (string s in result)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("Для выхода в меню нажмите Escape. ");
                        } while (Console.ReadKey().Key != ConsoleKey.Escape) ;
                        Console.Clear();
                }
                        break;
                    case "5":
                        {
                            do 
                            { 
                            Console.Clear();
                            var result = (a.Except(b)).Union(b.Except(a));
                            foreach (string s in result)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("Для выхода в меню нажмите Escape. ");
                        } while (Console.ReadKey().Key != ConsoleKey.Escape) ;
                        Console.Clear();
                }
                        break;
                    case "6":
                        {
                            do
                            {
                            Console.Clear();
                            var result = u.Except(a);
                            foreach (string s in result)
                            {
                                Console.WriteLine(s);
                            }
                            Console.WriteLine("Для выхода в меню нажмите Escape. ");
                            } while (Console.ReadKey().Key != ConsoleKey.Escape);
                            Console.Clear();
                        }
                        break;
                    case "7":break;
                    default:
                        {
                            Console.Clear();
                            Console.WriteLine("\n\n\n\n\n\n\t\t\t\t\tОшибка! Введено некорректное значение.");
                            Thread.Sleep(1111);
                            Console.Clear();
                        }; break;
                }
            } while (menu != "7");
            

        }

        
    }
}

