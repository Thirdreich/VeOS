using Cosmos.Core;
using Cosmos.System.FileSystem;
using System;
using System.Collections.Generic;
using System.Text;
using Sys = Cosmos.System;

namespace VlaicuOS
{
    public class Kernel : Sys.Kernel
    {
        protected override void BeforeRun()
        {
            Console.Clear();
            Console.WriteLine("Welcome To Vlaicu Console desktop!");
        }

        protected override void Run()
        {
            Console.Write(">>");
            var input = Console.ReadLine();
            if(input == "about")
            {
                Console.WriteLine("VlaicuOS Zeta Beta Build 46");
            }
            if (input == "help")
            {
                Console.WriteLine("under construction");
            }
            if (input == "cls")
            {
                Console.Clear();
            }
            if (input == "off")
            {
                Console.WriteLine("Stopping Services...");
                Cosmos.System.Power.Shutdown();
            }
            if (input == "reboot")
            {
                Console.WriteLine("Stopping Services...");
                Cosmos.System.Power.Reboot();
            }
        }
    }
}
