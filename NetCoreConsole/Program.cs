using System;

using DemoLib;

namespace NetCoreConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            var person = new Person("raf");
            person.Age = 10;
            //person.Name = "raffaele";

            Console.WriteLine(person.ToString());
            Console.ReadKey();
        }
    }
}
