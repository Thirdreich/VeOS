using System;
using System.Collections.Generic;
using System.Text;
using Sys = Cosmos.System;
using VlaicuOS.Commands;
using Cosmos.System.FileSystem;
using VlaicuOS.Graphics;

namespace VlaicuOS
{
    public class Kernel : Sys.Kernel
    {

        private CommandManager commandManager;
        private CosmosVFS vfs;
        public static GUI gui;

        protected override void BeforeRun()
        {
            this.vfs=new CosmosVFS();
            Sys.FileSystem.VFS.VFSManager.RegisterVFS(this.vfs);
            Console.Clear();
            this.commandManager = new CommandManager();

            Console.WriteLine("Welcome To Vlaicu OS");
            


        }

        protected override void Run()
        {
            if (Kernel.gui!=null)
            {
                Kernel.gui.handleGUIInputs();
                return;
            }

            String response;
            String input = Console.ReadLine();
            response = this.commandManager.proccesInput(input);
            Console.WriteLine(response);
        }
    }
}
