using System;
using System.Collections.Generic;
using System.Text;
using Sys = Cosmos.System;
using VlaicuOS.Commands;

namespace VlaicuOS
{
    public class Kernel : Sys.Kernel
    {

        private CommandManager commandManager;

        protected override void BeforeRun()
        {

            Console.WriteLine("Welcome To Vlaicu OS Build 42");
            this.commandManager = new CommandManager();

        }

        protected override void Run()
        {
            String response;
            String input = Console.ReadLine();
            response = this.commandManager.proccesInput(input);
            Console.WriteLine(response);
        }
    }
}
