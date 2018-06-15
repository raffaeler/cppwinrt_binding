using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using DemoLib;

namespace Net47Console
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
