using System;
using System.Diagnostics;
using System.IO;
using System.Threading.Tasks;
using Sys = Cosmos.System;
using PrismAudio;
using PrismNetwork;
using PrismTools;

namespace vlaicuOS
{
    public class Kernel : Sys.Kernel
    {
        private int num1;
        private int num2;
        private object sum;
        protected override void BeforeRun()
        {
            Console.Clear();
            Console.WriteLine("Type start to start vlaicuOS");
            var option = Console.ReadLine();
            if (option.Contains("start"))
            {
                var fs = new Sys.FileSystem.CosmosVFS();
                Sys.FileSystem.VFS.VFSManager.RegisterVFS(fs);
            }
            Console.Clear();
            Console.ForegroundColor = ConsoleColor.DarkMagenta;
            if (option.Contains("lmao"))
            {
                Console.ForegroundColor = ConsoleColor.White;
                Console.WriteLine("Loading VlaicuOS.bin.gz...");
                Console.Beep();
                Console.WriteLine("");
                Console.Write("C:\\>");
                Console.ReadLine();
                Console.WriteLine("Starting Kernel.cs...");
                Console.Write("Do you want to initiate the FAT driver? Y/n: ");
                var yesorno = Console.ReadLine();
                Console.Beep();
                if (yesorno == "Y")
                {
                    Console.WriteLine("OK");
                    var fs = new Sys.FileSystem.CosmosVFS();
                    Sys.FileSystem.VFS.VFSManager.RegisterVFS(fs);
                }
                else if (yesorno == "n")
                {
                    Console.WriteLine("OK");
                }
                else
                {
                    Console.WriteLine("Invalid answer, not enabling...");
                }
            }
            else if (option.Contains("start"))
            {
                Console.ForegroundColor = ConsoleColor.Cyan;
                Console.WriteLine("For help, run command: help.");
            }
        }
        string dir = @"0:\";
        protected override void Run()
        {
            try
            {
                Console.Write("VlaicuOS @ " + dir + ": ");
                Console.ForegroundColor = ConsoleColor.White;
                var input = Console.ReadLine();
                Console.Beep();
                if (input == "shutdown")
                {
                    Sys.Power.Shutdown();
                }
                else
                if (input.Contains("mkfile"))
                {
                    var file = (input.Remove(0, 7));
                    var _ = Directory.GetCurrentDirectory();
                    File.Create(dir + "\\" + file);

                }
                else
                if (input.Contains("mkdir"))
                {
                    Directory.CreateDirectory(input.Remove(0, 6));
                    Console.WriteLine("OK");
                }
                else
                if (input.Contains("deldir"))
                {
                    Directory.Delete(@"0:\" + input.Remove(0, 7));
                }
                else
                if (input.Contains("delfile"))
                {
                    File.Delete(input.Remove(0, 8));
                    Console.WriteLine("OK");
                }
                else
                if (input.Contains("cd"))
                {
                    Directory.SetCurrentDirectory(@"0:\" + input.Remove(0, 3));
                    dir = (@"0:\" + input.Remove(0, 3));
                }
                else
                if (input == "ls")
                {
                    foreach (var directory in Directory.GetDirectories(dir))
                    {
                        Console.ForegroundColor = ConsoleColor.DarkGreen;
                        Console.WriteLine(directory);
                    }
                    foreach (var file in Directory.GetFiles(dir))
                    {
                        Console.ForegroundColor = ConsoleColor.DarkCyan;
                        Console.WriteLine(file);
                    }

                }
                else
                if (input == ("gettime"))
                {
                    Console.ForegroundColor = ConsoleColor.DarkRed;
                    Console.WriteLine(DateTime.Now);
                }
                else
                if (input == ("echo"))
                {
                }
                else
                if (input.Contains("erase"))
                {
                    Console.Write("Old file (to erase from): ");
                    var ftef = Console.ReadLine();
                    Console.Write("New filename: ");
                    var nfn = Console.ReadLine();
                    string[] lines = System.IO.File.ReadAllLines(dir + ftef);
                    foreach (string line in lines)
                    {
                        Console.Write("Line: ");
                        Console.WriteLine(line);
                        Console.WriteLine("Delete line?(Y/n): ");
                        var yesorno = Console.ReadLine();
                        if (yesorno == "n")
                        {
                            using (var tw2 = new StreamWriter(dir + nfn, true))
                            {
                                tw2.WriteLine(line);
                            }
                        }
                        else
                        {
                        }
                    }
                    using (var tw3 = new StreamWriter(dir + nfn, true))
                    {
                        tw3.Close();
                    }
                    File.Delete(dir + ftef);
                }
                else
                if (input.Contains("readfile"))
                {
                    Console.WriteLine("");
                    var filetoread = (input.Remove(0, 9));
                    Console.WriteLine(File.ReadAllText(dir + filetoread));
                }
                else
                if (input.Contains("echo"))
                {
                    Console.WriteLine(input.Remove(0, 5));
                }
                else
                if (input == "help")
                {
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    Console.WriteLine("about = os information");
                    Console.WriteLine("help = list of commands");
                    Console.WriteLine("shutdown = shuts down system");
                    Console.WriteLine("mkfile (filename) = creates a file");
                    Console.WriteLine("mkdir (dirname) = makes a directory");
                    Console.WriteLine("deldir (dirname) = deletes a directory (not finished yet)");
                    Console.WriteLine("delfile (filename) = deletes a file");
                    Console.WriteLine("readfile (filename) = reads from file");
                    Console.WriteLine("ls = lists files and directories");
                    Console.WriteLine("cd (dirname) = changes directory");
                    Console.WriteLine("cd\\ = returns to 0:\\ directory");
                    Console.WriteLine("clear = clears the screen");
                    Console.WriteLine("echo (text) = echoes user input");
                    Console.WriteLine("gettime = displays date and time");
                }
                else
                if (input == "clear")
                {
                    Console.Clear();
                }
                else
                if (input == "about")
                {
                    Console.ForegroundColor = ConsoleColor.DarkCyan;
                    Console.WriteLine("vlaicuOS Jupiter beta");
                }
                else
                {
                    if (input == "")
                    {
                    }
                    else
                        Console.WriteLine("Unknown command: " + input);
                }
            }
            catch (Exception exbeforeformatting)
            {
                string exceptionfase2 = exbeforeformatting.ToString();
                var ex = exceptionfase2.Replace("Exception: ", "");
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("Oops:" + ex);
            }
        }

        private static int Add(int n1, int n2, int n3)
        {
            int total = (n1 + n2 + n3);
            return total;
        }
    }
}